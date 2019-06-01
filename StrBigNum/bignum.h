#pragma once
#ifndef _STRING_
#include <string>
#endif // !_STRING_
#include "define.h"
using namespace std;
typedef int BOOL;
#ifndef max
#define max(a,b)            (((a) > (b)) ? (a) : (b))
#endif
#ifdef PRJ_B
#define BDLLEXPIMPORT __declspec(dllexport) 
#else    
#define BDLLEXPIMPORT __declspec(dllimport) 
#endif
#ifndef STRBIGNUM
#define STRBIGNUM
#endif // !STRBIGNUM

#ifdef UNICODE
class BDLLEXPIMPORT bignum {
private:
	wstring num;
	//0000 0000 0000 0000 0000 0000 0000 0000
	//                                     ||
	//                                     |unsigned
	//                                     no decimal
	BOOL sign;

	bignum u_int_plus(bignum &a, bignum &b);
	bignum u_int_plus(bignum &&a, bignum &&b);
	bignum u_int_minus(bignum &a, bignum &b);
	bignum u_int_minus(bignum &&a, bignum &&b);
	wstring u_int_plus(wstring &a, wstring &b);
	wstring u_int_plus(wstring &a, wstring &b, int &&_temp);
	wstring u_int_plus(wstring &&a, wstring &&b);
	wstring u_int_minus(wstring &a, wstring &b);
	wstring u_int_minus(wstring &a, wstring &b, int &&_temp);
	wstring u_int_minus(wstring &&a, wstring &&b);
	bignum u_dcl_plus(bignum &a, bignum &b);
	bignum u_dcl_plus(bignum &&a, bignum &&b);
	bignum u_dcl_minus(bignum &a, bignum &b);
	bignum u_dcl_minus(bignum &&a, bignum &&b);
	wstring u_dcl_plus(wstring &a, wstring &b);
	wstring u_dcl_plus(wstring &&a, wstring &&b);
	wstring u_dcl_minus(wstring &a, wstring &b);
	wstring u_dcl_minus(wstring &&a, wstring &&b);
	bignum u_plus(bignum &a, bignum &b);
	bignum u_plus(bignum &&a, bignum &&b);
	bignum _u_minus(bignum &a, bignum &b);
	bignum _u_minus(bignum &&a, bignum &&b);
	bignum u_minus(bignum &a, bignum &b);
	bignum u_minus(bignum &&a, bignum &&b);

	bignum u_int_multiply(bignum &a, bignum &b);
	bignum u_int_multiply(bignum &&a, bignum &&b);
	wstring u_int_multiply(wstring &a, wstring &b);
	wstring u_int_multiply(wstring &&a, wstring &&b);
	bignum u_multiply(bignum &a, bignum &b);
	bignum u_multiply(bignum &&a, bignum &&b);
	bignum u_int_divide(bignum &a, bignum &b);
	bignum u_int_divide(bignum &&a, bignum &&b);
	wstring u_int_divide(wstring &a, wstring &b);
	wstring u_int_divide(wstring &&a, wstring &&b);
	bignum u_divide(bignum &a, bignum &b);
	bignum u_divide(bignum &&a, bignum &&b);

	bignum u_int_mod(bignum &a, bignum &b);
	bignum u_int_mod(bignum &&a, bignum &&b);
	wstring u_int_mod(wstring &a, wstring &b);
	wstring u_int_mod(wstring &&a, wstring &&b);
	bignum u_mod(bignum &a, bignum &b);
	bignum u_mod(bignum &&a, bignum &&b);

