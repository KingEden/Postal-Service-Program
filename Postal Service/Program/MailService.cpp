#include "MailService.h"

MailService::MailService()
{

}

float MailService::Services(float A)
{
	if (GetUrgentService() == 1)
	{
		Price=UrgentService(A);
		file.open("UrgentService.txt", ios::out);
		file.close();
	}
	else if (GetRegularMail() == 1)
	{
		Price = RegularService(A);
		file.open("RegularService.txt", ios::out);
		file.close();
	}

	return Price;
}