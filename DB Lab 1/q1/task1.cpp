#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("HospRecord.csv");
	fout << "D1, Smith, P1, Jones, A1, 1/02/09, N1, Green, Filling, 300" << endl;
	fout << "D1, Smith, P1, Jones, A2, 1/03/09, N1, Green, Filling, 300" << endl;
	fout << "D1, Smith, P2, Patel, A3, 3/01/09, N2, Sarah, Canal, 1000" << endl;
	fout << "D2, Barky, P3, Thom, A4, 6/03/09, N3, Brown, Crown, 700" << endl;
	fout << "D3, Thomas, P4, Ronnie, A5, 8/06/09, N4, Cann, Filling, 300" << endl;
	fout << "D4, Sam, P5, Emily, A6, 9/07/09, N1, Green, Canal, 1000" << endl;
	fout << "D2, Barky, P6, Sana, A7, 8/07/09, N2, Sarah, Canal, 1000" << endl;
	fout.close();
	return 0;
}