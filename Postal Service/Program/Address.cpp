#include "Address.h"

Address::Address()
{

}
Address :: Address(string A, string B, string C, string D)
{
	house_number = A;
	street_number = B;
	city = C;
	postal_code = D;
}
void Address::setSender_Address(string A, string B, string C, string D)
{
	house_number = A;
	street_number = B;
	city = C;
	postal_code = D;
}
void Address::setReceiver_Address(string A, string B, string C, string D)
{
	house_number = A;
	street_number = B;
	city = C;
	postal_code = D;
}
string Address::getSender_Address()
{
	cout << "House Number :: " << house_number << "  Street Number :: " << street_number << " City:: " << city << "  Postal Code" << postal_code << endl;
	return house_number, street_number, city, postal_code;
}
string Address::getReceiver_Address()
{
	cout << "House Number :: " << house_number << "  Street Number :: " << street_number << " City:: " << city << "  Postal Code" << postal_code << endl;
	return house_number, street_number, city, postal_code;
}