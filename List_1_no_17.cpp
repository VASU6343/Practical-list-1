#include<iostream>
using namespace std;
int fibo(int );
int main()
{
	int no1,i;
	cout<<"220130318016";
	cout<<"Vasu sapariya";
	cout<<"Enter the number::";
	cin>>no1;
	for(i=0;i<no1;i++)
	{	
		cout<<fibo(i)<<endl;
	}
	return 0;
}
int fibo(int no1)
{
	if(no1<=1)
	return no1<<endl;
	return fibo(no1-1)+fibo(no1-2)<<endl;
}
