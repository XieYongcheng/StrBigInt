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
inline BDLLEXPIMPORT bignum bignum::u_int_plus(bignum & a, bignum & b) {
	return u_int_plus(a.num, b.num);
}

inline BDLLEXPIMPORT bignum bignum::u_int_plus(bignum && a, bignum && b) {
	return u_int_plus(a.num, b.num);
}

inline BDLLEXPIMPORT bignum bignum::u_int_minus(bignum & a, bignum & b) {
	return u_int_minus(a.num, b.num);
}

inline BDLLEXPIMPORT bignum bignum::u_int_minus(bignum && a, bignum && b) {
	return u_int_minus(a.num, b.num);
}

inline BDLLEXPIMPORT wstring bignum::u_int_plus(wstring && a, wstring && b) {
	return u_int_plus(a, b);
}

inline BDLLEXPIMPORT wstring bignum::u_int_minus(wstring && a, wstring && b) {
	return u_int_minus(a, b);
}

inline BDLLEXPIMPORT bignum bignum::u_dcl_plus(bignum & a, bignum & b) {
	return u_dcl_plus(a.num, b.num);
}

inline BDLLEXPIMPORT bignum bignum::u_dcl_plus(bignum && a, bignum && b) {
	return u_dcl_plus(a.num, b.num);
}

inline BDLLEXPIMPORT bignum bignum::u_dcl_minus(bignum & a, bignum & b) {
	return u_dcl_minus(a.num, b.num);
}

inline BDLLEXPIMPORT bignum bignum::u_dcl_minus(bignum && a, bignum && b) {
	return u_dcl_minus(a.num, b.num);
}

inline BDLLEXPIMPORT wstring bignum::u_dcl_plus(wstring && a, wstring && b) {
	return u_dcl_plus(a, b);
}

inline BDLLEXPIMPORT wstring bignum::u_dcl_minus(wstring && a, wstring && b) {
	return u_dcl_minus(a, b);
}

inline BDLLEXPIMPORT bignum bignum::u_plus(bignum && a, bignum && b) {
	return u_plus(a, b);
}

inline BDLLEXPIMPORT bignum bignum::_u_minus(bignum && a, bignum && b) {
	return _u_minus(a, b);
}

inline BDLLEXPIMPORT bignum bignum::u_minus(bignum && a, bignum && b) {
	return u_minus(a, b);
}

inline BDLLEXPIMPORT bignum bignum::u_int_multiply(bignum & a, bignum & b) {
	return u_int_multiply(a.num, b.num);
}

inline BDLLEXPIMPORT bignum bignum::u_int_multiply(bignum && a, bignum && b) {
	return u_int_multiply(a, b);
}

inline BDLLEXPIMPORT bignum bignum::u_int_divide(bignum & a, bignum & b) {
	return u_int_divide(a.num, b.num);
}

inline BDLLEXPIMPORT bignum bignum::u_int_divide(bignum && a, bignum && b) {
	return u_int_divide(a, b);
}

inline BDLLEXPIMPORT wstring bignum::u_int_multiply(wstring && a, wstring && b) {
	return u_int_multiply(a, b);
}

inline BDLLEXPIMPORT bignum bignum::u_multiply(bignum && a, bignum && b) {
	return u_multiply(a, b);
}

inline BDLLEXPIMPORT wstring bignum::u_int_divide(wstring && a, wstring && b) {
	return u_int_divide(a, b);
}

inline BDLLEXPIMPORT bignum bignum::u_divide(bignum && a, bignum && b) {
	return u_divide(a, b);
}

inline BDLLEXPIMPORT bignum bignum::u_int_mod(bignum & a, bignum & b) {
	return u_int_mod(a.num, b.num);
}

inline BDLLEXPIMPORT bignum bignum::u_int_mod(bignum && a, bignum && b) {
	return u_int_mod(a.num, b.num);
}

inline BDLLEXPIMPORT wstring bignum::u_int_mod(wstring && a, wstring && b) {
	return u_int_mod(a, b);
}

inline BDLLEXPIMPORT bignum bignum::u_mod(bignum && a, bignum && b) {
	return u_mod(a, b);
}



/*
EQU - 等于
NEQ - 不等于
LSS - 小于
LEQ - 小于或等于
GTR - 大于
GEQ - 大于或等于
less - 小
greater - 大
equal - 等于
*/

inline BDLLEXPIMPORT bool s_LSS(wstring &a, wstring &b) {
	if (a.size() < b.size()) {
		return true;
	}
	else if (a.size() > b.size()) {
		return false;
	}
	else return a < b;
}

inline BDLLEXPIMPORT bool s_LSS(wstring &&a, wstring &&b) {
	if (a.size() < b.size()) {
		return true;
	}
	else if (a.size() > b.size()) {
		return false;
	}
	else return a < b;
}

inline BDLLEXPIMPORT bool s_GTR(wstring &a, wstring &b) {
	if (a.size() > b.size()) {
		return true;
	}
	else if (a.size() < b.size()) {
		return false;
	}
	else return a > b;
}

inline BDLLEXPIMPORT bool s_GTR(wstring &&a, wstring &&b) {
	if (a.size() > b.size()) {
		return true;
	}
	else if (a.size() < b.size()) {
		return false;
	}
	else return a > b;
}

//EQU - 等于
inline BDLLEXPIMPORT bool bignum::u_int_EQU(bignum & a, bignum & b) {
	return (a.num == b.num);
}

//EQU - 等于
inline BDLLEXPIMPORT bool bignum::u_int_EQU(bignum && a, bignum && b) {
	return (a.num == b.num);
}

//NEQ - 不等于
inline BDLLEXPIMPORT bool bignum::u_int_NEQ(bignum & a, bignum & b) {
	return (a.num != b.num);
}

//NEQ - 不等于
inline BDLLEXPIMPORT bool bignum::u_int_NEQ(bignum && a, bignum && b) {
	return (a.num != b.num);
}

//LSS - 小于
inline BDLLEXPIMPORT bool bignum::u_int_LSS(bignum & a, bignum & b) {
	if (a.num.size() < b.num.size()) {
		return true;
	}
	else if (a.num.size() > b.num.size()) {
		return false;
	}
	else return (a.num < b.num);
}

//LSS - 小于
inline BDLLEXPIMPORT bool bignum::u_int_LSS(bignum && a, bignum && b) {
	if (a.num.size() < b.num.size()) {
		return true;
	}
	else if (a.num.size() > b.num.size()) {
		return false;
	}
	else return (a.num < b.num);
}

//LEQ - 小于或等于
inline BDLLEXPIMPORT bool bignum::u_int_LEQ(bignum & a, bignum & b) {
	if (a.num.size() < b.num.size()) {
		return true;
	}
	else if (a.num.size() > b.num.size()) {
		return false;
	}
	else return (a.num <= b.num);
}

//LEQ - 小于或等于
inline BDLLEXPIMPORT bool bignum::u_int_LEQ(bignum && a, bignum && b) {
	if (a.num.size() < b.num.size()) {
		return true;
	}
	else if (a.num.size() > b.num.size()) {
		return false;
	}
	else return (a.num <= b.num);
}

