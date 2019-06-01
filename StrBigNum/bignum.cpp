#define PRJ_B
#include "bignum.h"
#include "stdafx.h"
/*
u - unsinged - 无符号
int - integer - 整数
dcl - decimal - 小数
*/
/*
plus - 加
minus - 减
multiply - 乘
divide - 除
*/

#ifdef UNICODE

inline BDLLEXPIMPORT wstring bignum::u_int_plus(wstring & a, wstring & b) {
	int size_a = (int)(a.size());
	int size_b = (int)(b.size());
	int max_size = max(size_a, size_b);
	--size_a;
	--size_b;
	int temp = 0;
	BOOL m = 0;
	wstring t;
	for (int i = 0; i < max_size; i++) {
		if (size_a >= 0 && size_b >= 0) {
			temp += a[size_a] + b[size_b] - 96;
			--size_a;
			--size_b;
		}
		else if (size_a >= 0) {
			temp += a[size_a] - 48;
			--size_a;
		}
		else if (size_b >= 0) {
			temp += b[size_b] - 48;
			--size_b;
		}
		if (temp >= 10) {
			m = 1;
			temp -= 10;
		}
		t.push_back(temp + 48);
		temp = 0;
		temp += m;
		m = 0;
	}
	if (temp) {
		t.push_back(_T('1'));
	}
	reverse(t.begin(), t.end());
	return t;
}

inline BDLLEXPIMPORT wstring bignum::u_int_plus(wstring & a, wstring & b, int && _temp) {
	int size_a = (int)(a.size());
	int size_b = (int)(b.size());
	int max_size = max(size_a, size_b);
	--size_a;
	--size_b;
	int temp = _temp;
	BOOL m = 0;
	wstring t;
	for (int i = 0; i < max_size; i++) {
		if (size_a >= 0 && size_b >= 0) {
			temp += a[size_a] + b[size_b] - 96;
			--size_a;
			--size_b;
		}
		else if (size_a >= 0) {
			temp += a[size_a] - 48;
			--size_a;
		}
		else if (size_b >= 0) {
			temp += b[size_b] - 48;
			--size_b;
		}
		if (temp >= 10) {
			m = 1;
			temp -= 10;
		}
		t.push_back(temp + 48);
		temp = 0;
		temp += m;
		m = 0;
	}
	if (temp) {
		t.push_back(_T('1'));
	}
	reverse(t.begin(), t.end());
	return t;
}

inline BDLLEXPIMPORT wstring bignum::u_dcl_plus(wstring & a, wstring & b) {
	int size_a = (int)(a.size());
	int size_b = (int)(b.size());
	BOOL m = 0;
	wstring t(_T("0."));
	if (size_a < size_b) {
		wstring && _t = u_int_plus(a, b.substr(0, size_a));
		m = (int)(_t.size()) - size_a;
		if (m) {
			_t.erase(_t.begin());
		}
		t += _t + b.substr(size_a);
	}
	else if (size_a > size_b) {
		wstring && _t = u_int_plus(a.substr(0, size_b), b);
		m = (int)(_t.size()) - size_b;
		if (m) {
			_t.erase(_t.begin());
		}
		t += _t + a.substr(size_b);
	}
	else {
		wstring && _t = u_int_plus(a, b);
		m = (int)(_t.size()) - size_b;
		if (m) {
			_t.erase(_t.begin());
		}
		t += _t;
	}

	if (m) {
		t[0] = _T('1');
	}
	return t;
}

inline BDLLEXPIMPORT bignum bignum::u_plus(bignum & a, bignum & b) {
	wstring t;
	if (a.sign & 2 && b.sign & 2) {
		wstring _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(1 + d_a);
		_b = b.num.substr(1 + d_b);
		wstring && _t = u_dcl_plus(_a, _b);
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_t[0] == _T('1')) {
			t += u_int_plus(_a, _b, 1) + _T('.');
		}
		else {
			t += u_int_plus(_a, _b) + _T('.');
		}
		t += _t.substr(2);
	}
	else if (a.sign & 2) {
		wstring _a;
		auto d_a = a.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		t += u_int_plus(_a, b.num) + _T('.');
		_a = a.num.substr(1 + d_a);
		t += _a;
	}
	else if (b.sign & 2) {
		wstring _b;
		auto d_b = b.num.find(_T('.'));
		_b = b.num.substr(0, d_b);
		t += u_int_plus(_b, a.num) + _T('.');
		_b = b.num.substr(1 + d_b);
		t += _b;
	}
	else {
		t = u_int_plus(a.num, b.num);
	}
	return t;
}

