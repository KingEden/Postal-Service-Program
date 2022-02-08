#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class GPO
{
private:
	string name;
	int ID;
public:
	fstream file;
	GPO();
	void SetWorkerName(string A);
	string GetWorkerName();
	void addWorker(string A, string B);
	void deleteWorker();
	void updateWorker(string id, string name);
};
