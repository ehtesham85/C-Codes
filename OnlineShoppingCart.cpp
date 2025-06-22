#include<iostream>
using namespace std;
class Product
{
public:
	string name;
	float price;
    void setProduct(string n,float p)
    {
    	name=n;
    	price=p;
	}
	void showProduct()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Price: "<<price<<endl;
	}
};
class Cart
{
public:
	Product product[100];
	int count=0;
	void addProduct(string n,float p)
	{
		if(count<100)
		{
			product[count].setProduct(n,p);
			count++;
			cout<<"Product Added successfully"<<endl;
		}
		else
		{
			cout<<"Cart is full"<<endl;
		}
	}
	void removeProduct(string name)
	{
		bool found=false;
		for(int i=0 ; i<count ; i++)
		{
			if(product[i].name==name)
			{
				for(int j=i ; j<count-1;j++)
				{
					product[j]=product[j+1];
				}
				count--;
				found = true;
				cout<<"Product remove from cart"<<endl;
				break;
			}
		}
		if(!found)
		{
			cout<<"Product not found"<<endl;
		}
	}
	void viewCart()
	{
		if(count==0)
		{
			cout<<"No cart added"<<endl;
		}
		else
		{
			for(int i=0 ; i<count ; i++)
			{
				product[i].showProduct();
			}
		}
	}
	void calculateTotal()
	{
		float total=0;
		for(int i=0 ; i<count ; i++)
		{
			total+=product[i].price;
		}
		cout<<"Total price: "<<total<<endl;
	}
	
};

int main()
{
	Cart a;
	a.addProduct("Laptop",50000);
	a.addProduct("Mouse",200);
	a.addProduct("Keyboard",200);
	
	a.viewCart();
	a.calculateTotal();
	
	a.removeProduct("Mouse");
	
	a.viewCart();
	a.calculateTotal();
}