	bool u_int_EQU(bignum &a, bignum &b);
	bool u_int_EQU(bignum &&a, bignum &&b);
	bool u_int_NEQ(bignum &a, bignum &b);
	bool u_int_NEQ(bignum &&a, bignum &&b);
	bool u_int_LSS(bignum &a, bignum &b);
	bool u_int_LSS(bignum &&a, bignum &&b);
	bool u_int_LEQ(bignum &a, bignum &b);
	bool u_int_LEQ(bignum &&a, bignum &&b);
	bool u_int_GTR(bignum &a, bignum &b);
	bool u_int_GTR(bignum &&a, bignum &&b);
	bool u_int_GEQ(bignum &a, bignum &b);
	bool u_int_GEQ(bignum &&a, bignum &&b);
	bool u_EQU(bignum &a, bignum &b);
	bool u_EQU(bignum &&a, bignum &&b);
	bool u_NEQ(bignum &a, bignum &b);
	bool u_NEQ(bignum &&a, bignum &&b);
	bool u_LSS(bignum &a, bignum &b);
	bool u_LSS(bignum &&a, bignum &&b);
	bool u_LEQ(bignum &a, bignum &b);
	bool u_LEQ(bignum &&a, bignum &&b);
	bool u_GTR(bignum &a, bignum &b);
	bool u_GTR(bignum &&a, bignum &&b);
	bool u_GEQ(bignum &a, bignum &b);
	bool u_GEQ(bignum &&a, bignum &&b);
	bool u_EQU(wstring &a, wstring &b);
	bool u_EQU(wstring &&a, wstring &&b);
	bool u_NEQ(wstring &a, wstring &b);
	bool u_NEQ(wstring &&a, wstring &&b);
	bool u_LSS(wstring &a, wstring &b);
	bool u_LSS(wstring &&a, wstring &&b);
	bool u_LEQ(wstring &a, wstring &b);
	bool u_LEQ(wstring &&a, wstring &&b);
	bool u_GTR(wstring &a, wstring &b);
	bool u_GTR(wstring &&a, wstring &&b);
	bool u_GEQ(wstring &a, wstring &b);
	bool u_GEQ(wstring &&a, wstring &&b);


	BOOL re_sign();
	bignum opposite();
	bignum absolute();
	bignum INT();
	bignum u_int_format(bignum &str);
	bignum u_int_format(bignum &&str);
	wstring u_int_format(wstring &str);
	wstring u_int_format(wstring &&str);
	BOOL format();
	BOOL format(wstring &num);
public:
	//constructor
	bignum();
	bignum(wstring num);
	bignum(unsigned int num);
	bignum(signed int num);
	bignum(unsigned long num);
	bignum(signed long num);
	bignum(unsigned long long num);
	bignum(signed long long num);
	bignum(float num);
	bignum(double num);
	bignum(long double num);
	//constructor end

	//destructor
	~bignum();
	//destructor end


