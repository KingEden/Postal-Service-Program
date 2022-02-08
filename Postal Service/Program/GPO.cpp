#include "GPO.h"
GPO::GPO()
{
	name = " ";
	ID++;
}
void GPO::SetWorkerName(string A)
{
	name = A;
}
string GPO::GetWorkerName()
{
	return name;
}
void GPO::addWorker(string A,string B)
{
	file.open("Worker.txt", ios::out);
	file.close();
	file.open("Worker.txt", ios::out);
	file << "Worker`s Name :: " << A << endl << "Worker`s ID:: " << B<< endl;
	file.close();
}
void GPO::deleteWorker()
{
	char WorkerFileName[10];
	int deletion = remove(WorkerFileName);
	if (deletion == 0)
	cout << "\nWorker has been deleted from DataBase";
	else
		cout << "\nWorker couldnot been deleted from DataBase";

}
void GPO::updateWorker(string id, string name)
{
	file.open("Worker.txt", ios::out);
	file << "Worker`s Name :: " << name << endl << "Worker`s ID:: " << id<<endl;
	file.close();
}