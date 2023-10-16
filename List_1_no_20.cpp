#include<iostream.h>
#include<conio.h>
int factorial(int );
void main()
{
	int no1;
	clrscr();
	cout<<"220130318016"<<endl;
	cout<<"Vasu sapariya"<<endl;
	cout<<"Enter the number::";
	cin>>no1;
	factorial(no1);
	getch();
}
int factorial(int no1)
{
	int i,factorial=1;
	if(no1<0)
	{
		cout<<"This is factorial number is not exists";
	}
		for(i=1;i<=no1;i++)
		{
		factorial=factorial*i;
		}
	cout<<"this is factorial number::"<<factorial<<endl;

}
