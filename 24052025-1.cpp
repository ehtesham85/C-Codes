/*
  Write a program that declare two classes.Simple as Parent class and Complex as child class.Parent class contain two
  attributes such as a and b.It has four member function:
    1- add() for adding a and b
    2- sub() for subtracting a and b
    3- mul() for multiplying a and b
    4- div() for dividing a and b
  Child class can override all four functionc. Each function in child class chechs the valus of data members and call
  the corresponding member function in parent class if value greater than 0. Otherwise it displays erreo message.
*/
#include<iostream>
using namespace std;
class Simple
{
protected:
   int a;
   int b;
public:
   Simple()
   {
      a=0;
	  b=0;	
   }
   void in()
   {
      cout<<"Enter first value: ";
	  cin>>a;
	  cout<<"Enter second value: ";
	  cin>>b;	
   }	
   void add()
   {
   	cout<<"a+b = "<<a+b<<endl;
   }
   void sub()
   {
   	cout<<"a-b = "<<a-b<<endl;
   }
   void mul()
   {
   	cout<<"a*b = "<<a*b<<endl;
   }
   void div()
   {
   	cout<<"a/b = "<<a/b<<endl;
   }
};
class Complex:public Simple

{
public:
	void add()
	{
		if(a<=0||b<=0)
		cout<<"Invalid Input"<<endl;
		else
		Simple::add();
	}
	void sub()
	{
		if(a<=0||b<=0)
		cout<<"Invalid Input"<<endl;
		else
		Simple::sub();
	}
	void mul()
	{
		if(a<=0||b<=0)
		cout<<"Invalid Input"<<endl;
		else
		Simple::mul();
	}
	void div()
	{
		if(a<=0||b<=0)
		cout<<"Invalid Input"<<endl;
		else
		Simple::div();
	}
};
int main()
{
	Complex c;
	c.add();
	c.in();
	c.add();
	c.sub();
	c.mul();
	c.div();
}