inline BDLLEXPIMPORT wstring __minus(wstring a) {
	int size = (int)(a.size());
	int z = 106;
	int temp;
	int b = 0;
	for (int i = size - 1; i >= 0; --i) {
		temp = z - b - a[i];
		b = 1;
		if (temp > _T('9')) {
			temp -= 10;
			b = 0;
		}
		a[i] = temp;
	}
	return a;
}

inline BDLLEXPIMPORT wstring bignum::u_int_minus(wstring & a, wstring & b) {
	int size_a = (int)(a.size());
	int size_b = (int)(b.size());
	int max_size = max(size_a, size_b);
	--size_a;
	--size_b;
	int temp = 0;
	BOOL m = 0;
	wstring t;
	if (bignum(a) > bignum(b)) {
		for (int i = 0; i < max_size; i++) {
			if (size_a >= 0 && size_b >= 0) {
				temp += a[size_a] - b[size_b];
				--size_a;
				--size_b;
			}
			else if (size_a >= 0) {
				temp += a[size_a] - 48;
				--size_a;
			}
			if (temp < 0) {
				m = 1;
				temp += 10;
			}
			t.push_back(temp + 48);
			temp = 0;
			temp -= m;
			m = 0;
		}
	}
	else if (bignum(a) < bignum(b)) {
		for (int i = 0; i < max_size; i++) {
			if (size_a >= 0 && size_b >= 0) {
				temp += b[size_b] - a[size_a];
				--size_a;
				--size_b;
			}
			else if (size_b >= 0) {
				temp += b[size_b] - 48;
				--size_b;
			}
			if (temp < 0) {
				m = 1;
				temp += 10;
			}
			t.push_back(temp + 48);
			temp = 0;
			temp -= m;
			m = 0;
		}
		t.push_back(_T('-'));
	}
	else t = _T("0");
	reverse(t.begin(), t.end());
	return t;
}

inline BDLLEXPIMPORT wstring bignum::u_int_minus(wstring & a, wstring & b, int && _temp) {
	int size_a = (int)(a.size());
	int size_b = (int)(b.size());
	int max_size = max(size_a, size_b);
	--size_a;
	--size_b;
	int temp = _temp;
	BOOL m = 0;
	wstring t;
	if (bignum(a) > bignum(b)) {
		for (int i = 0; i < max_size; i++) {
			if (size_a >= 0 && size_b >= 0) {
				temp += a[size_a] - b[size_b];
				--size_a;
				--size_b;
			}
			else if (size_a >= 0) {
				temp += a[size_a] - 48;
				--size_a;
			}
			if (temp < 0) {
				m = 1;
				temp += 10;
			}
			t.push_back(temp + 48);
			temp = 0;
			temp -= m;
			m = 0;
		}
	}
	else if (bignum(a) < bignum(b)) {
		for (int i = 0; i < max_size; i++) {
			if (size_a >= 0 && size_b >= 0) {
				temp += b[size_b] - a[size_a];
				--size_a;
				--size_b;
			}
			else if (size_b >= 0) {
				temp += b[size_b] - 48;
				--size_b;
			}
			if (temp < 0) {
				m = 1;
				temp += 10;
			}
			t.push_back(temp + 48);
			temp = 0;
			temp -= m;
			m = 0;
		}
		t.push_back(_T('-'));
	}
	else t = _T("0");
	reverse(t.begin(), t.end());
	return t;
}

inline BDLLEXPIMPORT wstring bignum::u_dcl_minus(wstring & a, wstring & b) {
	int size_a = (int)(a.size());
	int size_b = (int)(b.size());
	BOOL m = 0;
	wstring t(_T("0."));
	if (a > b) {
		if (size_a < size_b) {
			wstring && p = b.substr(0, size_a);
			wstring && _t = u_int_minus(a, p, -1);
			t += _t + __minus(b.substr(size_a));
		}
		else if (size_a > size_b) {
			wstring && _t = u_int_minus(a.substr(0, size_b), b);
			t += _t + a.substr(size_b);
		}
		else {
			t += u_int_minus(a, b);
		}
	}
	else if (a < b) {
		if (size_a > size_b) {
			wstring && p = a.substr(0, size_b);
			wstring && _t = u_int_minus(b, p, -1);
			t += __minus(_t + __minus(a.substr(size_b)));
		}
		else if (size_a < size_b) {
			wstring && p = b.substr(0, size_a);
			wstring && _t = u_int_minus(p, a);
			t += __minus(_t + b.substr(size_a));
		}
		else {
			t += __minus(u_int_minus(a, b));
		}
		t[0] = _T('1');
	}
	else {
		t = _T("0");
	}

	if (m) {
		t[0] = _T('1');
		t[2] = 106 - t[2];
	}
	return t;
}

