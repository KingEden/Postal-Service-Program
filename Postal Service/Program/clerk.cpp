#include "clerk.h"
clerk::clerk()
{

}
void clerk::Stamping(int A)
{
	file.open("stamped.txt"); 
    if (!file) { 
        cout << "The mail isnot stamped\n" << endl;
        file.open("Stamped.txt", ios::out);
        file << "Mail Stamped " <<endl<<A<<endl;
    }
}