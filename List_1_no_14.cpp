#include<iostream.h>
#include<conio.h>
int pal(int);
void main()
{
	int no1;
	clrscr();
	cout<<"220130318016"<<endl;
	cout<<"Vasu Sapariya"<<endl;
	cout<<"Enter the number::";
	cin>>no1;
	pal(no1);
	getch();
}
int pal(int no1)
{
	int rev=0,rem,no2,i;
	no2=no1;
	for(i=0;i<no1;i++)
	{
		rem=no1%10;
		rev=(rev*10)+rem;
		no1=no1/10;
	}
	if(no2==rev)
	{
		cout<<"This is palindrome number";
	}
	else
	{
		cout<<"This is not palindrome number";
	}
}
