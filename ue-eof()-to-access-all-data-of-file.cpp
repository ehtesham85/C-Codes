#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	// Writing the File
	ofstream out;
	out.open("sample70.txt");
	out<<"Assalam-u-Alaikum !";
	out<<"\n";
	out<<"My name is Ehtesham";
	out<<"\n";
	out<<"I hope you are fine. I am writing for my skills.";
	out<<"\n";
	out<<"Thank you very much";
	out.close();
	
	
	// Reading the File
	ifstream in;
	in.open("sample70.txt");
	string st;
	while(in.eof()==0)
	{
		getline(in, st);
		cout<<st<<endl;
	}
	in.close();
	
	
}