//GTR - 大于
inline BDLLEXPIMPORT bool bignum::u_int_GTR(bignum & a, bignum & b) {
	if (a.num.size() < b.num.size()) {
		return false;
	}
	else if (a.num.size() > b.num.size()) {
		return true;
	}
	else return (a.num > b.num);
}

//GTR - 大于
inline BDLLEXPIMPORT bool bignum::u_int_GTR(bignum && a, bignum && b) {
	if (a.num.size() < b.num.size()) {
		return false;
	}
	else if (a.num.size() > b.num.size()) {
		return true;
	}
	else return (a.num > b.num);
}

//GEQ - 大于或等于
inline BDLLEXPIMPORT bool bignum::u_int_GEQ(bignum & a, bignum & b) {
	if (a.num.size() < b.num.size()) {
		return false;
	}
	else if (a.num.size() > b.num.size()) {
		return true;
	}
	else return (a.num >= b.num);
}

//GEQ - 大于或等于
inline BDLLEXPIMPORT bool bignum::u_int_GEQ(bignum && a, bignum && b) {
	if (a.num.size() < b.num.size()) {
		return false;
	}
	else if (a.num.size() > b.num.size()) {
		return true;
	}
	else return (a.num >= b.num);
}

//EQU - 等于
inline BDLLEXPIMPORT bool bignum::u_EQU(bignum & a, bignum & b) {
	return a.num == b.num;
}

//EQU - 等于
inline BDLLEXPIMPORT bool bignum::u_EQU(bignum && a, bignum && b) {
	return a.num == b.num;
}

//NEQ - 不等于
inline BDLLEXPIMPORT bool bignum::u_NEQ(bignum & a, bignum & b) {
	return !u_EQU(a, b);
}

//NEQ - 不等于
inline BDLLEXPIMPORT bool bignum::u_NEQ(bignum && a, bignum && b) {
	return !u_EQU(move(a), move(b));
}

