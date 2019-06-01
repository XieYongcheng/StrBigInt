#include "stdafx.h"
#ifdef STRNUMEXE
int main() {
	bignum a, b;
	try {
		while (1) {
			cout << "enter a : ";
			cin.clear();
			wcin >> a;
			cout << "enter b : ";
			cin.clear();
			wcin >> b;
			wcout << endl;
			wcout << "a : " << a << endl;
			wcout << "b : " << b << endl;
			wcout << "a + b = " << (a + b) << endl;
			wcout << "a - b = " << (a - b) << endl;
			wcout << "a * b = " << (a * b) << endl;
			wcout << "a / b = " << (a / b) << endl;
			wcout << "a % b = " << (a % b) << endl;
			wcout << "a > b : " << (a > b) << endl;
			wcout << "a < b : " << (a < b) << endl;
			wcout << endl;
		}
	}
	catch (const std::exception&) {
		cout << "error-exception" << endl;
	}
	catch (...) {
		cout << "error-..." << endl;
	}
	return 0;
}
#endif