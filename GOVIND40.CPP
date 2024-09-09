                //Program to find sum using  Pointer
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a=10,b=20;
int c=a+b;
cout<<"The sum without pointers:"<<c;
int *x,*y;
x=&a;
y=&b;
int p=*x+*y;
cout<<"\nAddress of a:"<<x;
cout<<"\nAdress of b:"<<y;
cout<<"\nThe sum of number with pointers:"<<p;
getch();
}

