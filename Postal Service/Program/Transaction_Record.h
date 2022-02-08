#include <iostream>
#include <fstream>
using namespace std;

class Transaction_Record
{private:
	fstream file;
public:
	Transaction_Record();
	void Recording(float A,int B);

};
