#include<iostream>
using namespace std;
int prime(int );
int main()
{
	int no1;
	cout<<"220130318016"<<endl;
	cout<<"Vasu sapariya"<<endl;
	cout<<"Enter the number::";
	cin>>no1;
	prime(no1);
	return 0;
}
int prime(int no1)
{
		int i,flag=0;
		for(i=2;i<no1/2;i++)
		{
			if(no1%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"This is prime number";
		}
		else
		{
			cout<<"This is not prime number";
		}
}
