         //Program to show the single level inheritance
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class empbasic
{
char name[30];
int code;
public:
void input()
{
cout<<"Enter name and code of an employee=";
gets(name);
cin>>code;
}
void display()
{
cout<<"\nName=";
puts(name);
cout<<"\nCode="<<code;
}
};
class empsub:public empbasic
{
char city[30];
long int basic;
public:
void input()
{
empbasic::input();
cout<<"Enter city and basic of an employee";
gets(city);
cin>>basic;
}
void display()
{
empbasic::display();
cout<<"\nEmployee city=";
puts(city);
cout<<"\nEmployee Basic="<<basic;
}
};
void main()
{
clrscr();
empsub E1;
E1.input();
E1.display();
getch();
}
