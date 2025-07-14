#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string st="Ehtesham";
	string st2;
	
	ofstream out("sample60.txt");
	out<<st;
	
	ifstream in("sample70.txt");
	getline(in, st2);
	cout<<st2;
	
}