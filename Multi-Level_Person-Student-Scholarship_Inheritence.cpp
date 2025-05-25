#include<iostream>
using namespace std;
class Person
{
protected:
	int id;
	string name;
	string address;
public:
	Person()
	{
		id=0;
		name="";
		address="";
	}
	void input()
	{
		cout<<"Enter ID: ";
		cin>>id;
		cin.ignore();
		cout<<"Enter Name: ";
		getline(cin,name);
		cout<<"Enter Address: ";
		getline(cin,address);
	}
	void output()
	{
		cout<<endl;
		cout<<"Personal Information : "<<endl;
		cout<<"ID: "<<id<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Address: "<<address<<endl;
	}
};
class Student:public Person
{
private:
	int rollno;
	int marks;
public:
	Student()
	{
		Person:Person();
		rollno=0;
		marks=0;
	}
	void input()
	{
		Person::input();
		cout<<"Enter Roll no: ";
		cin>>rollno;
		cout<<"Enter Marks: ";
		cin>>marks;
	}
	void output()
	{
		Person::output();
		cout<<endl;
		cout<<"Educational Information: "<<endl;
		cout<<"Roll No: "<<rollno<<endl;
		cout<<"Marks: "<<marks;
		cout<<endl;
	}

};
class Scholarship:public Student
{
private:
    string sname;
	double amount;
public:
    void input()
    {
        Student::input();
        cin.ignore();
		cout<<"Eter Scholarship name: ";
		getline(cin,sname);
		cout<<"Enter scholarship amount: ";
		cin>>amount;
	}
	void output()
	{
		Student::output();
		cout<<endl;
		cout<<"Scholarship Information:"<<endl;
		cout<<"Scholarship name: "<<sname<<endl;
		cout<<"Scholarship Amount: "<<amount<<endl;
	}
};
int main()
{
	Scholarship s;
	s.input();
	s.output();
}
	