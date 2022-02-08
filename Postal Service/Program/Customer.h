#pragma once
#include <iostream>
#include "Address.cpp"
using namespace std;
class Customer
{
public:
	Address AD;
	Customer();
	Customer(string A,string B);
	void SetCustomer(string A, string B);
	string GetName();
	string GetContact();
	~Customer();

private:
	string customer_name;
	string contact_number;
};


