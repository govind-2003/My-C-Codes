8.                    //Program to define function outside the class body
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class DanceAcademy
{
private:
int Enrollno;
char Name[20];
char Style[20];
long double Fee;
void chkfee();
public:
void enrollment();
void display();
};
void DanceAcademy::chkfee()
{
if(strcmp(Style,"Classical")==0)
Fee=10000;
else if(strcmp(Style,"Western")==0)
Fee=8000;
else if(strcmp(Style,"Freestyle")==0)
Fee=11000;
}
void DanceAcademy::enrollment()
{
cout<<"Enter the values for Enrollment number,Name and Style:";
cin>>Enrollno;
gets(Name);
gets(Style);
chkfee();
}
void DanceAcademy::display()
{
cout<<"The Enrollment number="<<Enrollno;
cout<<"\nThe name of the candidate=";
puts(Name);
cout<<"\nStyle of the Dance=";
puts(Style);
cout<<"\nFees="<<Fee;
}
void main()
{
clrscr();
DanceAcademy d;
d.enrollment();
d.display();
getch();
}