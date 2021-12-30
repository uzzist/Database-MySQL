#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("HospRecord.csv", ios_base::app);
	fout << "D1, Smith, P1, Jones, A8, 11/02/09, N3, Brown, Filling, 300" << endl;
	fout << "D2, Barky, P7, Coral, A9, 18/03/09, N1, Green, Canal, 1000" << endl;
	fout << "D5, Bond, P8, Jonson, A10, 31/01/09, N2, Sarah, Canal, 1000" << endl;
	fout.close();
	return 0;
}