inline BDLLEXPIMPORT bignum bignum::_u_minus(bignum & a, bignum & b) {
	wstring t;
	if (a.sign & 2 && b.sign & 2) {
		wstring _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(1 + d_a);
		_b = b.num.substr(1 + d_b);
		wstring && _t = u_dcl_minus(_a, _b);
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_t[0] == _T('1')) {
			t += u_int_minus(_a, _b, -1) + _T('.');
		}
		else {
			t += u_int_minus(_a, _b) + _T('.');
		}
		t += _t.substr(2);
	}
	else if (a.sign & 2) {
		wstring _a;
		auto d_a = a.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		t += u_int_minus(_a, b.num) + _T('.');
		_a = a.num.substr(1 + d_a);
		t += _a;
	}
	else if (b.sign & 2) {
		wstring _b;
		auto d_b = b.num.find(_T('.'));
		_b = b.num.substr(0, d_b);
		t += u_int_minus(a.num, _b, -1) + _T('.');
		_b = __minus(b.num.substr(1 + d_b));
		t += _b;
	}
	else {
		t = u_int_minus(a.num, b.num);
	}
	format(t);
	return t;
}

inline BDLLEXPIMPORT bignum bignum::u_minus(bignum & a, bignum & b) {
	if (a > b) {
		return _u_minus(a, b);
	}
	else if (a < b) {
		return wstring(_T("-")) + _u_minus(b, a).num;
	}
	else {
		return wstring(_T("0"));
	}
}


inline BDLLEXPIMPORT wstring bignum::u_int_multiply(wstring & a, wstring & b) {
	if (a == _T("0") || b == _T("0")) {
		return _T("0");
	}
	int size_a = int(a.size());
	int size_b = int(b.size());

	wstring t(size_a + size_b, _T('0'));
	for (int i = size_a - 1; i >= 0; --i) {
		for (int j = size_b - 1; j >= 0; --j) {
			int temp = (a[i] - 48) * (b[j] - 48);
			int _temp = t[i + j + 1] - 48 + temp;
			if (_temp / 10) {
				t[i + j + 1] = (_temp % 10) + 48;
				t[i + j] += (_temp / 10);
			}
			else {
				t[i + j + 1] = _temp + 48;
			}
		}
	}
	return t;
}

inline BDLLEXPIMPORT bignum bignum::u_multiply(bignum & a, bignum & b) {
	wstring _a = a.num;
	wstring _b = b.num;
	size_t _a_d = 0;
	size_t _b_d = 0;
	if (a.sign & 2) {
		_a_d = _a.find(_T('.'));
		_a.erase(_a_d, 1);
	}
	else {
		_a_d = _a.size();
	}
	if (b.sign & 2) {
		_b_d = _b.find(_T('.'));
		_b.erase(_b_d, 1);
	}
	else {
		_b_d = _b.size();
	}
	wstring t = u_int_multiply(_a, _b);
	if (_a_d + _b_d) {
		auto z = _a_d + _b_d;
		if (z >= t.size()) {
			return t;
		}
		wstring && _t = t.substr(z);
		t.erase(z);
		t.push_back(_T('.'));
		t += _t;
	}
	return t;
}


inline BDLLEXPIMPORT wstring bignum::u_int_divide(wstring & a, wstring & b) {
	if (b == _T("0")) {
		return _T("");
	}
	wstring t, temp;
	auto _size = b.size(), a_size = a.size();
	size_t i = 0U;
	auto j = 0U;
#ifdef DECIMAL
#if DECIMAL > 0
	auto __size = a.size() + DECIMAL + 1;
#endif // DECIMAL > 0
#else
	auto __size = a.size() + 2;
#endif // DECIMAL
	BOOL m = 0;
	temp = a.substr(i, _size);
	i += _size;
	while (i < __size) {
		j = 0U;
		while (1) {
			if (u_GEQ(temp, b)) {
				temp = u_int_minus(temp, b);
				j++;
			}
			else {
				break;
			}
		}
		t.push_back(48 + j);
		if (i >= a_size) {
			temp.push_back(_T('0'));
		}
		else {
			temp.push_back(a[i]);
		}
		++i;
		format(temp);
		if (i > a_size + 1 && m == 0) {
			m = 1;
			t.push_back(_T('.'));
		}
		if (i == a_size + 1) {
			m = 1;
			t.push_back(_T('.'));
		}
	}
	return t;
}

