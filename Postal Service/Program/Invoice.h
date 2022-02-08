#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Invoice
{
private:
	string Name;
	string Contact;
	int Order_ID;
	string Checker;
	string Sender_Address;
	string Receiver_Address;
	string weight;
	string R_Name;
	string R_Contact;
public:
	fstream file;
	int CheckInvoice();
	void CollectData();
	void SaveData(string A, string B, int C, string D, string E, float F, string G,string H);
};