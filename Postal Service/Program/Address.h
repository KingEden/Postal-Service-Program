#pragma once
#include <iostream>
using namespace std;
class Address
{
	string postal_code;
	string house_number;
	string street_number;
	string city;
public:
	Address();
	Address(string A, string B, string C, string D);
	void setSender_Address(string A, string B, string C, string D);
	void setReceiver_Address(string A, string B, string C, string D);
	string getSender_Address();
	string getReceiver_Address();
};