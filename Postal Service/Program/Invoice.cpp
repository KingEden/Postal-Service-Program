#include "Invoice.h"
int Invoice::CheckInvoice()
{
	if (file.open("Invoice.txt");)
	{
		CollectData();
		return 1;
	}
	else
	{
		cout << "Invoice.txt not found\n";
		return 0;
	}
}
void Invoice::CollectData()
{
	int count = 0;
	string data;
	while (count < 20 && File >> data[count]) {
		count++;
	}

}
void Invoice::SaveData(string A,string B, int C, string D,string E , float F , string G,string H)
{
	Name=A;
	Contact=B;
	Order_ID=C;
	Sender_Address=D;
	Receiver_Address=E;
	weight=F;
	R_Name=G;
	R_contact = H;
	file.open("Mail.txt", ios::out);
	file << "Name:: " << Name << endl << "Contact:: " << Contact << endl <<"Receiver`s Name:: "<<R_Name<<endl<<"Receiver`s Contact:: "<<R_contact<< endl << "Order ID ::" << Order_ID << endl << "Sender Address:: " << Sender_Address << endl << "Receiver Address:: " << Receiver_Address << endl << "Weight:: " << weight << endl;
	file.close();
}