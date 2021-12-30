#include<iostream>
#include<fstream>
using namespace std;

struct Record
{
	char denID[20];
	char denName[20];
	char patNO[20];
	char patName[20];
	char appNO[20];
	char appDate[20];
	char nurNO[20];
	char nurName[20];
	char procedure[20];
	int cost;
};

void update_data(Record* r)
{
	char id[10] = "D1,";
	char name[10] = "Smith,";
	char appnum[10] = "A11,";
	char appdate[10] = "1/06/09,";
	char pro[10] = "Filling,";
	int charge = 500;
	int n = 0;
	for (int index = 0; id[index] != '\0'; index++)
	{
		r->denID[index] = id[index];
		n++;
	}
	r->denID[n] = '\0';
	n = 0;
	for (int index = 0; name[index] != '\0'; index++)
	{
		r->denName[index] = name[index];
		n++;
	}
	r->denName[n] = '\0';
	n = 0;
	for (int index = 0; appnum[index] != '\0'; index++)
	{
		r->appNO[index] = appnum[index];
		n++;
	}
	r->appNO[n] = '\0';
	n = 0;
	for (int index = 0; appdate[index] != '\0'; index++)
	{
		r->appDate[index] = appdate[index];
		n++;
	}
	r->appDate[n] = '\0';
	n = 0;
	for (int index = 0; pro[index] != '\0'; index++)
	{
		r->procedure[index] = pro[index];
	}
	r->procedure[n] = '\0';
	r->cost = charge;
}

int main()
{
	ifstream fin;
	fin.open("HospRecord.csv");
	Record rec[10];
	for (int index = 0; index < 10; index++)
	{
		fin.getline(rec[index].denID, 20, ',');
		fin.getline(rec[index].denName, 20, ',');
		fin.getline(rec[index].patNO, 20, ',');
		fin.getline(rec[index].patName, 20, ',');
		fin.getline(rec[index].appNO, 20, ',');
		fin.getline(rec[index].appDate, 20, ',');
		fin.getline(rec[index].nurNO, 20, ',');
		fin.getline(rec[index].nurName, 20, ',');
		fin.getline(rec[index].procedure, 20, ',');
		fin >> rec[index].cost;

	}
	fin.close();
	update_data(&rec[9]);
	for (int index = 0; index < 10; index++)
	{
		if (index == 9)
		{
			cout << endl;
			cout << rec[index].denID;
			cout << rec[index].denName;
			cout << rec[index].patNO << ",";
			cout << rec[index].patName << ",";
			cout << rec[index].appNO;
			cout << rec[index].appDate;
			cout << rec[index].nurNO << ",";
			cout << rec[index].nurName << ",";
			cout << rec[index].procedure;
			cout << " " << rec[index].cost;
		}
		else
		{
			cout << rec[index].denID;
			cout << rec[index].denName;
			cout << rec[index].patNO;
			cout << rec[index].patName;
			cout << rec[index].appNO;
			cout << rec[index].appDate;
			cout << rec[index].nurNO;
			cout << rec[index].nurName;
			cout << rec[index].procedure;
			cout << " " << rec[index].cost;
		}
	}
	return 0;
}