inline BDLLEXPIMPORT bignum bignum::u_divide(bignum & a, bignum & b) {
	wstring _a = a.num;
	wstring _b = b.num;
	size_t _a_d = 0;
	size_t _b_d = 0;
	BOOL m = 0;
	if (a.sign & 2) {
		_a_d = _a.find(_T('.'));
		_a.erase(_a_d, 1);
		_a_d = _a.size() - _a_d;
		format(_a);
	}
	if (b.sign & 2) {
		_b_d = _b.find(_T('.'));
		_b.erase(_b_d, 1);
		_b_d = _b.size() - _b_d;
		format(_b);
	}
	wstring t;
	if (_a_d || _b_d) {
		t = u_int_divide(_a, _b);//TODO : a or b is decimal
	}
	else {
		t = u_int_divide(_a, _b);
		m = 1;
	}
	if (t == _T("")) {
		return 0;
	}
	int _d = int(_a_d) - int(_b_d);
	if (_d > 0) {
		auto _find = t.find(_T('.'));
		if (_find == wstring::npos) {
			t += _T(".0");
		}
		wstring temp(_d, _T('0'));
		temp += t.substr(0, _find);
		t = temp.substr(0, temp.size() - _d) + _T(".") + temp.substr(temp.size() - _d) + t.substr(_find + 1);
	}
	else if (_d < 0) {
		auto _find = t.find(_T('.'));
		if (_find == wstring::npos) {
			t += _T(".0");
		}
		_d = -_d;
		wstring temp(_d, _T('0'));
		t += temp;
		temp += t.substr(0, _find);
		t = temp + t.substr(_find + 1, _d) + _T(".") + t.substr(_find + _d + 1);
	}
#ifdef DIVINT
	if (m == 1) {
		bignum temp(t);
		return temp.INT();
	}
#endif // DIVNOINT
	return t;
}

inline BDLLEXPIMPORT wstring bignum::u_int_mod(wstring & a, wstring & b) {
	if (b == _T("0")) {
		return _T("");
	}
	wstring t, temp;
	auto _size = b.size(), a_size = a.size();
	size_t i = 0U, j = 0U;
	auto __size = a.size() + 1;
	BOOL m = 0;
	temp = a.substr(i, _size);
	i += _size;
	while (i < __size) {
		while (1) {
			if (u_GEQ(temp, b)) {
				temp = u_int_minus(temp, b);
			}
			else {
				break;
			}
		}
		if (i >= a_size) {
			return temp;
		}
		else {
			temp.push_back(a[i]);
		}
		++i;
		format(temp);
	}
	return t;
}

inline BDLLEXPIMPORT bignum bignum::u_mod(bignum & a, bignum & b) {
	wstring _a = a.num;
	wstring _b = b.num;
	if (a.sign & 2) {
		return 0;
	}
	if (b.sign & 2) {
		return 0;
	}
	wstring t;
	t = u_int_mod(_a, _b);
	return t;
}

//opposite 返回相反数
inline BDLLEXPIMPORT bignum bignum::opposite() {
	wstring t(num);
	if (sign & 1) {
		t.erase(0, 1);
	}
	else {
		t = _T("-") + t;
	}
	return t;
}

//abs 返回绝对值
inline BDLLEXPIMPORT bignum bignum::absolute() {
	if (sign & 1) {
		return this->opposite();
	}
	else {
		return *this;
	}
}

//INT 返回整数部分
inline BDLLEXPIMPORT bignum bignum::INT() {
	wstring t(num);
	if (sign & 2) {
		t = t.substr(0, t.find(_T('.')));
	}
	return t;
}

//格式化 自身 返回 sign
inline BDLLEXPIMPORT BOOL bignum::format() {
	sign = 0;
	if (num[0] == _T('-')) {
		sign |= 1;
		num.erase(num.begin());
	}
	int dcl = (int)(num.find(_T('.')));
	wstring e;
	if (dcl == wstring::npos) {
		dcl = (int)(num.size());
	}
	else {
		wstring t(num.substr(dcl + 1));
		reverse(t.begin(), t.end());
		t = u_int_format(t);
		reverse(t.begin(), t.end());
		e = move(t);
	}
	wstring b(u_int_format(num.substr(0, dcl)));
	if (b == _T("")) {
		b = _T("0");
	}
	if (sign & 1) {
		num = _T("-");
	}
	else {
		num = _T("");
	}
	if (e == _T("")) {
		if (b == _T("0")) {
			sign = 0;
			num = _T("0");
			return sign;
		}
		num += b;
	}
	else {
		num += b + _T(".") + e;
		sign |= 2;
	}
	return sign;
}

//格式化 wstring 返回 sign
inline BDLLEXPIMPORT BOOL bignum::format(wstring & num) {
	BOOL sign_new = 0;
	if (num[0] == _T('-')) {
		sign_new |= 1;
		num.erase(num.begin());
	}
	int dcl = (int)(num.find(_T('.')));
	wstring e;
	if (dcl == wstring::npos) {
		dcl = (int)(num.size());
	}
	else {
		wstring t(num.substr(dcl + 1));
		reverse(t.begin(), t.end());
		t = u_int_format(t);
		reverse(t.begin(), t.end());
		e = move(t);
	}
	wstring b(u_int_format(num.substr(0, dcl)));
	if (b == _T("")) {
		if (b == _T("0")) {
			sign = 0;
			num = _T("0");
			return sign;
		}
		b = _T("0");
	}
	if (sign_new & 1) {
		num = _T("-");
	}
	else {
		num = _T("");
	}
	if (e == _T("")) {
		num += b;
	}
	else {
		num += b + _T(".") + e;
		sign_new |= 2;
	}
	return sign_new;
}

