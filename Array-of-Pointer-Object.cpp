#include<iostream>
using namespace std;
class Person
{
private:
    string name;
public:
    void get()
	{
	   cout<<"Enter Name: ";
	   cin>>name;	
	}	
	void show()
	{
		cout<<"Name: "<<name<<endl;
	}
};
int main()
{
	Person *ptr[5];
	for(int i=0 ; i<5 ; i++)
	{
		ptr[i]=new Person;
		ptr[i]->get();
	}
	for(int i=0 ; i<5 ; i++)
	{
		ptr[i]->show();
	}
}