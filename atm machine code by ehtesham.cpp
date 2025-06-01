#include<iostream>
using namespace std;
int main()
{   int balance=200000;
    int category;
	cout<<" Please Enter Atm Card "<<endl;
	int atmpin;
	cout<<" Enter ATM pin:  ";
	cin>>atmpin;
	cout<<"1- Check balance"<<endl;
	cout<<"2- Withdraw money"<<endl;
	cout<<"3- Reset ATM Pin"<<endl;
	cout<<"4- Cash Transfer"<<endl;
	int choice;
	cin>>choice;
	if ( choice==1)
	{
		category=1;
	}
	else if ( choice==2)
	{
		category=2;
	}
	else if ( choice==3)
	{
		category=3;
	}
	else if ( choice==4)
	{
		category=4;
	}
	
	switch (category)
	{
		case 1:
		int pin;
		cout<<"Enter ATM pin"<<endl;
		cin>>pin;
		cout<<"Your Balance is: "<<balance;
		break;
		
		case 2:
		cout<<"1- 10000 "<<endl;
		cout<<"2- 50000 "<<endl;
		cout<<"3- 100000 "<<endl;
		cout<<"4- Enter Amount to be Withdraw "<<endl;
		int choice_2;
		cin>>choice_2;
		if( choice_2==1)
		{
		    	int withdraw_1=10000;
			int withdraw=balance-withdraw_1;
			cout<<withdraw_1<<" Money have been withdraw."<<endl;
			cout<<"Remaining balance is: "<<withdraw;
		}
	    else if( choice_2==2)
		{
			int withdraw_2=50000;
			int withdraw2=balance-withdraw_2;
			cout<<withdraw_2<<" Money have been withdraw."<<endl;
			cout<<"Reamining balance is: "<<withdraw2;
		}
		else if( choice_2==3)
		{
				int withdraw_3=100000;
			int withdraw3=balance-withdraw_3;
			cout<<withdraw_3<<" Money have been withdraw."<<endl;
			cout<<"Remaining balance is: "<<withdraw3;
		}
		else if( choice_2==4)
		{
				int amount;
			cout<<"Enter Amount: "<<endl;
			cin>>amount;
			int withdraw_4=balance-amount;
			cout<<amount<<" money have been withdraw."<<endl;
			cout<<"Reamining balance is: "<<withdraw_4;
		}
		break;
		case 3:
		int choice;
		cout<<"1- Enter old pin to reset"<<endl;
		cout<<"2- Reset by email address"<<endl;
		cin>>choice;
		switch ( choice )
		{
		case 1:
		int oldpin;
		cout<<"Enter old ATM pin:  ";
		cin>>oldpin;
		int newpin;
		cout<<"Enter New pin:  ";
		cin>>newpin;
		int retype;
		cout<<"Enter New pin Again:  ";
		cin>>retype;
		cout<<"Your Pin Have been reset successfully."<<endl;
		break;
		
		case 2:
		int reset;
		cout<<" Check Your email address and enter 6 digits code:  ";
		cin>>reset;
		cout<<"Enter New pin:  ";
		cin>>newpin;
		int type;
		cout<<"Enter New pin Again:  ";
		cin>>type;
		cout<<"Your Pin Have been reset successfully."<<endl;
		break;
		}
		
		case 4:
		int cash;
		cout<<"Enter Account number:  ";
		cin>>cash;
		int apin;
		cout<<"Enter Pin to confirm:  ";
		cin>>pin;
		if(pin==atmpin){
			int a;
			cout<<"Enter Amount:  ";
			cin>>a;
			cout<<" Money have been tranferred successfully."<<endl;
		}
        else if ( pin!=atmpin)
        {
        	cout<<"Pin is not correct"<<endl;
		}
	 	
	     	break;
	}
	cout<<" Thank you very much "<<endl;
}