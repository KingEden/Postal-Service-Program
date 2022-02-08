#include "Account_Officer.h"

Account_Officer::Account_Officer()
{
}
void Account_Officer::Accounting()
{
	int status1,status2;
	float Money = pay.Paymentcollect();
	float ID_Collect = pay.ID_collect();
	TR.Recording(Money, ID_Collect);
	char Name1[20]="RegularService.txt";
	char Name2[20] = "UrgentService.txt";
	status1 = remove(Name1);
	if (status1 == 0)
		cout << "\nRegularService.txt has been deleted";
	status2 = remove(Name2);
	if (status2 == 0)
		cout << "\nUrgentService.txt has been deleted";
}