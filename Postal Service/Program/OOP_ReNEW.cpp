// OOP_ReNEW.cpp 
#include "Order.cpp"
#include "MailService.cpp"
#include <windows.h>
#include <stdlib.h>
#include "Postal_worker.cpp"
#include "GPO.cpp"
using namespace std;
int main()
{
	Postal_work P1;
	MailService M1;
	fstream file;
	Order O1;
	Address R1;
	string choice;
	int choice1,choice2;
	string name, contact;
	cout <<"Welcome To PAKISTANI POST MAIL SERVICE\n";
	system("PAUSE");
	system("CLS");
	
	do {
		cout << "0-Exit\n1-Customer\n2-Postal-Worker\n";
		cin >> choice1;
		system("CLS");
		if (choice1 == 1)
		{
			cout << "~~~~Welcome Customer~~~~\n";
			Sleep(1000);
			cout << "Please enter your Details\n";
			Sleep(1000);
			system("CLS");
			string HN, SN, city, PC;
			string R_HN, R_SN, R_city, R_PC, R_name, R_contact;
			cout << "Enter Name";
			cin >> name;
			cout << "\nEnter Contact-Number";
			cin >> contact;
			cout << "\nAre you sending a mail? Y/N";
			string answer;
			cin >> answer;
			O1.CS.SetCustomer(name, contact);
			cout << "\nEnter your House Number";
			cin >> HN;
			cout << "\nEnter your Street Number";
			cin >> SN;
			cout << "\nEnter your City";
			cin >> city;
			cout << "\nEnter your Postal-Code";
			cin >> PC;
			O1.CS.AD.setSender_Address(HN, SN, city, PC);
			system("CLS");
			if (answer == "Y")
			{
				cout << "Enter Receiver`s Name";
				cin >> R_name;
				cout << "Enter Receiver`s Contact";
				cin >> R_contact;
				cout << "\nEnter Receiver`s House Number";
				cin >> R_HN;
				cout << "\nEnter Receiver`s your Street Number";
				cin >> R_SN;
				cout << "\nEnter Receiver`s your City";
				cin >> R_city;
				cout << "\nEnter Receiver`s Postal-Code";
				cin >> R_PC;
				R1.setReceiver_Address(R_HN, R_SN, R_city, R_PC);
				cout << "\nEnter Weight";
				float w;
				cin >> w;
				O1.SetWeight(w);
				cout << "\nOrder ID Generated for Mail :: ";
				O1.settOrder_ID();
				int ID = O1.getOrder_ID();
				cout << ID;
				cout << "\nMail being sent is Urgent or Regular? (U/R)";
				cin >> answer;
				if (answer == "U")
				{
					file.open("UrgentService.txt", ios::out);
					file.close();
					float Price =M1.Services(w);
					file.open("UrgentService.txt");
					file << Price << endl << ID << endl;
					file.close();
				}
				else
				{
					file.open("RegularService.txt", ios::out);
					file.close();
					float Price = M1.Services(w);
					file.open("RegularService.txt");
					file << Price << endl << ID << endl;
					file.close();
				}
				file.open("Mail.txt", ios::out);
				file << "Name:: " << name << endl << "Contact:: " << contact << endl << "Receiver`s Name:: " << R_name << endl << "Receiver`s Contact:: " << R_contact << endl << "Order ID ::" << ID << endl << "Sender Address:: " << O1.CS.AD.getSender_Address()<< endl << "Receiver Address:: " << R1.getReceiver_Address()<< endl << "Weight:: " << w << endl;
				file.close();
			}
			file.open("UnDelivered.txt", ios::out);
			file.close();

		}
		else if (choice1 == 2)
		{
			cout << "~~~~Welcome To Worker`s Portal~~~~";
			Sleep(1000);
			system("CLS");
			do {
				cout << "0-Exit\n1-Post-man\n2-Clerk\n3-Account Officer\n4-Head GPO";
				cin >> choice2;
				if (choice2 == 1)
				{
					system("CLS");
					cout << "Welcome Post-Man";
					cout <<"\nKindly Deliever the Mail if unsent";
					cout << "\nIs Mail accepted by receiver? (Y/N)";
					string D;
					cin >> D;
					if (D == "Y")
					{
						P1.PM.postal_delivery();
					}
					else
					{
						file.open("ReturnedMail.txt", ios::out);
						file.close();
						cout << "\nIs Mail accepted by receiver for second time? (Y/N)";
						cin >> D;
						if (D == "Y")
						{
							P1.PM.postal_delivery();
						}
						else
						{
							cout << "\nMail being bonuced and gonna return to sender";
							file.open("BouncedMail.txt", ios::out);
							file.close();
						}
					}
					
				}
				else if (choice2 == 2)
				{
					system("CLS");
					cout << "Welcome Clerk";
					cout << "\nStamp the following mail";
					cout << "\nOrder ID :: " << O1.getOrder_ID();
					cout << "\nYes or No? (Y/N)";
					string C;
					cin >> C;
					if (C == "Y")
					{
						cout << "Process of stamping being done";
						Sleep(1000);
						system("CLS");
						P1.c.Stamping(O1.GetWeight());
						cout << "\nProcess has being done";
					}
					else
					{
						cout << "Process was skipped";
					}
				}
				else if (choice2 == 3)
				{
					cout << "\nWelcome Accountant\n";
					cout << "\nSave Record for following mail :: "<<O1.getOrder_ID();
					cout <<"\nSave or No ?  Y/N";
					string F;
					cin >> F;
					if (F == "Y")
					{
						P1.AO.Accounting();
					}
					else
					{
						cout << "\nProcess of Records being saved have been skipped";
					}
				}
				else if (choice2 == 4)
				{
					int choices = 0;
					GPO G1;
					cout <<"Welcome GPO";
					Sleep(1000);
					system("CLS");
					do {
						cout << "0-Exit\n1-AddWorked\n2-DeleteWorked\n3-UpdateWorker";
						cin >> choices;
						if (choices == 1)
						{
							cout << "\nAdding worker\n";
							string ID, Name;
							cout << "\nEnter Worker`s Name";
							cin >> Name;
							cout << "\nEnter Worker`s ID";
							cin >> ID;
							G1.addWorker(Name,ID);
						}
						else if (choices == 2)
						{
							cout << "\nDeleting worker\n";
							G1.deleteWorker();
						}
						else if (choices == 3)
						{
							string ID, Name;
							cout << "\nUpdating WorkerList";
							cout << "\nEnter Updated Worker`s Name";
							cin >> Name;
							cout <<"\nEnter Updated Worker`s ID";
							cin >> ID;
							G1.updateWorker(ID, Name);
						}

					} while (choices==!0);


				}
			} while (choice2 == !0);

		}
	} while (choice1==!0);
}