	//operator
	void operator=(wstring & num);
	void operator=(wstring && num);
	void operator=(unsigned int & num);
	void operator=(unsigned int && num);
	void operator=(signed int & num);
	void operator=(signed int && num);
	void operator=(unsigned long & num);
	void operator=(unsigned long && num);
	void operator=(signed long & num);
	void operator=(signed long && num);
	void operator=(unsigned long long & num);
	void operator=(unsigned long long && num);
	void operator=(signed long long & num);
	void operator=(signed long long && num);
	void operator=(float & num);
	void operator=(float && num);
	void operator=(double & num);
	void operator=(double && num);
	void operator=(long double & num);
	void operator=(long double && num);
	bignum operator+(bignum & n);
	bignum operator+(unsigned int & n);
	bignum operator+(signed int & n);
	bignum operator+(unsigned long & n);
	bignum operator+(signed long & n);
	bignum operator+(unsigned long long & n);
	bignum operator+(signed long long & n);
	bignum operator+(float & n);
	bignum operator+(double & n);
	bignum operator+(long double & n);
	bignum operator+(bignum && n);
	bignum operator+(unsigned int && n);
	bignum operator+(signed int && n);
	bignum operator+(unsigned long && n);
	bignum operator+(signed long && n);
	bignum operator+(unsigned long long && n);
	bignum operator+(signed long long && n);
	bignum operator+(float && n);
	bignum operator+(double && n);
	bignum operator+(long double && n);
	bignum operator-(bignum & n);
	bignum operator-(unsigned int & n);
	bignum operator-(signed int & n);
	bignum operator-(unsigned long & n);
	bignum operator-(signed long & n);
	bignum operator-(unsigned long long & n);
	bignum operator-(signed long long & n);
	bignum operator-(float & n);
	bignum operator-(double & n);
	bignum operator-(long double & n);
	bignum operator-(bignum && n);
	bignum operator-(unsigned int && n);
	bignum operator-(signed int && n);
	bignum operator-(unsigned long && n);
	bignum operator-(signed long && n);
	bignum operator-(unsigned long long && n);
	bignum operator-(signed long long && n);
	bignum operator-(float && n);
	bignum operator-(double && n);
	bignum operator-(long double && n);
	bignum operator*(bignum & n);
	bignum operator*(unsigned int & n);
	bignum operator*(signed int & n);
	bignum operator*(unsigned long & n);
	bignum operator*(signed long & n);
	bignum operator*(unsigned long long & n);
	bignum operator*(signed long long & n);
	bignum operator*(float & n);
	bignum operator*(double & n);
	bignum operator*(long double & n);
	bignum operator*(bignum && n);
	bignum operator*(unsigned int && n);
	bignum operator*(signed int && n);
	bignum operator*(unsigned long && n);
	bignum operator*(signed long && n);
	bignum operator*(unsigned long long && n);
	bignum operator*(signed long long && n);
	bignum operator*(float && n);
	bignum operator*(double && n);
	bignum operator*(long double && n);
	bignum operator/(bignum & n);
	bignum operator/(unsigned int & n);
	bignum operator/(signed int & n);
	bignum operator/(unsigned long & n);
	bignum operator/(signed long & n);
	bignum operator/(unsigned long long & n);
	bignum operator/(signed long long & n);
	bignum operator/(float & n);
	bignum operator/(double & n);
	bignum operator/(long double & n);
	bignum operator/(bignum && n);
	bignum operator/(unsigned int && n);
	bignum operator/(signed int && n);
	bignum operator/(unsigned long && n);
	bignum operator/(signed long && n);
	bignum operator/(unsigned long long && n);
	bignum operator/(signed long long && n);
	bignum operator/(float && n);
	bignum operator/(double && n);
	bignum operator/(long double && n);
	bignum operator%(bignum & n);
	bignum operator%(unsigned int & n);
	bignum operator%(signed int & n);
	bignum operator%(unsigned long & n);
	bignum operator%(signed long & n);
	bignum operator%(unsigned long long & n);
	bignum operator%(signed long long & n);
	bignum operator%(float & n);
	bignum operator%(double & n);
	bignum operator%(long double & n);
	bignum operator%(bignum && n);
	bignum operator%(unsigned int && n);
	bignum operator%(signed int && n);
	bignum operator%(unsigned long && n);
	bignum operator%(signed long && n);
	bignum operator%(unsigned long long && n);
	bignum operator%(signed long long && n);
	bignum operator%(float && n);
	bignum operator%(double && n);
	bignum operator%(long double && n);
	bool operator>(bignum & n);
	bool operator>(unsigned int & n);
	bool operator>(signed int & n);
	bool operator>(unsigned long & n);
	bool operator>(signed long & n);
	bool operator>(unsigned long long & n);
	bool operator>(signed long long & n);
	bool operator>(float & n);
	bool operator>(double & n);
	bool operator>(long double & n);
	bool operator>(bignum && n);
	bool operator>(unsigned int && n);
	bool operator>(signed int && n);
	bool operator>(unsigned long && n);
	bool operator>(signed long && n);
	bool operator>(unsigned long long && n);
	bool operator>(signed long long && n);
	bool operator>(float && n);
	bool operator>(double && n);
	bool operator>(long double && n);
	bool operator<(bignum & n);
	bool operator<(unsigned int & n);
	bool operator<(signed int & n);
	bool operator<(unsigned long & n);
	bool operator<(signed long & n);
	bool operator<(unsigned long long & n);
	bool operator<(signed long long & n);
	bool operator<(float & n);
	bool operator<(double & n);
	bool operator<(long double & n);
	bool operator<(bignum && n);
	bool operator<(unsigned int && n);
	bool operator<(signed int && n);
	bool operator<(unsigned long && n);
	bool operator<(signed long && n);
	bool operator<(unsigned long long && n);
	bool operator<(signed long long && n);
	bool operator<(float && n);
	bool operator<(double && n);
	bool operator<(long double && n);
	bool operator==(bignum & n);
	bool operator==(unsigned int & n);
	bool operator==(signed int & n);
	bool operator==(unsigned long & n);
	bool operator==(signed long & n);
	bool operator==(unsigned long long & n);
	bool operator==(signed long long & n);
	bool operator==(float & n);
	bool operator==(double & n);
	bool operator==(long double & n);
	bool operator==(bignum && n);
	bool operator==(unsigned int && n);
	bool operator==(signed int && n);
	bool operator==(unsigned long && n);
	bool operator==(signed long && n);
	bool operator==(unsigned long long && n);
	bool operator==(signed long long && n);
	bool operator==(float && n);
	bool operator==(double && n);
	bool operator==(long double && n);
	// operator end