#else

inline BDLLEXPIMPORT string bignum::u_int_plus(string & a, string & b) {
	int size_a = (int)(a.size());
	int size_b = (int)(b.size());
	int max_size = max(size_a, size_b);
	--size_a;
	--size_b;
	int temp = 0;
	BOOL m = 0;
	string t;
	for (int i = 0; i < max_size; i++) {
		if (size_a >= 0 && size_b >= 0) {
			temp += a[size_a] + b[size_b] - 96;
			--size_a;
			--size_b;
		}
		else if (size_a >= 0) {
			temp += a[size_a] - 48;
			--size_a;
		}
		else if (size_b >= 0) {
			temp += b[size_b] - 48;
			--size_b;
		}
		if (temp >= 10) {
			m = 1;
			temp -= 10;
		}
		t.push_back(temp + 48);
		temp = 0;
		temp += m;
		m = 0;
	}
	if (temp) {
		t.push_back(_T('1'));
	}
	reverse(t.begin(), t.end());
	return t;
}

inline BDLLEXPIMPORT string bignum::u_int_plus(string & a, string & b, int && _temp) {
	int size_a = (int)(a.size());
	int size_b = (int)(b.size());
	int max_size = max(size_a, size_b);
	--size_a;
	--size_b;
	int temp = _temp;
	BOOL m = 0;
	string t;
	for (int i = 0; i < max_size; i++) {
		if (size_a >= 0 && size_b >= 0) {
			temp += a[size_a] + b[size_b] - 96;
			--size_a;
			--size_b;
		}
		else if (size_a >= 0) {
			temp += a[size_a] - 48;
			--size_a;
		}
		else if (size_b >= 0) {
			temp += b[size_b] - 48;
			--size_b;
		}
		if (temp >= 10) {
			m = 1;
			temp -= 10;
		}
		t.push_back(temp + 48);
		temp = 0;
		temp += m;
		m = 0;
	}
	if (temp) {
		t.push_back(_T('1'));
	}
	reverse(t.begin(), t.end());
	return t;
}

inline BDLLEXPIMPORT string bignum::u_dcl_plus(string & a, string & b) {
	int size_a = (int)(a.size());
	int size_b = (int)(b.size());
	BOOL m = 0;
	string t("0.");
	if (size_a < size_b) {
		string && _t = u_int_plus(a, b.substr(0, size_a));
		m = (int)(_t.size()) - size_a;
		if (m) {
			_t.erase(_t.begin());
		}
		t += _t + b.substr(size_a);
	}
	else if (size_a > size_b) {
		string && _t = u_int_plus(a.substr(0, size_b), b);
		m = (int)(_t.size()) - size_b;
		if (m) {
			_t.erase(_t.begin());
		}
		t += _t + a.substr(size_b);
	}
	else {
		string && _t = u_int_plus(a, b);
		m = (int)(_t.size()) - size_b;
		if (m) {
			_t.erase(_t.begin());
		}
		t += _t;
	}

	if (m) {
		t[0] = _T('1');
	}
	return t;
}

inline BDLLEXPIMPORT bignum bignum::u_plus(bignum & a, bignum & b) {
	string t;
	if (a.sign & 2 && b.sign & 2) {
		string _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(1 + d_a);
		_b = b.num.substr(1 + d_b);
		string && _t = u_dcl_plus(_a, _b);
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_t[0] == _T('1')) {
			t += u_int_plus(_a, _b, 1) + _T('.');
		}
		else {
			t += u_int_plus(_a, _b) + _T('.');
		}
		t += _t.substr(2);
	}
	else if (a.sign & 2) {
		string _a;
		auto d_a = a.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		t += u_int_plus(_a, b.num) + _T('.');
		_a = a.num.substr(1 + d_a);
		t += _a;
	}
	else if (b.sign & 2) {
		string _b;
		auto d_b = b.num.find(_T('.'));
		_b = b.num.substr(0, d_b);
		t += u_int_plus(_b, a.num) + _T('.');
		_b = b.num.substr(1 + d_b);
		t += _b;
	}
	else {
		t = u_int_plus(a.num, b.num);
	}
	return t;
}

