         //Program to show the multilevel inheritance
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class st
{
int Roll;
char name[30];
public:
void input()
{
cout<<"Enter the name of an student:";
gets(name);
cout<<"Enter the roll number:";
cin>>Roll;
}
void output()
{
cout<<"\nName of the student=";
puts(name);
cout<<"\nRoll number of the student="<<Roll;
}
};
class sub1:public st
{
int cl;
char sub[30];
public:
void input()
{
st::input();
cout<<"Enter the class of the student:";
cin>>cl;
cout<<"Enter the subject:";
gets(sub);
}
void output()
{
st::output();
cout<<"\nClass of the student:"<<cl;
cout<<"\nSubject of the student:";
puts(sub);
}
};
class sub2:public sub1
{
char div[3];
int per;
public:
void input()
{
sub1::input();
cout<<"Enter the division of the student:";
gets(div);
cout<<"Enter the percentage of the student:";
cin>>per;
}
void output()
{
sub1::output();
cout<<"\nDivision of the  Student:";
puts(div);
cout<<"\nPercentage of the student:"<<per;
}
};
void main()
{
clrscr();
sub2 A;
A.input();
A.output();
getch();
}