//LSS - 小于
inline BDLLEXPIMPORT bool bignum::u_LSS(bignum & a, bignum & b) {
	if (a.sign & 2 && b.sign & 2) {
		wstring _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			_a = a.num.substr(d_a);
			_b = b.num.substr(d_b);
			if (_a < _b) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (a.sign & 2) {
		wstring _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			return false;
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (b.sign & 2) {
		wstring _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			return true;
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else {
		return u_int_LSS(a, b);
	}
}

//LSS - 小于
inline BDLLEXPIMPORT bool bignum::u_LSS(bignum && a, bignum && b) {
	if (a.sign & 2 && b.sign & 2) {
		wstring _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			_a = a.num.substr(d_a);
			_b = b.num.substr(d_b);
			if (_a < _b) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (a.sign & 2) {
		wstring _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			return false;
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (b.sign & 2) {
		wstring _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			return true;
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else {
		return u_int_LSS(a, b);
	}
}

//LEQ - 小于或等于
inline BDLLEXPIMPORT bool bignum::u_LEQ(bignum & a, bignum & b) {
	return !u_GTR(a, b);
}

//LEQ - 小于或等于
inline BDLLEXPIMPORT bool bignum::u_LEQ(bignum && a, bignum && b) {
	return !u_GTR(move(a), move(b));
}

//GTR - 大于
inline BDLLEXPIMPORT bool bignum::u_GTR(bignum & a, bignum & b) {
	if (a.sign & 2 && b.sign & 2) {
		wstring _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			_a = a.num.substr(d_a + 1);
			_b = b.num.substr(d_b + 1);
			if (_a > _b) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (a.sign & 2) {
		wstring _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			return true;
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (b.sign & 2) {
		wstring _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			return false;
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else {
		return u_int_GTR(a, b);
	}
}

//GTR - 大于
inline BDLLEXPIMPORT bool bignum::u_GTR(bignum && a, bignum && b) {
	if (a.sign & 2 && b.sign & 2) {
		wstring _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			_a = a.num.substr(d_a + 1);
			_b = b.num.substr(d_b + 1);
			if (_a > _b) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (a.sign & 2) {
		wstring _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			return true;
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (b.sign & 2) {
		wstring _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			return false;
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else {
		return u_int_GTR(a, b);
	}
}

//GEQ - 大于或等于
inline BDLLEXPIMPORT bool bignum::u_GEQ(bignum & a, bignum & b) {
	return !u_LSS(a, b);
}

//GEQ - 大于或等于
inline BDLLEXPIMPORT bool bignum::u_GEQ(bignum && a, bignum && b) {
	return !u_LSS(move(a), move(b));
}

//EQU - 等于
inline BDLLEXPIMPORT bool bignum::u_EQU(wstring & a, wstring & b) {
	return a == b;
}

//EQU - 等于
inline BDLLEXPIMPORT bool bignum::u_EQU(wstring && a, wstring && b) {
	return a == b;
}

//NEQ - 不等于
inline BDLLEXPIMPORT bool bignum::u_NEQ(wstring & a, wstring & b) {
	return !u_EQU(a, b);
}

//NEQ - 不等于
inline BDLLEXPIMPORT bool bignum::u_NEQ(wstring && a, wstring && b) {
	return !u_EQU(a, b);
}

//LSS - 小于
inline BDLLEXPIMPORT bool bignum::u_LSS(wstring & a, wstring & b) {
	auto a_sign = format(a), b_sign = format(b);
	if (a_sign & 2 && b_sign & 2) {
		wstring _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			_a = a.substr(d_a + 1);
			_b = b.substr(d_b + 1);
			if (_a < _b) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (a_sign & 2) {
		wstring _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			return false;
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (b_sign & 2) {
		wstring _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			return true;
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else {
		return u_int_LSS(a, b);
	}
}

//LSS - 小于
inline BDLLEXPIMPORT bool bignum::u_LSS(wstring && a, wstring && b) {
	auto a_sign = format(a), b_sign = format(b);
	if (a_sign & 2 && b_sign & 2) {
		wstring _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			_a = a.substr(d_a + 1);
			_b = b.substr(d_b + 1);
			if (_a < _b) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (a_sign & 2) {
		wstring _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			return false;
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (b_sign & 2) {
		wstring _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			return true;
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else {
		return u_int_LSS(a, b);
	}
}

//LEQ - 小于或等于
inline BDLLEXPIMPORT bool bignum::u_LEQ(wstring & a, wstring & b) {
	return !u_GTR(a, b);
}

//LEQ - 小于或等于
inline BDLLEXPIMPORT bool bignum::u_LEQ(wstring && a, wstring && b) {
	return !u_GTR(a, b);
}

//GTR - 大于
inline BDLLEXPIMPORT bool bignum::u_GTR(wstring & a, wstring & b) {
	auto a_sign = format(a), b_sign = format(b);
	if (a_sign & 2 && b_sign & 2) {
		wstring _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			_a = a.substr(d_a + 1);
			_b = b.substr(d_b + 1);
			if (_a > _b) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (a_sign & 2) {
		wstring _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			return true;
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (b_sign & 2) {
		wstring _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			return false;
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else {
		return u_int_GTR(a, b);
	}
}

//GTR - 大于
inline BDLLEXPIMPORT bool bignum::u_GTR(wstring && a, wstring && b) {
	auto a_sign = format(a), b_sign = format(b);
	if (a_sign & 2 && b_sign & 2) {
		wstring _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			_a = a.substr(d_a + 1);
			_b = b.substr(d_b + 1);
			if (_a > _b) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (a_sign & 2) {
		wstring _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			return true;
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (b_sign & 2) {
		wstring _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			return false;
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else {
		return u_int_GTR(a, b);
	}
}

//GEQ - 大于或等于
inline BDLLEXPIMPORT bool bignum::u_GEQ(wstring & a, wstring & b) {
	return !u_LSS(a, b);
}

//GEQ - 大于或等于
inline BDLLEXPIMPORT bool bignum::u_GEQ(wstring && a, wstring && b) {
	return !u_LSS(a, b);
}

//重置 sign 值
inline BDLLEXPIMPORT BOOL bignum::re_sign() {
	if (this->num[0] == _T('-')) {
		sign |= 1;
	}
	for (auto i : this->num) {
		if (i == _T('.')) {
			sign |= 2;
			break;
		}
	}
	return sign;
}

//返回 格式化 过的数字
inline BDLLEXPIMPORT bignum bignum::u_int_format(bignum & str) {
	return u_int_format(str.num);
}

//返回 格式化 过的数字
inline BDLLEXPIMPORT bignum bignum::u_int_format(bignum && str) {
	return u_int_format(str.num);
}

//返回 格式化 过的数字
inline BDLLEXPIMPORT wstring bignum::u_int_format(wstring & str) {
	wstring s = str;
	int a = 0;
	int b = 0;
	for (auto i : s) {
		if (b) break;
		if (i == _T('0')) {
			++a;
			b = 0;
		}
		else {
			b = 1;
		}
	}
	s.erase(0, a);
	return s;
}

//返回 格式化 过的数字
inline BDLLEXPIMPORT wstring bignum::u_int_format(wstring && str) {
	return u_int_format(str);
}

//constructor

inline BDLLEXPIMPORT bignum::bignum() {
	num = _T("");
	sign = 0;
}

inline BDLLEXPIMPORT bignum::bignum(wstring num) {
	this->num = num;
	format();
}

inline BDLLEXPIMPORT bignum::bignum(unsigned int num) {
	this->num = to_wstring(num);
	format();
}

inline BDLLEXPIMPORT bignum::bignum(signed int num) {
	this->num = to_wstring(num);
	format();
}

inline BDLLEXPIMPORT bignum::bignum(unsigned long num) {
	this->num = to_wstring(num);
	format();
}

inline BDLLEXPIMPORT bignum::bignum(signed long num) {
	this->num = to_wstring(num);
	format();
}

inline BDLLEXPIMPORT bignum::bignum(unsigned long long num) {
	this->num = to_wstring(num);
	format();
}

inline BDLLEXPIMPORT bignum::bignum(signed long long num) {
	this->num = to_wstring(num);
	format();
}

inline BDLLEXPIMPORT bignum::bignum(float num) {
	this->num = to_wstring(num);
	format();
}

inline BDLLEXPIMPORT bignum::bignum(double num) {
	this->num = to_wstring(num);
	format();
}

inline BDLLEXPIMPORT bignum::bignum(long double num) {
	this->num = to_wstring(num);
	format();
}

//constructor end

//destructor

inline BDLLEXPIMPORT bignum::~bignum() {
	this->num = _T("");
	this->sign = 0;

}

//destructor end

// transform

inline BDLLEXPIMPORT bignum::operator wstring() {
	return num;
}

inline BDLLEXPIMPORT bignum::operator wchar_t*() {
	return const_cast<wchar_t*>(num.c_str());
}

// transform end

inline BDLLEXPIMPORT const wstring bignum::str() const {
	return num;
}

inline BDLLEXPIMPORT const wchar_t* bignum::c_str() const {
	return num.c_str();
}

inline BDLLEXPIMPORT bignum & bignum::get_self() const {
	auto a = this;
	return *const_cast<bignum*>(a);
}

inline BDLLEXPIMPORT bignum bignum::copy_self() const {
	return bignum(this->str());
}


// =
inline BDLLEXPIMPORT void bignum::operator =(wstring &num) {
	this->num = num;
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(wstring &&num) {
	this->num = num;
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(unsigned int &num) {
	this->num = to_wstring(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(unsigned int &&num) {
	this->num = to_wstring(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(signed int &num) {
	this->num = to_wstring(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(signed int &&num) {
	this->num = to_wstring(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(unsigned long &num) {
	this->num = to_wstring(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(unsigned long &&num) {
	this->num = to_wstring(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(signed long &num) {
	this->num = to_wstring(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(signed long &&num) {
	this->num = to_wstring(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(unsigned long long &num) {
	this->num = to_wstring(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(unsigned long long &&num) {
	this->num = to_wstring(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(signed long long &num) {
	this->num = to_wstring(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(signed long long &&num) {
	this->num = to_wstring(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(float &num) {
	this->num = to_wstring(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(float &&num) {
	this->num = to_wstring(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(double &num) {
	this->num = to_wstring(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(double &&num) {
	this->num = to_wstring(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(long double &num) {
	this->num = to_wstring(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(long double &&num) {
	this->num = to_wstring(num);
	format();
}
// = end

// +
inline BDLLEXPIMPORT bignum bignum::operator +(bignum &n) {
	bignum a = this->str(), b = n.str();
	if (sign & 1) {
		if (n.sign & 1) {
			return (u_plus(a.opposite(), b.opposite())).opposite();
		}
		else {
			return b - a.opposite();
		}
	}
	else if (n.sign & 1) {
		return a - b.opposite();
	}
	else {
		return u_plus(a, b);
	}
}
inline BDLLEXPIMPORT bignum bignum::operator +(unsigned int &n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(signed int &n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(unsigned long &n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(signed long &n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(unsigned long long &n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(signed long long &n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(float &n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(double &n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(long double &n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(bignum &&n) {
	return *this + n;
}
inline BDLLEXPIMPORT bignum bignum::operator +(unsigned int &&n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(signed int &&n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(unsigned long &&n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(signed long &&n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(unsigned long long &&n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(signed long long &&n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(float &&n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(double &&n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(long double &&n) {
	return *this + bignum(n);
}
// + end

// -
inline BDLLEXPIMPORT bignum bignum::operator -(bignum &n) {
	bignum a = this->str(), b = n.str();
	if (sign & 1) {
		if (n.sign & 1) {
			return a + b.opposite();
		}
		else {
			return (b + a.opposite()).opposite();
		}
	}
	else if (n.sign & 1) {
		return a + b.opposite();
	}
	else {
		return u_minus(a, b);
	}
}
inline BDLLEXPIMPORT bignum bignum::operator -(unsigned int &n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(signed int &n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(unsigned long &n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(signed long &n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(unsigned long long &n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(signed long long &n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(float &n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(double &n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(long double &n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(bignum &&n) {
	return *this - n;
}
inline BDLLEXPIMPORT bignum bignum::operator -(unsigned int &&n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(signed int &&n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(unsigned long &&n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(signed long &&n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(unsigned long long &&n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(signed long long &&n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(float &&n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(double &&n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(long double &&n) {
	return *this - bignum(n);
}
// - end

// *
inline BDLLEXPIMPORT bignum bignum::operator *(bignum &n) {
	if (sign & 1) {
		if (n.sign & 1) {
			return u_multiply(this->opposite(), n.opposite());
		}
		else {
			return u_multiply(this->opposite(), n.copy_self()).opposite();
		}
	}
	else {
		if (n.sign & 1) {
			return u_multiply(this->copy_self(), n.opposite()).opposite();
		}
		else {
			return u_multiply(*this, n);
		}
	}
}
inline BDLLEXPIMPORT bignum bignum::operator *(unsigned int &n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(signed int &n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(unsigned long &n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(signed long &n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(unsigned long long &n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(signed long long &n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(float &n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(double &n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(long double &n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(bignum &&n) {
	return *this * n;
}
inline BDLLEXPIMPORT bignum bignum::operator *(unsigned int &&n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(signed int &&n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(unsigned long &&n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(signed long &&n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(unsigned long long &&n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(signed long long &&n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(float &&n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(double &&n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(long double &&n) {
	return *this * bignum(n);
}
// * end

// /
inline BDLLEXPIMPORT bignum bignum::operator /(bignum &n) {
	if (sign & 1) {
		if (n.sign & 1) {
			return u_divide(this->opposite(), n.opposite());
		}
		else {
			return u_divide(this->opposite(), n.copy_self()).opposite();
		}
	}
	else {
		if (n.sign & 1) {
			return u_divide(this->copy_self(), n.opposite()).opposite();
		}
		else {
			return u_divide(*this, n);
		}
	}
}
inline BDLLEXPIMPORT bignum bignum::operator /(unsigned int &n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(signed int &n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(unsigned long &n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(signed long &n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(unsigned long long &n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(signed long long &n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(float &n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(double &n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(long double &n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(bignum &&n) {
	return *this / n;
}
inline BDLLEXPIMPORT bignum bignum::operator /(unsigned int &&n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(signed int &&n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(unsigned long &&n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(signed long &&n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(unsigned long long &&n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(signed long long &&n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(float &&n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(double &&n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(long double &&n) {
	return *this / bignum(n);
}
// / end

// %
inline BDLLEXPIMPORT bignum bignum::operator%(bignum & n) {
	if (sign & 1) {
		if (n.sign & 1) {
			return u_mod(this->opposite(), n.opposite()).opposite();
		}
		else {
			return u_mod(this->opposite(), n.copy_self()).opposite();
		}
	}
	else {
		if (n.sign & 1) {
			return u_mod(this->copy_self(), n.opposite());
		}
		else {
			return u_mod(*this, n);
		}
	}
}
inline BDLLEXPIMPORT bignum bignum::operator%(unsigned int & n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(signed int & n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(unsigned long & n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(signed long & n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(unsigned long long & n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(signed long long & n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(float & n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(double & n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(long double & n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(bignum && n) {
	return *this % n;
}
inline BDLLEXPIMPORT bignum bignum::operator%(unsigned int && n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(signed int && n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(unsigned long && n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(signed long && n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(unsigned long long && n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(signed long long && n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(float && n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(double && n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(long double && n) {
	return *this % bignum(n);
}
// % end

// >
inline BDLLEXPIMPORT bool bignum::operator >(bignum &n) {
	if (sign & 1 && n.sign & 1) {
		wstring ta(num), tb(n.num);
		ta.erase(ta.begin());
		tb.erase(tb.begin());
		return u_LSS(ta, tb);
	}
	else if (sign & 1) {
		return false;
	}
	else if (n.sign & 1) {
		return true;
	}
	else {
		return u_GTR(*this, n);
	}
}
inline BDLLEXPIMPORT bool bignum::operator >(unsigned int &n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(signed int &n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(unsigned long &n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(signed long &n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(unsigned long long &n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(signed long long &n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(float &n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(double &n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(long double &n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(bignum &&n) {
	if (sign & 1 && n.sign & 1) {
		wstring ta(num), tb(n.num);
		ta.erase(ta.begin());
		tb.erase(tb.begin());
		return u_LSS(ta, tb);
	}
	else if (sign & 1) {
		return false;
	}
	else if (n.sign & 1) {
		return true;
	}
	else {
		return u_GTR(*this, n);
	}
}
inline BDLLEXPIMPORT bool bignum::operator >(unsigned int &&n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(signed int &&n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(unsigned long &&n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(signed long &&n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(unsigned long long &&n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(signed long long &&n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(float &&n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(double &&n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(long double &&n) {
	return *this > bignum(n);
}
// > end

// <
inline BDLLEXPIMPORT bool bignum::operator <(bignum &n) {
	if (sign & 1 && n.sign & 1) {
		wstring ta(num), tb(n.num);
		ta.erase(ta.begin());
		tb.erase(tb.begin());
		return u_GTR(ta, tb);
	}
	else if (sign & 1) {
		return true;
	}
	else if (n.sign & 1) {
		return false;
	}
	else {
		return u_LSS(*this, n);
	}
}
inline BDLLEXPIMPORT bool bignum::operator <(unsigned int &n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(signed int &n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(unsigned long &n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(signed long &n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(unsigned long long &n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(signed long long &n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(float &n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(double &n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(long double &n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(bignum &&n) {
	if (sign & 1 && n.sign & 1) {
		wstring ta(num), tb(n.num);
		ta.erase(ta.begin());
		tb.erase(tb.begin());
		return u_GTR(ta, tb);
	}
	else if (sign & 1) {
		return true;
	}
	else if (n.sign & 1) {
		return false;
	}
	else {
		return u_LSS(*this, n);
	}
}
inline BDLLEXPIMPORT bool bignum::operator <(unsigned int &&n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(signed int &&n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(unsigned long &&n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(signed long &&n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(unsigned long long &&n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(signed long long &&n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(float &&n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(double &&n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(long double &&n) {
	return *this < bignum(n);
}
// < end

// ==
inline BDLLEXPIMPORT bool bignum::operator ==(bignum &n) {
	if (sign & 1 && n.sign & 1) {
		//wstring ta(num), tb(n.num);
		//ta.erase(ta.begin());
		//tb.erase(tb.begin());
		//return u_EQU(ta, tb);
		return u_EQU(num, n.num);
	}
	else if (sign & 1) {
		return false;
	}
	else if (n.sign & 1) {
		return false;
	}
	else {
		return u_EQU(num, n.num);
	}
}
inline BDLLEXPIMPORT bool bignum::operator ==(unsigned int &n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(signed int &n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(unsigned long &n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(signed long &n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(unsigned long long &n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(signed long long &n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(float &n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(double &n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(long double &n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(bignum &&n) {
	if (sign & 1 && n.sign & 1) {
		//wstring ta(num), tb(n.num);
		//ta.erase(ta.begin());
		//tb.erase(tb.begin());
		//return u_EQU(ta, tb);
		return u_EQU(num, n.num);
	}
	else if (sign & 1) {
		return false;
	}
	else if (n.sign & 1) {
		return false;
	}
	else {
		return u_EQU(num, n.num);
	}
}
inline BDLLEXPIMPORT bool bignum::operator ==(unsigned int &&n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(signed int &&n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(unsigned long &&n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(signed long &&n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(unsigned long long &&n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(signed long long &&n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(float &&n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(double &&n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(long double &&n) {
	return *this == bignum(n);
}
// == end
#else
inline BDLLEXPIMPORT bignum bignum::u_int_plus(bignum & a, bignum & b) {
	return u_int_plus(a.num, b.num);
}

inline BDLLEXPIMPORT bignum bignum::u_int_plus(bignum && a, bignum && b) {
	return u_int_plus(a.num, b.num);
}

inline BDLLEXPIMPORT bignum bignum::u_int_minus(bignum & a, bignum & b) {
	return u_int_minus(a.num, b.num);
}

inline BDLLEXPIMPORT bignum bignum::u_int_minus(bignum && a, bignum && b) {
	return u_int_minus(a.num, b.num);
}

inline BDLLEXPIMPORT string bignum::u_int_plus(string && a, string && b) {
	return u_int_plus(a, b);
}

inline BDLLEXPIMPORT string bignum::u_int_minus(string && a, string && b) {
	return u_int_minus(a, b);
}

inline BDLLEXPIMPORT bignum bignum::u_dcl_plus(bignum & a, bignum & b) {
	return u_dcl_plus(a.num, b.num);
}

inline BDLLEXPIMPORT bignum bignum::u_dcl_plus(bignum && a, bignum && b) {
	return u_dcl_plus(a.num, b.num);
}

inline BDLLEXPIMPORT bignum bignum::u_dcl_minus(bignum & a, bignum & b) {
	return u_dcl_minus(a.num, b.num);
}

inline BDLLEXPIMPORT bignum bignum::u_dcl_minus(bignum && a, bignum && b) {
	return u_dcl_minus(a.num, b.num);
}

inline BDLLEXPIMPORT string bignum::u_dcl_plus(string && a, string && b) {
	return u_dcl_plus(a, b);
}

inline BDLLEXPIMPORT string bignum::u_dcl_minus(string && a, string && b) {
	return u_dcl_minus(a, b);
}

inline BDLLEXPIMPORT bignum bignum::u_plus(bignum && a, bignum && b) {
	return u_plus(a, b);
}

inline BDLLEXPIMPORT bignum bignum::_u_minus(bignum && a, bignum && b) {
	return _u_minus(a, b);
}

inline BDLLEXPIMPORT bignum bignum::u_minus(bignum && a, bignum && b) {
	return u_minus(a, b);
}

inline BDLLEXPIMPORT bignum bignum::u_int_multiply(bignum & a, bignum & b) {
	return u_int_multiply(a.num, b.num);
}

inline BDLLEXPIMPORT bignum bignum::u_int_multiply(bignum && a, bignum && b) {
	return u_int_multiply(a, b);
}

inline BDLLEXPIMPORT bignum bignum::u_int_divide(bignum & a, bignum & b) {
	return u_int_divide(a.num, b.num);
}

inline BDLLEXPIMPORT bignum bignum::u_int_divide(bignum && a, bignum && b) {
	return u_int_divide(a, b);
}

inline BDLLEXPIMPORT string bignum::u_int_multiply(string && a, string && b) {
	return u_int_multiply(a, b);
}

inline BDLLEXPIMPORT bignum bignum::u_multiply(bignum && a, bignum && b) {
	return u_multiply(a, b);
}

inline BDLLEXPIMPORT string bignum::u_int_divide(string && a, string && b) {
	return u_int_divide(a, b);
}

inline BDLLEXPIMPORT bignum bignum::u_divide(bignum && a, bignum && b) {
	return u_divide(a, b);
}

inline BDLLEXPIMPORT bignum bignum::u_int_mod(bignum & a, bignum & b) {
	return u_int_mod(a.num, b.num);
}

inline BDLLEXPIMPORT bignum bignum::u_int_mod(bignum && a, bignum && b) {
	return u_int_mod(a.num, b.num);
}

inline BDLLEXPIMPORT string bignum::u_int_mod(string && a, string && b) {
	return u_int_mod(a, b);
}

inline BDLLEXPIMPORT bignum bignum::u_mod(bignum && a, bignum && b) {
	return u_mod(a, b);
}



/*
EQU - 等于
NEQ - 不等于
LSS - 小于
LEQ - 小于或等于
GTR - 大于
GEQ - 大于或等于
less - 小
greater - 大
equal - 等于
*/

inline BDLLEXPIMPORT bool s_LSS(string &a, string &b) {
	if (a.size() < b.size()) {
		return true;
	}
	else if (a.size() > b.size()) {
		return false;
	}
	else return a < b;
}

inline BDLLEXPIMPORT bool s_LSS(string &&a, string &&b) {
	if (a.size() < b.size()) {
		return true;
	}
	else if (a.size() > b.size()) {
		return false;
	}
	else return a < b;
}

inline BDLLEXPIMPORT bool s_GTR(string &a, string &b) {
	if (a.size() > b.size()) {
		return true;
	}
	else if (a.size() < b.size()) {
		return false;
	}
	else return a > b;
}

inline BDLLEXPIMPORT bool s_GTR(string &&a, string &&b) {
	if (a.size() > b.size()) {
		return true;
	}
	else if (a.size() < b.size()) {
		return false;
	}
	else return a > b;
}

//EQU - 等于
inline BDLLEXPIMPORT bool bignum::u_int_EQU(bignum & a, bignum & b) {
	return (a.num == b.num);
}

//EQU - 等于
inline BDLLEXPIMPORT bool bignum::u_int_EQU(bignum && a, bignum && b) {
	return (a.num == b.num);
}

//NEQ - 不等于
inline BDLLEXPIMPORT bool bignum::u_int_NEQ(bignum & a, bignum & b) {
	return (a.num != b.num);
}

//NEQ - 不等于
inline BDLLEXPIMPORT bool bignum::u_int_NEQ(bignum && a, bignum && b) {
	return (a.num != b.num);
}

//LSS - 小于
inline BDLLEXPIMPORT bool bignum::u_int_LSS(bignum & a, bignum & b) {
	if (a.num.size() < b.num.size()) {
		return true;
	}
	else if (a.num.size() > b.num.size()) {
		return false;
	}
	else return (a.num < b.num);
}

//LSS - 小于
inline BDLLEXPIMPORT bool bignum::u_int_LSS(bignum && a, bignum && b) {
	if (a.num.size() < b.num.size()) {
		return true;
	}
	else if (a.num.size() > b.num.size()) {
		return false;
	}
	else return (a.num < b.num);
}

//LEQ - 小于或等于
inline BDLLEXPIMPORT bool bignum::u_int_LEQ(bignum & a, bignum & b) {
	if (a.num.size() < b.num.size()) {
		return true;
	}
	else if (a.num.size() > b.num.size()) {
		return false;
	}
	else return (a.num <= b.num);
}

//LEQ - 小于或等于
inline BDLLEXPIMPORT bool bignum::u_int_LEQ(bignum && a, bignum && b) {
	if (a.num.size() < b.num.size()) {
		return true;
	}
	else if (a.num.size() > b.num.size()) {
		return false;
	}
	else return (a.num <= b.num);
}

//GTR - 大于
inline BDLLEXPIMPORT bool bignum::u_int_GTR(bignum & a, bignum & b) {
	if (a.num.size() < b.num.size()) {
		return false;
	}
	else if (a.num.size() > b.num.size()) {
		return true;
	}
	else return (a.num > b.num);
}

//GTR - 大于
inline BDLLEXPIMPORT bool bignum::u_int_GTR(bignum && a, bignum && b) {
	if (a.num.size() < b.num.size()) {
		return false;
	}
	else if (a.num.size() > b.num.size()) {
		return true;
	}
	else return (a.num > b.num);
}

//GEQ - 大于或等于
inline BDLLEXPIMPORT bool bignum::u_int_GEQ(bignum & a, bignum & b) {
	if (a.num.size() < b.num.size()) {
		return false;
	}
	else if (a.num.size() > b.num.size()) {
		return true;
	}
	else return (a.num >= b.num);
}

//GEQ - 大于或等于
inline BDLLEXPIMPORT bool bignum::u_int_GEQ(bignum && a, bignum && b) {
	if (a.num.size() < b.num.size()) {
		return false;
	}
	else if (a.num.size() > b.num.size()) {
		return true;
	}
	else return (a.num >= b.num);
}

//EQU - 等于
inline BDLLEXPIMPORT bool bignum::u_EQU(bignum & a, bignum & b) {
	return a.num == b.num;
}

//EQU - 等于
inline BDLLEXPIMPORT bool bignum::u_EQU(bignum && a, bignum && b) {
	return a.num == b.num;
}

//NEQ - 不等于
inline BDLLEXPIMPORT bool bignum::u_NEQ(bignum & a, bignum & b) {
	return !u_EQU(a, b);
}

//NEQ - 不等于
inline BDLLEXPIMPORT bool bignum::u_NEQ(bignum && a, bignum && b) {
	return !u_EQU(move(a), move(b));
}

//LSS - 小于
inline BDLLEXPIMPORT bool bignum::u_LSS(bignum & a, bignum & b) {
	if (a.sign & 2 && b.sign & 2) {
		string _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			_a = a.num.substr(d_a);
			_b = b.num.substr(d_b);
			if (_a < _b) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (a.sign & 2) {
		string _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			return false;
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (b.sign & 2) {
		string _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			return true;
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else {
		return u_int_LSS(a, b);
	}
}

//LSS - 小于
inline BDLLEXPIMPORT bool bignum::u_LSS(bignum && a, bignum && b) {
	if (a.sign & 2 && b.sign & 2) {
		string _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			_a = a.num.substr(d_a);
			_b = b.num.substr(d_b);
			if (_a < _b) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (a.sign & 2) {
		string _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			return false;
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (b.sign & 2) {
		string _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			return true;
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else {
		return u_int_LSS(a, b);
	}
}

//LEQ - 小于或等于
inline BDLLEXPIMPORT bool bignum::u_LEQ(bignum & a, bignum & b) {
	return !u_GTR(a, b);
}

//LEQ - 小于或等于
inline BDLLEXPIMPORT bool bignum::u_LEQ(bignum && a, bignum && b) {
	return !u_GTR(move(a), move(b));
}

//GTR - 大于
inline BDLLEXPIMPORT bool bignum::u_GTR(bignum & a, bignum & b) {
	if (a.sign & 2 && b.sign & 2) {
		string _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			_a = a.num.substr(d_a + 1);
			_b = b.num.substr(d_b + 1);
			if (_a > _b) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (a.sign & 2) {
		string _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			return true;
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (b.sign & 2) {
		string _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			return false;
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else {
		return u_int_GTR(a, b);
	}
}

//GTR - 大于
inline BDLLEXPIMPORT bool bignum::u_GTR(bignum && a, bignum && b) {
	if (a.sign & 2 && b.sign & 2) {
		string _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			_a = a.num.substr(d_a + 1);
			_b = b.num.substr(d_b + 1);
			if (_a > _b) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (a.sign & 2) {
		string _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			return true;
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (b.sign & 2) {
		string _a, _b;
		auto d_a = a.num.find(_T('.')), d_b = b.num.find(_T('.'));
		_a = a.num.substr(0, d_a);
		_b = b.num.substr(0, d_b);
		if (_a == _b) {
			return false;
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else {
		return u_int_GTR(a, b);
	}
}

//GEQ - 大于或等于
inline BDLLEXPIMPORT bool bignum::u_GEQ(bignum & a, bignum & b) {
	return !u_LSS(a, b);
}

//GEQ - 大于或等于
inline BDLLEXPIMPORT bool bignum::u_GEQ(bignum && a, bignum && b) {
	return !u_LSS(move(a), move(b));
}

//EQU - 等于
inline BDLLEXPIMPORT bool bignum::u_EQU(string & a, string & b) {
	return a == b;
}

//EQU - 等于
inline BDLLEXPIMPORT bool bignum::u_EQU(string && a, string && b) {
	return a == b;
}

//NEQ - 不等于
inline BDLLEXPIMPORT bool bignum::u_NEQ(string & a, string & b) {
	return !u_EQU(a, b);
}

//NEQ - 不等于
inline BDLLEXPIMPORT bool bignum::u_NEQ(string && a, string && b) {
	return !u_EQU(a, b);
}

//LSS - 小于
inline BDLLEXPIMPORT bool bignum::u_LSS(string & a, string & b) {
	auto a_sign = format(a), b_sign = format(b);
	if (a_sign & 2 && b_sign & 2) {
		string _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			_a = a.substr(d_a + 1);
			_b = b.substr(d_b + 1);
			if (_a < _b) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (a_sign & 2) {
		string _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			return false;
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (b_sign & 2) {
		string _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			return true;
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else {
		return u_int_LSS(a, b);
	}
}

//LSS - 小于
inline BDLLEXPIMPORT bool bignum::u_LSS(string && a, string && b) {
	auto a_sign = format(a), b_sign = format(b);
	if (a_sign & 2 && b_sign & 2) {
		string _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			_a = a.substr(d_a + 1);
			_b = b.substr(d_b + 1);
			if (_a < _b) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (a_sign & 2) {
		string _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			return false;
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (b_sign & 2) {
		string _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			return true;
		}
		else if (s_LSS(_a, _b)) {
			return true;
		}
		return false;
	}
	else {
		return u_int_LSS(a, b);
	}
}

//LEQ - 小于或等于
inline BDLLEXPIMPORT bool bignum::u_LEQ(string & a, string & b) {
	return !u_GTR(a, b);
}

//LEQ - 小于或等于
inline BDLLEXPIMPORT bool bignum::u_LEQ(string && a, string && b) {
	return !u_GTR(a, b);
}

//GTR - 大于
inline BDLLEXPIMPORT bool bignum::u_GTR(string & a, string & b) {
	auto a_sign = format(a), b_sign = format(b);
	if (a_sign & 2 && b_sign & 2) {
		string _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			_a = a.substr(d_a + 1);
			_b = b.substr(d_b + 1);
			if (_a > _b) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (a_sign & 2) {
		string _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			return true;
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (b_sign & 2) {
		string _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			return false;
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else {
		return u_int_GTR(a, b);
	}
}

//GTR - 大于
inline BDLLEXPIMPORT bool bignum::u_GTR(string && a, string && b) {
	auto a_sign = format(a), b_sign = format(b);
	if (a_sign & 2 && b_sign & 2) {
		string _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			_a = a.substr(d_a + 1);
			_b = b.substr(d_b + 1);
			if (_a > _b) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (a_sign & 2) {
		string _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			return true;
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else if (b_sign & 2) {
		string _a, _b;
		auto d_a = a.find(_T('.')), d_b = b.find(_T('.'));
		_a = a.substr(0, d_a);
		_b = b.substr(0, d_b);
		if (_a == _b) {
			return false;
		}
		else if (s_GTR(_a, _b)) {
			return true;
		}
		return false;
	}
	else {
		return u_int_GTR(a, b);
	}
}

//GEQ - 大于或等于
inline BDLLEXPIMPORT bool bignum::u_GEQ(string & a, string & b) {
	return !u_LSS(a, b);
}

//GEQ - 大于或等于
inline BDLLEXPIMPORT bool bignum::u_GEQ(string && a, string && b) {
	return !u_LSS(a, b);
}

//重置 sign 值
inline BDLLEXPIMPORT BOOL bignum::re_sign() {
	if (this->num[0] == _T('-')) {
		sign |= 1;
	}
	for (auto i : this->num) {
		if (i == _T('.')) {
			sign |= 2;
			break;
		}
	}
	return sign;
}

//返回 格式化 过的数字
inline BDLLEXPIMPORT bignum bignum::u_int_format(bignum & str) {
	return u_int_format(str.num);
}

//返回 格式化 过的数字
inline BDLLEXPIMPORT bignum bignum::u_int_format(bignum && str) {
	return u_int_format(str.num);
}

//返回 格式化 过的数字
inline BDLLEXPIMPORT string bignum::u_int_format(string & str) {
	string s = str;
	int a = 0;
	int b = 0;
	for (auto i : s) {
		if (b) break;
		if (i == _T('0')) {
			++a;
			b = 0;
		}
		else {
			b = 1;
		}
	}
	s.erase(0, a);
	return s;
}

//返回 格式化 过的数字
inline BDLLEXPIMPORT string bignum::u_int_format(string && str) {
	return u_int_format(str);
}

//constructor

inline BDLLEXPIMPORT bignum::bignum() {
	num = "";
	sign = 0;
}

inline BDLLEXPIMPORT bignum::bignum(string num) {
	this->num = num;
	format();
}

inline BDLLEXPIMPORT bignum::bignum(unsigned int num) {
	this->num = to_string(num);
	format();
}

inline BDLLEXPIMPORT bignum::bignum(signed int num) {
	this->num = to_string(num);
	format();
}

inline BDLLEXPIMPORT bignum::bignum(unsigned long num) {
	this->num = to_string(num);
	format();
}

inline BDLLEXPIMPORT bignum::bignum(signed long num) {
	this->num = to_string(num);
	format();
}

inline BDLLEXPIMPORT bignum::bignum(unsigned long long num) {
	this->num = to_string(num);
	format();
}

inline BDLLEXPIMPORT bignum::bignum(signed long long num) {
	this->num = to_string(num);
	format();
}

inline BDLLEXPIMPORT bignum::bignum(float num) {
	this->num = to_string(num);
	format();
}

inline BDLLEXPIMPORT bignum::bignum(double num) {
	this->num = to_string(num);
	format();
}

inline BDLLEXPIMPORT bignum::bignum(long double num) {
	this->num = to_string(num);
	format();
}

//constructor end

//destructor

inline BDLLEXPIMPORT bignum::~bignum() {
	this->num = _T("");
	this->sign = 0;

}

//destructor end

// transform

inline BDLLEXPIMPORT bignum::operator string() {
	return num;
}

inline BDLLEXPIMPORT bignum::operator char*() {
	return const_cast<char*>(num.c_str());
}

// transform end

inline BDLLEXPIMPORT const string bignum::str() const {
	return num;
}

inline BDLLEXPIMPORT const char* bignum::c_str() const {
	return num.c_str();
}

inline BDLLEXPIMPORT bignum & bignum::get_self() const {
	auto a = this;
	return *const_cast<bignum*>(a);
}

inline BDLLEXPIMPORT bignum bignum::copy_self() const {
	return bignum(this->str());
}


// =
inline BDLLEXPIMPORT void bignum::operator =(string &num) {
	this->num = num;
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(string &&num) {
	this->num = num;
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(unsigned int &num) {
	this->num = to_string(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(unsigned int &&num) {
	this->num = to_string(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(signed int &num) {
	this->num = to_string(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(signed int &&num) {
	this->num = to_string(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(unsigned long &num) {
	this->num = to_string(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(unsigned long &&num) {
	this->num = to_string(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(signed long &num) {
	this->num = to_string(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(signed long &&num) {
	this->num = to_string(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(unsigned long long &num) {
	this->num = to_string(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(unsigned long long &&num) {
	this->num = to_string(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(signed long long &num) {
	this->num = to_string(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(signed long long &&num) {
	this->num = to_string(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(float &num) {
	this->num = to_string(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(float &&num) {
	this->num = to_string(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(double &num) {
	this->num = to_string(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(double &&num) {
	this->num = to_string(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(long double &num) {
	this->num = to_string(num);
	format();
}
inline BDLLEXPIMPORT void bignum::operator =(long double &&num) {
	this->num = to_string(num);
	format();
}
// = end

// +
inline BDLLEXPIMPORT bignum bignum::operator +(bignum &n) {
	bignum a = this->str(), b = n.str();
	if (sign & 1) {
		if (n.sign & 1) {
			return (u_plus(a.opposite(), b.opposite())).opposite();
		}
		else {
			return b - a.opposite();
		}
	}
	else if (n.sign & 1) {
		return a - b.opposite();
	}
	else {
		return u_plus(a, b);
	}
}
inline BDLLEXPIMPORT bignum bignum::operator +(unsigned int &n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(signed int &n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(unsigned long &n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(signed long &n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(unsigned long long &n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(signed long long &n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(float &n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(double &n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(long double &n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(bignum &&n) {
	return *this + n;
}
inline BDLLEXPIMPORT bignum bignum::operator +(unsigned int &&n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(signed int &&n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(unsigned long &&n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(signed long &&n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(unsigned long long &&n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(signed long long &&n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(float &&n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(double &&n) {
	return *this + bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator +(long double &&n) {
	return *this + bignum(n);
}
// + end

// -
inline BDLLEXPIMPORT bignum bignum::operator -(bignum &n) {
	bignum a = this->str(), b = n.str();
	if (sign & 1) {
		if (n.sign & 1) {
			return a + b.opposite();
		}
		else {
			return (b + a.opposite()).opposite();
		}
	}
	else if (n.sign & 1) {
		return a + b.opposite();
	}
	else {
		return u_minus(a, b);
	}
}
inline BDLLEXPIMPORT bignum bignum::operator -(unsigned int &n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(signed int &n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(unsigned long &n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(signed long &n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(unsigned long long &n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(signed long long &n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(float &n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(double &n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(long double &n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(bignum &&n) {
	return *this - n;
}
inline BDLLEXPIMPORT bignum bignum::operator -(unsigned int &&n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(signed int &&n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(unsigned long &&n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(signed long &&n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(unsigned long long &&n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(signed long long &&n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(float &&n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(double &&n) {
	return *this - bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator -(long double &&n) {
	return *this - bignum(n);
}
// - end

// *
inline BDLLEXPIMPORT bignum bignum::operator *(bignum &n) {
	if (sign & 1) {
		if (n.sign & 1) {
			return u_multiply(this->opposite(), n.opposite());
		}
		else {
			return u_multiply(this->opposite(), n.copy_self()).opposite();
		}
	}
	else {
		if (n.sign & 1) {
			return u_multiply(this->copy_self(), n.opposite()).opposite();
		}
		else {
			return u_multiply(*this, n);
		}
	}
}
inline BDLLEXPIMPORT bignum bignum::operator *(unsigned int &n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(signed int &n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(unsigned long &n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(signed long &n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(unsigned long long &n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(signed long long &n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(float &n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(double &n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(long double &n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(bignum &&n) {
	return *this * n;
}
inline BDLLEXPIMPORT bignum bignum::operator *(unsigned int &&n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(signed int &&n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(unsigned long &&n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(signed long &&n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(unsigned long long &&n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(signed long long &&n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(float &&n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(double &&n) {
	return *this * bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator *(long double &&n) {
	return *this * bignum(n);
}
// * end

// /
inline BDLLEXPIMPORT bignum bignum::operator /(bignum &n) {
	if (sign & 1) {
		if (n.sign & 1) {
			return u_divide(this->opposite(), n.opposite());
		}
		else {
			return u_divide(this->opposite(), n.copy_self()).opposite();
		}
	}
	else {
		if (n.sign & 1) {
			return u_divide(this->copy_self(), n.opposite()).opposite();
		}
		else {
			return u_divide(*this, n);
		}
	}
}
inline BDLLEXPIMPORT bignum bignum::operator /(unsigned int &n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(signed int &n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(unsigned long &n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(signed long &n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(unsigned long long &n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(signed long long &n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(float &n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(double &n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(long double &n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(bignum &&n) {
	return *this / n;
}
inline BDLLEXPIMPORT bignum bignum::operator /(unsigned int &&n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(signed int &&n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(unsigned long &&n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(signed long &&n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(unsigned long long &&n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(signed long long &&n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(float &&n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(double &&n) {
	return *this / bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator /(long double &&n) {
	return *this / bignum(n);
}
// / end

// %
inline BDLLEXPIMPORT bignum bignum::operator%(bignum & n) {
	if (sign & 1) {
		if (n.sign & 1) {
			return u_mod(this->opposite(), n.opposite()).opposite();
		}
		else {
			return u_mod(this->opposite(), n.copy_self()).opposite();
		}
	}
	else {
		if (n.sign & 1) {
			return u_mod(this->copy_self(), n.opposite());
		}
		else {
			return u_mod(*this, n);
		}
	}
}
inline BDLLEXPIMPORT bignum bignum::operator%(unsigned int & n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(signed int & n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(unsigned long & n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(signed long & n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(unsigned long long & n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(signed long long & n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(float & n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(double & n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(long double & n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(bignum && n) {
	return *this % n;
}
inline BDLLEXPIMPORT bignum bignum::operator%(unsigned int && n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(signed int && n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(unsigned long && n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(signed long && n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(unsigned long long && n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(signed long long && n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(float && n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(double && n) {
	return *this % bignum(n);
}
inline BDLLEXPIMPORT bignum bignum::operator%(long double && n) {
	return *this % bignum(n);
}
// % end

// >
inline BDLLEXPIMPORT bool bignum::operator >(bignum &n) {
	if (sign & 1 && n.sign & 1) {
		string ta(num), tb(n.num);
		ta.erase(ta.begin());
		tb.erase(tb.begin());
		return u_LSS(ta, tb);
	}
	else if (sign & 1) {
		return false;
	}
	else if (n.sign & 1) {
		return true;
	}
	else {
		return u_GTR(*this, n);
	}
}
inline BDLLEXPIMPORT bool bignum::operator >(unsigned int &n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(signed int &n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(unsigned long &n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(signed long &n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(unsigned long long &n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(signed long long &n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(float &n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(double &n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(long double &n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(bignum &&n) {
	if (sign & 1 && n.sign & 1) {
		string ta(num), tb(n.num);
		ta.erase(ta.begin());
		tb.erase(tb.begin());
		return u_LSS(ta, tb);
	}
	else if (sign & 1) {
		return false;
	}
	else if (n.sign & 1) {
		return true;
	}
	else {
		return u_GTR(*this, n);
	}
}
inline BDLLEXPIMPORT bool bignum::operator >(unsigned int &&n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(signed int &&n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(unsigned long &&n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(signed long &&n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(unsigned long long &&n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(signed long long &&n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(float &&n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(double &&n) {
	return *this > bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator >(long double &&n) {
	return *this > bignum(n);
}
// > end

// <
inline BDLLEXPIMPORT bool bignum::operator <(bignum &n) {
	if (sign & 1 && n.sign & 1) {
		string ta(num), tb(n.num);
		ta.erase(ta.begin());
		tb.erase(tb.begin());
		return u_GTR(ta, tb);
	}
	else if (sign & 1) {
		return true;
	}
	else if (n.sign & 1) {
		return false;
	}
	else {
		return u_LSS(*this, n);
	}
}
inline BDLLEXPIMPORT bool bignum::operator <(unsigned int &n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(signed int &n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(unsigned long &n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(signed long &n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(unsigned long long &n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(signed long long &n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(float &n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(double &n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(long double &n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(bignum &&n) {
	if (sign & 1 && n.sign & 1) {
		string ta(num), tb(n.num);
		ta.erase(ta.begin());
		tb.erase(tb.begin());
		return u_GTR(ta, tb);
	}
	else if (sign & 1) {
		return true;
	}
	else if (n.sign & 1) {
		return false;
	}
	else {
		return u_LSS(*this, n);
	}
}
inline BDLLEXPIMPORT bool bignum::operator <(unsigned int &&n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(signed int &&n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(unsigned long &&n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(signed long &&n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(unsigned long long &&n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(signed long long &&n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(float &&n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(double &&n) {
	return *this < bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator <(long double &&n) {
	return *this < bignum(n);
}
// < end

// ==
inline BDLLEXPIMPORT bool bignum::operator ==(bignum &n) {
	if (sign & 1 && n.sign & 1) {
		//string ta(num), tb(n.num);
		//ta.erase(ta.begin());
		//tb.erase(tb.begin());
		//return u_EQU(ta, tb);
		return u_EQU(num, n.num);
	}
	else if (sign & 1) {
		return false;
	}
	else if (n.sign & 1) {
		return false;
	}
	else {
		return u_EQU(num, n.num);
	}
}
inline BDLLEXPIMPORT bool bignum::operator ==(unsigned int &n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(signed int &n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(unsigned long &n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(signed long &n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(unsigned long long &n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(signed long long &n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(float &n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(double &n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(long double &n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(bignum &&n) {
	if (sign & 1 && n.sign & 1) {
		//string ta(num), tb(n.num);
		//ta.erase(ta.begin());
		//tb.erase(tb.begin());
		//return u_EQU(ta, tb);
		return u_EQU(num, n.num);
	}
	else if (sign & 1) {
		return false;
	}
	else if (n.sign & 1) {
		return false;
	}
	else {
		return u_EQU(num, n.num);
	}
}
inline BDLLEXPIMPORT bool bignum::operator ==(unsigned int &&n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(signed int &&n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(unsigned long &&n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(signed long &&n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(unsigned long long &&n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(signed long long &&n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(float &&n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(double &&n) {
	return *this == bignum(n);
}
inline BDLLEXPIMPORT bool bignum::operator ==(long double &&n) {
	return *this == bignum(n);
}
// == end
#endif // UNICODE