inline BDLLEXPIMPORT string __minus(string a) {
	int size = (int)(a.size());
	int z = 106;
	int temp;
	int b = 0;
	for (int i = size - 1; i >= 0; --i) {
		temp = z - b - a[i];
		b = 1;
		if (temp > _T('9')) {
			temp -= 10;
			b = 0;
		}
		a[i] = temp;
	}
	return a;
}

inline BDLLEXPIMPORT string bignum::u_int_minus(string & a, string & b) {
	int size_a = (int)(a.size());
	int size_b = (int)(b.size());
	int max_size = max(size_a, size_b);
	--size_a;
	--size_b;
	int temp = 0;
	BOOL m = 0;
	string t;
	if (bignum(a) > bignum(b)) {
		for (int i = 0; i < max_size; i++) {
			if (size_a >= 0 && size_b >= 0) {
				temp += a[size_a] - b[size_b];
				--size_a;
				--size_b;
			}
			else if (size_a >= 0) {
				temp += a[size_a] - 48;
				--size_a;
			}
			if (temp < 0) {
				m = 1;
				temp += 10;
			}
			t.push_back(temp + 48);
			temp = 0;
			temp -= m;
			m = 0;
		}
	}
	else if (bignum(a) < bignum(b)) {
		for (int i = 0; i < max_size; i++) {
			if (size_a >= 0 && size_b >= 0) {
				temp += b[size_b] - a[size_a];
				--size_a;
				--size_b;
			}
			else if (size_b >= 0) {
				temp += b[size_b] - 48;
				--size_b;
			}
			if (temp < 0) {
				m = 1;
				temp += 10;
			}
			t.push_back(temp + 48);
			temp = 0;
			temp -= m;
			m = 0;
		}
		t.push_back(_T('-'));
	}
	else t = "0";
	reverse(t.begin(), t.end());
	return t;
}

inline BDLLEXPIMPORT string bignum::u_int_minus(string & a, string & b, int && _temp) {
	int size_a = (int)(a.size());
	int size_b = (int)(b.size());
	int max_size = max(size_a, size_b);
	--size_a;
	--size_b;
	int temp = _temp;
	BOOL m = 0;
	string t;
	if (bignum(a) > bignum(b)) {
		for (int i = 0; i < max_size; i++) {
			if (size_a >= 0 && size_b >= 0) {
				temp += a[size_a] - b[size_b];
				--size_a;
				--size_b;
			}
			else if (size_a >= 0) {
				temp += a[size_a] - 48;
				--size_a;
			}
			if (temp < 0) {
				m = 1;
				temp += 10;
			}
			t.push_back(temp + 48);
			temp = 0;
			temp -= m;
			m = 0;
		}
	}
	else if (bignum(a) < bignum(b)) {
		for (int i = 0; i < max_size; i++) {
			if (size_a >= 0 && size_b >= 0) {
				temp += b[size_b] - a[size_a];
				--size_a;
				--size_b;
			}
			else if (size_b >= 0) {
				temp += b[size_b] - 48;
				--size_b;
			}
			if (temp < 0) {
				m = 1;
				temp += 10;
			}
			t.push_back(temp + 48);
			temp = 0;
			temp -= m;
			m = 0;
		}
		t.push_back(_T('-'));
	}
	else t = "0";
	reverse(t.begin(), t.end());
	return t;
}

inline BDLLEXPIMPORT string bignum::u_dcl_minus(string & a, string & b) {
	int size_a = (int)(a.size());
	int size_b = (int)(b.size());
	BOOL m = 0;
	string t("0.");
	if (a > b) {
		if (size_a < size_b) {
			string && p = b.substr(0, size_a);
			string && _t = u_int_minus(a, p, -1);
			t += _t + __minus(b.substr(size_a));
		}
		else if (size_a > size_b) {
			string && _t = u_int_minus(a.substr(0, size_b), b);
			t += _t + a.substr(size_b);
		}
		else {
			t += u_int_minus(a, b);
		}
	}
	else if (a < b) {
		if (size_a > size_b) {
			string && p = a.substr(0, size_b);
			string && _t = u_int_minus(b, p, -1);
			t += __minus(_t + __minus(a.substr(size_b)));
		}
		else if (size_a < size_b) {
			string && p = b.substr(0, size_a);
			string && _t = u_int_minus(p, a);
			t += __minus(_t + b.substr(size_a));
		}
		else {
			t += __minus(u_int_minus(a, b));
		}
		t[0] = _T('1');
	}
	else {
		t = "0";
	}

	if (m) {
		t[0] = _T('1');
		t[2] = 106 - t[2];
	}
	return t;
}

