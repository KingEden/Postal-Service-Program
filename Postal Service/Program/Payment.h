#include <iostream>
#include <fstream>
using namespace std;

class Payment 
{
private:
	fstream file;
public:
	Payment();
	float Paymentcollect();
	float ID_collect();
};
