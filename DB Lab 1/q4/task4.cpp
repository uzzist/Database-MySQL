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

void search_and_update(Record* r)
{
	char name[10] = "Coral";
	int flag = 0;
	for (int index = 0; name[index] != '\0'; index++)
	{
		if (r->patName[index] != name[index])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		char del[3] = "-";
		int n = 0;
		for (int index = 0; del[index] != '\0'; index++)
		{
			r->appDate[index] = del[index];
			n++;
		}
		r->appDate[n] = '\0';
		n = 0;
		for (int index = 0; del[index] != '\0'; index++)
		{
			r->appNO[index] = del[index];
			n++;
		}
		r->appNO[n] = '\0';
		n = 0;
		for (int index = 0; del[index] != '\0'; index++)
		{
			r->patName[index] = del[index];
			n++;
		}
		r->patName[n] = '\0';
		n = 0;
		for (int index = 0; del[index] != '\0'; index++)
		{
			r->patNO[index] = del[index];
			n++;
		}
		r->patNO[n] = '\0';
		n = 0;
		for (int index = 0; del[index] != '\0'; index++)
		{
			r->procedure[index] = del[index];
			n++;
		}
		r->procedure[n] = '\0';
		n = 0;
		for (int index = 0; del[index] != '\0'; index++)
		{
			r->denName[index] = del[index];
			n++;
		}
		r->denName[n] = '\0';
		n = 0;
		for (int index = 0; del[index] != '\0'; index++)
		{
			r->denID[index] = del[index];
			n++;
		}
		r->denID[n] = '\0';
		n = 0;
		for (int index = 0; del[index] != '\0'; index++)
		{
			r->nurName[index] = del[index];
			n++;
		}
		r->nurName[n] = '\0';
		n = 0;
		for (int index = 0; del[index] != '\0'; index++)
		{
			r->nurNO[index] = del[index];
			n++;
		}
		r->nurNO[n] = '\0';
		n = 0;
		r->cost = 0;
	}
}
void remove(Record* r)
{
	char name[10] = "Sarah";
	int flag = 0;
	for (int index = 0; name[index] != '\0'; index++)
	{
		if (r->nurName[index] != name[index])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		char del[3] = "-";
		int n = 0;
		for (int index = 0; del[index] != '\0'; index++)
		{
			r->appDate[index] = del[index];
			n++;
		}
		r->appDate[n] = '\0';
		n = 0;
		for (int index = 0; del[index] != '\0'; index++)
		{
			r->appNO[index] = del[index];
			n++;
		}
		r->appNO[n] = '\0';
		n = 0;
		for (int index = 0; del[index] != '\0'; index++)
		{
			r->patName[index] = del[index];
			n++;
		}
		r->patName[n] = '\0';
		n = 0;
		for (int index = 0; del[index] != '\0'; index++)
		{
			r->patNO[index] = del[index];
			n++;
		}
		r->patNO[n] = '\0';
		n = 0;
		for (int index = 0; del[index] != '\0'; index++)
		{
			r->procedure[index] = del[index];
			n++;
		}
		r->procedure[n] = '\0';
		n = 0;
		for (int index = 0; del[index] != '\0'; index++)
		{
			r->denName[index] = del[index];
			n++;
		}
		r->denName[n] = '\0';
		n = 0;
		for (int index = 0; del[index] != '\0'; index++)
		{
			r->denID[index] = del[index];
			n++;
		}
		r->denID[n] = '\0';
		n = 0;
		for (int index = 0; del[index] != '\0'; index++)
		{
			r->nurName[index] = del[index];
			n++;
		}
		r->nurName[n] = '\0';
		n = 0;
		for (int index = 0; del[index] != '\0'; index++)
		{
			r->nurNO[index] = del[index];
			n++;
		}
		r->nurNO[n] = '\0';
		n = 0;
		r->cost = 0;
	}
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
	for (int index = 0; index < 10; index++)
	{
		search_and_update(&rec[index]);
	}
	for (int index = 0; index < 10; index++)
	{
		remove(&rec[index]);
	}
	for (int index = 0; index < 10; index++)
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
	return 0;
}