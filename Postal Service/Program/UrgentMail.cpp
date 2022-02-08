#include "UrgentMail.h"

UrgentMail::UrgentMail()
{

}
float UrgentMail::UrgentService(float A)
{
	price = price * A;
	float B = (20 / 100) * price;
	price = price + B;
	return price;
}
void UrgentMail::SetRegularMail(int w)
{
	W = w;
}
int UrgentMail::GetUrgentService()
{
	return W;
}