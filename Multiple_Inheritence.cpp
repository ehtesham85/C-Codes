#include<iostream>
using namespace std;
class A {
	private:
		int a;
	public:
		void in() {
			cout<<"Enter a: ";
			cin>>a;
		}
		void out() {
			cout<<"Value of a = "<<a<<endl;
		}
};
class B {
	private:
		int b;
	public:
		void input() {
			cout<<"Enter b: ";
			cin>>b;
		}
		void output() {
			cout<<"Value of b = "<<b<<endl;
		}
};
class C:public A,public B {
	private:
		int c;
	public:
		void set() 
		{
            A::in();
            B::input();
			cout<<"Enter c = ";
			cin>>c;
		}
		void show() 
		{
			A::out();
			B::output();
			cout<<"Value of c = "<<c<<endl;
		}
};
int main() {
	C c;
	c.set();
	c.show();
}