inline BDLLEXPIMPORT bignum bignum::_u_minus(bignum & a, bignum & b) {
	string t;
	if (a.sign & 2 && b.sign & 2) {
		string _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(1 + d_a);
		_b = b.num.substr(1 + d_b);
		string && _t = u_dcl_minus(_a, _b);
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_t[0] == _T('1')) {
			t += u_int_minus(_a, _b, -1) + _T('.');
		}
		else {
			t += u_int_minus(_a, _b) + _T('.');
		}
		t += _t.substr(2);
	}
	else if (a.sign & 2) {
		string _a;
		auto d_a = a.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		t += u_int_minus(_a, b.num) + _T('.');
		_a = a.num.substr(1 + d_a);
		t += _a;
	}
	else if (b.sign & 2) {
		string _b;
		auto d_b = b.num.find(_T('.'));
		_b = b.num.substr(0, d_b);
		t += u_int_minus(a.num, _b, -1) + _T('.');
		_b = __minus(b.num.substr(1 + d_b));
		t += _b;
	}
	else {
		t = u_int_minus(a.num, b.num);
	}
	format(t);
	return t;
}

inline BDLLEXPIMPORT bignum bignum::u_minus(bignum & a, bignum & b) {
	if (a > b) {
		return _u_minus(a, b);
	}
	else if (a < b) {
		return string("-") + _u_minus(b, a).num;
	}
	else {
		return string("0");
	}
}


inline BDLLEXPIMPORT string bignum::u_int_multiply(string & a, string & b) {
	if (a == "0" || b == "0") {
		return "0";
	}
	int size_a = int(a.size());
	int size_b = int(b.size());

	string t(size_a + size_b, _T('0'));
	for (int i = size_a - 1; i >= 0; --i) {
		for (int j = size_b - 1; j >= 0; --j) {
			int temp = (a[i] - 48) * (b[j] - 48);
			int _temp = t[i + j + 1] - 48 + temp;
			if (_temp / 10) {
				t[i + j + 1] = (_temp % 10) + 48;
				t[i + j] += (_temp / 10);
			}
			else {
				t[i + j + 1] = _temp + 48;
			}
		}
	}
	return t;
}

inline BDLLEXPIMPORT bignum bignum::u_multiply(bignum & a, bignum & b) {
	string _a = a.num;
	string _b = b.num;
	size_t _a_d = 0;
	size_t _b_d = 0;
	if (a.sign & 2) {
		_a_d = _a.find(_T('.'));
		_a.erase(_a_d, 1);
	}
	else {
		_a_d = _a.size();
	}
	if (b.sign & 2) {
		_b_d = _b.find(_T('.'));
		_b.erase(_b_d, 1);
	}
	else {
		_b_d = _b.size();
	}
	string t = u_int_multiply(_a, _b);
	if (_a_d + _b_d) {
		auto z = _a_d + _b_d;
		if (z >= t.size()) {
			return t;
		}
		string && _t = t.substr(z);
		t.erase(z);
		t.push_back(_T('.'));
		t += _t;
	}
	return t;
}


inline BDLLEXPIMPORT string bignum::u_int_divide(string & a, string & b) {
	if (b == "0") {
		return "";
	}
	string t, temp;
	auto _size = b.size(), a_size = a.size();
	size_t i = 0U;
	auto j = 0U;
#ifdef DECIMAL
#if DECIMAL > 0
	auto __size = a.size() + DECIMAL + 1;
#endif // DECIMAL > 0
#else
	auto __size = a.size() + 2;
#endif // DECIMAL
	BOOL m = 0;
	temp = a.substr(i, _size);
	i += _size;
	while (i < __size) {
		j = 0U;
		while (1) {
			if (u_GEQ(temp, b)) {
				temp = u_int_minus(temp, b);
				j++;
			}
			else {
				break;
			}
		}
		t.push_back(48 + j);
		if (i >= a_size) {
			temp.push_back(_T('0'));
		}
		else {
			temp.push_back(a[i]);
		}
		++i;
		format(temp);
		if (i > a_size + 1 && m == 0) {
			m = 1;
			t.push_back(_T('.'));
		}
		if (i == a_size + 1) {
			m = 1;
			t.push_back(_T('.'));
		}
	}
	return t;
}