	// transform
	operator wstring();
	operator wchar_t*();
	// transform end


	const wstring str() const;
	const wchar_t *c_str() const;
	bignum & get_self() const;
	bignum copy_self() const;
};
#else
class BDLLEXPIMPORT bignum {
private:
	string num;
	//0000 0000 0000 0000 0000 0000 0000 0000
	//                                     ||
	//                                     |unsigned
	//                                     no decimal
	BOOL sign;

	bignum u_int_plus(bignum &a, bignum &b);
	bignum u_int_plus(bignum &&a, bignum &&b);
	bignum u_int_minus(bignum &a, bignum &b);
	bignum u_int_minus(bignum &&a, bignum &&b);
	string u_int_plus(string &a, string &b);
	string u_int_plus(string &a, string &b, int &&_temp);
	string u_int_plus(string &&a, string &&b);
	string u_int_minus(string &a, string &b);
	string u_int_minus(string &a, string &b, int &&_temp);
	string u_int_minus(string &&a, string &&b);
	bignum u_dcl_plus(bignum &a, bignum &b);
	bignum u_dcl_plus(bignum &&a, bignum &&b);
	bignum u_dcl_minus(bignum &a, bignum &b);
	bignum u_dcl_minus(bignum &&a, bignum &&b);
	string u_dcl_plus(string &a, string &b);
	string u_dcl_plus(string &&a, string &&b);
	string u_dcl_minus(string &a, string &b);
	string u_dcl_minus(string &&a, string &&b);
	bignum u_plus(bignum &a, bignum &b);
	bignum u_plus(bignum &&a, bignum &&b);
	bignum _u_minus(bignum &a, bignum &b);
	bignum _u_minus(bignum &&a, bignum &&b);
	bignum u_minus(bignum &a, bignum &b);
	bignum u_minus(bignum &&a, bignum &&b);

	bignum u_int_multiply(bignum &a, bignum &b);
	bignum u_int_multiply(bignum &&a, bignum &&b);
	string u_int_multiply(string &a, string &b);
	string u_int_multiply(string &&a, string &&b);
	bignum u_multiply(bignum &a, bignum &b);
	bignum u_multiply(bignum &&a, bignum &&b);
	bignum u_int_divide(bignum &a, bignum &b);
	bignum u_int_divide(bignum &&a, bignum &&b);
	string u_int_divide(string &a, string &b);
	string u_int_divide(string &&a, string &&b);
	bignum u_divide(bignum &a, bignum &b);
	bignum u_divide(bignum &&a, bignum &&b);

	bignum u_int_mod(bignum &a, bignum &b);
	bignum u_int_mod(bignum &&a, bignum &&b);
	string u_int_mod(string &a, string &b);
	string u_int_mod(string &&a, string &&b);
	bignum u_mod(bignum &a, bignum &b);
	bignum u_mod(bignum &&a, bignum &&b);

	bool u_int_EQU(bignum &a, bignum &b);
	bool u_int_EQU(bignum &&a, bignum &&b);
	bool u_int_NEQ(bignum &a, bignum &b);
	bool u_int_NEQ(bignum &&a, bignum &&b);
	bool u_int_LSS(bignum &a, bignum &b);
	bool u_int_LSS(bignum &&a, bignum &&b);
	bool u_int_LEQ(bignum &a, bignum &b);
	bool u_int_LEQ(bignum &&a, bignum &&b);
	bool u_int_GTR(bignum &a, bignum &b);
	bool u_int_GTR(bignum &&a, bignum &&b);
	bool u_int_GEQ(bignum &a, bignum &b);
	bool u_int_GEQ(bignum &&a, bignum &&b);
	bool u_EQU(bignum &a, bignum &b);
	bool u_EQU(bignum &&a, bignum &&b);
	bool u_NEQ(bignum &a, bignum &b);
	bool u_NEQ(bignum &&a, bignum &&b);
	bool u_LSS(bignum &a, bignum &b);
	bool u_LSS(bignum &&a, bignum &&b);
	bool u_LEQ(bignum &a, bignum &b);
	bool u_LEQ(bignum &&a, bignum &&b);
	bool u_GTR(bignum &a, bignum &b);
	bool u_GTR(bignum &&a, bignum &&b);
	bool u_GEQ(bignum &a, bignum &b);
	bool u_GEQ(bignum &&a, bignum &&b);
	bool u_EQU(string &a, string &b);
	bool u_EQU(string &&a, string &&b);
	bool u_NEQ(string &a, string &b);
	bool u_NEQ(string &&a, string &&b);
	bool u_LSS(string &a, string &b);
	bool u_LSS(string &&a, string &&b);
	bool u_LEQ(string &a, string &b);
	bool u_LEQ(string &&a, string &&b);
	bool u_GTR(string &a, string &b);
	bool u_GTR(string &&a, string &&b);
	bool u_GEQ(string &a, string &b);
	bool u_GEQ(string &&a, string &&b);


