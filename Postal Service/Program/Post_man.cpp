#include "Post_man.h"

post_man::post_man()
{

}
void post_man::postal_delivery()
{
	ifstream ifile;
	ifstream ofile;
	file.open("UnDelivered.txt");
	cout << "Delievering the mail to destined place";
	file.close();
	if (!file) { 

		ifile.open("BouncedMail.txt");
		if (ifile) {
			cout << "This Mail has bounced";
		}
		else
		{
			ofile.open("ReturnedMail.txt");
			if (ofile) {
				cout << "This Mail has returned";
			}
			else
			{
				cout << "Mail was already delievered" << endl;
			}
			
		}
		
	}
}