inline BDLLEXPIMPORT bignum bignum::u_divide(bignum & a, bignum & b) {
	string _a = a.num;
	string _b = b.num;
	size_t _a_d = 0;
	size_t _b_d = 0;
	BOOL m = 0;
	if (a.sign & 2) {
		_a_d = _a.find(_T('.'));
		_a.erase(_a_d, 1);
		_a_d = _a.size() - _a_d;
		format(_a);
	}
	if (b.sign & 2) {
		_b_d = _b.find(_T('.'));
		_b.erase(_b_d, 1);
		_b_d = _b.size() - _b_d;
		format(_b);
	}
	string t;
	if (_a_d || _b_d) {
		t = u_int_divide(_a, _b);//TODO : a or b is decimal
	}
	else {
		t = u_int_divide(_a, _b);
		m = 1;
	}
	if (t == "") {
		return 0;
	}
	int _d = int(_a_d) - int(_b_d);
	if (_d > 0) {
		auto _find = t.find(_T('.'));
		if (_find == string::npos) {
			t += ".0";
		}
		string temp(_d, _T('0'));
		temp += t.substr(0, _find);
		t = temp.substr(0, temp.size() - _d) + "." + temp.substr(temp.size() - _d) + t.substr(_find + 1);
	}
	else if (_d < 0) {
		auto _find = t.find(_T('.'));
		if (_find == string::npos) {
			t += ".0";
		}
		_d = -_d;
		string temp(_d, _T('0'));
		t += temp;
		temp += t.substr(0, _find);
		t = temp + t.substr(_find + 1, _d) + "." + t.substr(_find + _d + 1);
	}
#ifdef DIVINT
	if (m == 1) {
		bignum temp(t);
		return temp.INT();
	}
#endif // DIVNOINT
	return t;
}

inline BDLLEXPIMPORT string bignum::u_int_mod(string & a, string & b) {
	if (b == _T("0")) {
		return _T("");
	}
	string t, temp;
	auto _size = b.size(), a_size = a.size();
	size_t i = 0U, j = 0U;
	auto __size = a.size() + 1;
	BOOL m = 0;
	temp = a.substr(i, _size);
	i += _size;
	while (i < __size) {
		while (1) {
			if (u_GEQ(temp, b)) {
				temp = u_int_minus(temp, b);
			}
			else {
				break;
			}
		}
		if (i >= a_size) {
			return temp;
		}
		else {
			temp.push_back(a[i]);
		}
		++i;
		format(temp);
	}
	return t;
}

inline BDLLEXPIMPORT bignum bignum::u_mod(bignum & a, bignum & b) {
	string _a = a.num;
	string _b = b.num;
	if (a.sign & 2) {
		return 0;
	}
	if (b.sign & 2) {
		return 0;
	}
	string t;
	t = u_int_mod(_a, _b);
	return t;
}

//opposite 返回相反数
inline BDLLEXPIMPORT bignum bignum::opposite() {
	string t(num);
	if (sign & 1) {
		t.erase(0, 1);
	}
	else {
		t = "-" + t;
	}
	return t;
}

//abs 返回绝对值
inline BDLLEXPIMPORT bignum bignum::absolute() {
	if (sign & 1) {
		return this->opposite();
	}
	else {
		return *this;
	}
}

//INT 返回整数部分
inline BDLLEXPIMPORT bignum bignum::INT() {
	string t(num);
	if (sign & 2) {
		t = t.substr(0, t.find(_T('.')));
	}
	return t;
}

//格式化 自身 返回 sign
inline BDLLEXPIMPORT BOOL bignum::format() {
	sign = 0;
	if (num[0] == _T('-')) {
		sign |= 1;
		num.erase(num.begin());
	}
	int dcl = (int)(num.find(_T('.')));
	string e;
	if (dcl == string::npos) {
		dcl = (int)(num.size());
	}
	else {
		string t(num.substr(dcl + 1));
		reverse(t.begin(), t.end());
		t = u_int_format(t);
		reverse(t.begin(), t.end());
		e = move(t);
	}
	string b(u_int_format(num.substr(0, dcl)));
	if (b == "") {
		b = "0";
	}
	if (sign & 1) {
		num = "-";
	}
	else {
		num = "";
	}
	if (e == "") {
		if (b == "0") {
			sign = 0;
			num = "0";
			return sign;
		}
		num += b;
	}
	else {
		num += b + "." + e;
		sign |= 2;
	}
	return sign;
}

//格式化 string 返回 sign
inline BDLLEXPIMPORT BOOL bignum::format(string & num) {
	BOOL sign_new = 0;
	if (num[0] == _T('-')) {
		sign_new |= 1;
		num.erase(num.begin());
	}
	int dcl = (int)(num.find(_T('.')));
	string e;
	if (dcl == string::npos) {
		dcl = (int)(num.size());
	}
	else {
		string t(num.substr(dcl + 1));
		reverse(t.begin(), t.end());
		t = u_int_format(t);
		reverse(t.begin(), t.end());
		e = move(t);
	}
	string b(u_int_format(num.substr(0, dcl)));
	if (b == "") {
		if (b == "0") {
			sign = 0;
			num = "0";
			return sign;
		}
		b = "0";
	}
	if (sign_new & 1) {
		num = "-";
	}
	else {
		num = "";
	}
	if (e == "") {
		num += b;
	}
	else {
		num += b + "." + e;
		sign_new |= 2;
	}
	return sign_new;
}

#endif // UNICODE
