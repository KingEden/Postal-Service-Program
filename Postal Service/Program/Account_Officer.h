#include <iostream>
#include <fstream>
#include "Transaction_Record.cpp"
#include "Payment.cpp"
using namespace std;
class Account_Officer
{private:
	fstream file;
public:
	Payment pay;
	Transaction_Record TR;
	Account_Officer();
	void Accounting();
};