	BOOL re_sign();
	bignum opposite();
	bignum absolute();
	bignum INT();
	bignum u_int_format(bignum &str);
	bignum u_int_format(bignum &&str);
	string u_int_format(string &str);
	string u_int_format(string &&str);
	BOOL format();
	BOOL format(string &num);
public:
	//constructor
	bignum();
	bignum(string num);
	bignum(unsigned int num);
	bignum(signed int num);
	bignum(unsigned long num);
	bignum(signed long num);
	bignum(unsigned long long num);
	bignum(signed long long num);
	bignum(float num);
	bignum(double num);
	bignum(long double num);
	//constructor end

	//destructor
	~bignum();
	//destructor end


	//operator
	void operator=(string & num);
	void operator=(string && num);
	void operator=(unsigned int & num);
	void operator=(unsigned int && num);
	void operator=(signed int & num);
	void operator=(signed int && num);
	void operator=(unsigned long & num);
	void operator=(unsigned long && num);
	void operator=(signed long & num);
	void operator=(signed long && num);
	void operator=(unsigned long long & num);
	void operator=(unsigned long long && num);
	void operator=(signed long long & num);
	void operator=(signed long long && num);
	void operator=(float & num);
	void operator=(float && num);
	void operator=(double & num);
	void operator=(double && num);
	void operator=(long double & num);
	void operator=(long double && num);
	bignum operator+(bignum & n);
	bignum operator+(unsigned int & n);
	bignum operator+(signed int & n);
	bignum operator+(unsigned long & n);
	bignum operator+(signed long & n);
	bignum operator+(unsigned long long & n);
	bignum operator+(signed long long & n);
	bignum operator+(float & n);
	bignum operator+(double & n);
	bignum operator+(long double & n);
	bignum operator+(bignum && n);
	bignum operator+(unsigned int && n);
	bignum operator+(signed int && n);
	bignum operator+(unsigned long && n);
	bignum operator+(signed long && n);
	bignum operator+(unsigned long long && n);
	bignum operator+(signed long long && n);
	bignum operator+(float && n);
	bignum operator+(double && n);
	bignum operator+(long double && n);
	bignum operator-(bignum & n);
	bignum operator-(unsigned int & n);
	bignum operator-(signed int & n);
	bignum operator-(unsigned long & n);
	bignum operator-(signed long & n);
	bignum operator-(unsigned long long & n);
	bignum operator-(signed long long & n);
	bignum operator-(float & n);
	bignum operator-(double & n);
	bignum operator-(long double & n);
	bignum operator-(bignum && n);
	bignum operator-(unsigned int && n);
	bignum operator-(signed int && n);
	bignum operator-(unsigned long && n);
	bignum operator-(signed long && n);
	bignum operator-(unsigned long long && n);
	bignum operator-(signed long long && n);
	bignum operator-(float && n);
	bignum operator-(double && n);
	bignum operator-(long double && n);
	bignum operator*(bignum & n);
	bignum operator*(unsigned int & n);
	bignum operator*(signed int & n);
	bignum operator*(unsigned long & n);
	bignum operator*(signed long & n);
	bignum operator*(unsigned long long & n);
	bignum operator*(signed long long & n);
	bignum operator*(float & n);
	bignum operator*(double & n);
	bignum operator*(long double & n);
	bignum operator*(bignum && n);
	bignum operator*(unsigned int && n);
	bignum operator*(signed int && n);
	bignum operator*(unsigned long && n);
	bignum operator*(signed long && n);
	bignum operator*(unsigned long long && n);
	bignum operator*(signed long long && n);
	bignum operator*(float && n);
	bignum operator*(double && n);
	bignum operator*(long double && n);
	bignum operator/(bignum & n);
	bignum operator/(unsigned int & n);
	bignum operator/(signed int & n);
	bignum operator/(unsigned long & n);
	bignum operator/(signed long & n);
	bignum operator/(unsigned long long & n);
	bignum operator/(signed long long & n);
	bignum operator/(float & n);
	bignum operator/(double & n);
	bignum operator/(long double & n);
	bignum operator/(bignum && n);
	bignum operator/(unsigned int && n);
	bignum operator/(signed int && n);
	bignum operator/(unsigned long && n);
	bignum operator/(signed long && n);
	bignum operator/(unsigned long long && n);
	bignum operator/(signed long long && n);
	bignum operator/(float && n);
	bignum operator/(double && n);
	bignum operator/(long double && n);
	bignum operator%(bignum & n);
	bignum operator%(unsigned int & n);
	bignum operator%(signed int & n);
	bignum operator%(unsigned long & n);
	bignum operator%(signed long & n);
	bignum operator%(unsigned long long & n);
	bignum operator%(signed long long & n);
	bignum operator%(float & n);
	bignum operator%(double & n);
	bignum operator%(long double & n);
	bignum operator%(bignum && n);
	bignum operator%(unsigned int && n);
	bignum operator%(signed int && n);
	bignum operator%(unsigned long && n);
	bignum operator%(signed long && n);
	bignum operator%(unsigned long long && n);
	bignum operator%(signed long long && n);
	bignum operator%(float && n);
	bignum operator%(double && n);
	bignum operator%(long double && n);
	bool operator>(bignum & n);
	bool operator>(unsigned int & n);
	bool operator>(signed int & n);
	bool operator>(unsigned long & n);
	bool operator>(signed long & n);
	bool operator>(unsigned long long & n);
	bool operator>(signed long long & n);
	bool operator>(float & n);
	bool operator>(double & n);
	bool operator>(long double & n);
	bool operator>(bignum && n);
	bool operator>(unsigned int && n);
	bool operator>(signed int && n);
	bool operator>(unsigned long && n);
	bool operator>(signed long && n);
	bool operator>(unsigned long long && n);
	bool operator>(signed long long && n);
	bool operator>(float && n);
	bool operator>(double && n);
	bool operator>(long double && n);
	bool operator<(bignum & n);
	bool operator<(unsigned int & n);
	bool operator<(signed int & n);
	bool operator<(unsigned long & n);
	bool operator<(signed long & n);
	bool operator<(unsigned long long & n);
	bool operator<(signed long long & n);
	bool operator<(float & n);
	bool operator<(double & n);
	bool operator<(long double & n);
	bool operator<(bignum && n);
	bool operator<(unsigned int && n);
	bool operator<(signed int && n);
	bool operator<(unsigned long && n);
	bool operator<(signed long && n);
	bool operator<(unsigned long long && n);
	bool operator<(signed long long && n);
	bool operator<(float && n);
	bool operator<(double && n);
	bool operator<(long double && n);
	bool operator==(bignum & n);
	bool operator==(unsigned int & n);
	bool operator==(signed int & n);
	bool operator==(unsigned long & n);
	bool operator==(signed long & n);
	bool operator==(unsigned long long & n);
	bool operator==(signed long long & n);
	bool operator==(float & n);
	bool operator==(double & n);
	bool operator==(long double & n);
	bool operator==(bignum && n);
	bool operator==(unsigned int && n);
	bool operator==(signed int && n);
	bool operator==(unsigned long && n);
	bool operator==(signed long && n);
	bool operator==(unsigned long long && n);
	bool operator==(signed long long && n);
	bool operator==(float && n);
	bool operator==(double && n);
	bool operator==(long double && n);
	// operator end


	// transform
	operator string();
	operator char*();
	// transform end


	const string str() const;
	const char *c_str() const;
	bignum & get_self() const;
	bignum copy_self() const;
};
#endif // UNICODE