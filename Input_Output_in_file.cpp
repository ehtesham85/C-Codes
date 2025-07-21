#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	
	// Writing operation
	ofstream out("sample80.txt");
	string st1="Kash Tery Ishaq ma neelam ho jao !!!!! Akrhi boli tum lgao !!!!! Tery Name ho jauu !!!!!";
	out<<st1;
	
	// Reading operation
	ifstream in("sample90.txt");
	string st2;
	getline(in, st2);
	cout<<st2;
	
	
}