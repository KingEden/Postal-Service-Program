#include "Transaction_Record.h"
Transaction_Record::Transaction_Record()
{

}
void Transaction_Record::Recording(float A,int B)
{
	file.open("Transaction_Record.txt", ios::out);
	file.close();
	file.open("Transaction_Record.txt");
	file << "Transaction Record" << endl << "Order ID :: " << B << endl <<"Payment Paid:: "<<A<<endl;
	file.close();
}