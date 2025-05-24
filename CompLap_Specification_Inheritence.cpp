#include<iostream>
using namespace std;
class Computer
{
protected:
	int wordSize;
    int memorySize;
	double storageSize;
	int speed;
public:
	Computer()
	{
		wordSize=0;
		memorySize=0;
		storageSize=0;
		speed=0;
	}
	Computer(int ws,int ms,double ss, int s)
	{
		wordSize=ws;
		memorySize=ms;
		storageSize=ss;
		speed=s;
	}
	void display()
	{
		cout<<"Word Size (Bits): "<<wordSize<<endl;;
		cout<<"Memory Size (MegaBytes): "<<memorySize<<endl;
		cout<<"Storage Size (MegaBytes): "<<storageSize<<endl;
		cout<<"Speed (MegaHerts): "<<speed<<endl;
	}
};
class Laptop:public Computer
{
private:
	double length,width,height,weight;
public:
	Laptop()
	{
		length=0.0;
		width=0.0;
		height=0.0;
		weight=0.0;
	}
	Laptop(int ws,int ms,double ss, int s,double l,double w,double h,double we):Computer(ws,ms,ss,s)
	{
		length=l;
		width=w;
		height=h;
		weight=we;
	}
	void display()
	{
		Computer::display();
		cout<<"Length: "<<length<<endl;
		cout<<"Width: "<<width<<endl;
		cout<<"Height: "<<height<<endl;
		cout<<"Weight: "<<weight<<endl;
	}
};
int main()
{
	Computer a(4, 512, 20, 2);
	Laptop b(8,1024,50,2,15,19,14,2);
	cout<<endl;
	cout<<"Computer Specifications: "<<endl;
	a.display();
	cout<<endl;
	cout<<"Laptop Specifications: "<<endl;
	b.display();
}