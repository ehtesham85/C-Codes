#include<iostream>
using namespace std;
class Result
{
private:
   int marks[3];
public:
   void in()
   {
       for(int i=0; i<3 ; i++)
       {
           cout<<"Enter Marks: ";
           cin>>marks[i];
       }
   }
   void show()
   {
       int t=0;
       cout<<endl;
       cout<<"Result Card: "<<endl;
       for(int i=0 ; i<3 ; i++)
       {
           cout<<"Marks = "<<marks[i]<<endl;
           t=t+marks[i];
       }
       cout<<"Total marks= "<<t<<endl;
       cout<<"Average Marks= "<<float(t)/3.0;
   }
};
class Student
{
private:
   int rno;
   string name;
   Result res;
public:
   void in()
   {
       cout<<"Enter Roll no: ";
       cin>>rno;
       cin.ignore();
       cout<<"Enter name: ";
       getline(cin,name);
       res.in();
   }
   void show()
   {
       cout<<endl;
       cout<<"Personal Information: "<<endl;
       cout<<"Roll no: "<<rno<<endl;
       cout<<"Name: "<<name<<endl;
       res.show();
   }
};
int main()
{
    Student s;
    s.in();
    s.show();
}