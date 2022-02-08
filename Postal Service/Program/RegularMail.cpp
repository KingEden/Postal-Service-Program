#include "RegularMail.h"

RegularMail::RegularMail()
{

}
float RegularMail::RegularService(float A)
{
	price = price * A;
	return price;
}
void RegularMail::SetRegularMail(int w)
{
	W=w;
}
int RegularMail::GetRegularMail()
{
	return W;
}