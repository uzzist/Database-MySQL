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
	char doc[10] = "Barky";
	int flag = 0;
	cout << "Patients that have booked appointments from Dr.Barky are:" << endl;
	for (int index = 0; index < 10; index++)
	{
		flag = 0;
		for (int i = 0; doc[i] != '\0'; i++)
		{
			if (rec[index].denName[i] != doc[i])
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			cout << rec[index].patName << endl;
		}
	}
	return 0;
}