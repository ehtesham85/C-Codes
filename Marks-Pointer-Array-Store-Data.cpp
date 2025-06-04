#include<iostream>
using namespace std;
class marks
{
private:
   int array[5];
   int sum;
   float average;
 public:
    void in()
    {
        for(int i=0 ; i<5 ; i++)
        {
            cout<<"Marks of subject "<<i+1<<": ";
            cin>>array[i];
            sum=sum+array[i];
        }
    }
    void display()
    {
        average=sum/5;
        cout<<"Average: "<<average<<endl;
    }
};
int main()
{
    marks a;
    a.in();
    a.display();
}