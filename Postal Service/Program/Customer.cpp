#include "Customer.h"
Customer::Customer()
{
}
Customer::~Customer()
{
	
}
Customer::Customer(string A, string B)
{
	customer_name = A;
	contact_number = B;
}
void Customer::SetCustomer(string A, string B)
{
	customer_name = A;
	contact_number = B;
}
string Customer::GetName()
{
	return customer_name;
}
string Customer::GetContact()
{
	return contact_number;
}