#include<iostream>
#include "UrgentMail.cpp"
#include "RegularMail.cpp"
#include <fstream>
using namespace std;

class MailService: UrgentMail,RegularMail
{
public:
	fstream file;
	MailService(); 
	float Services(float A);
private:
	float price = 19.00;
	float Price;
};
