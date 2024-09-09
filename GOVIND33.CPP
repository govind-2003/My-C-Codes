9.              //Program to display the result using constructor
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class Candidate
{
long int Rno;
char Cname[20];
float Agg_marks;
char Grade;
void setGrade()
{
if(Agg_marks>=80)
Grade='A';
else if(Agg_marks>=65 && Agg_marks<80)
Grade='B';
else if(Agg_marks>=50 && Agg_marks<65)
Grade='C';
else if(Agg_marks<50)
Grade='D';
}
public:
Candidate()
{
Rno=0;
strcpy(Cname,"N.A");
Agg_marks=0.0;
}
void Getdata()
{
cout<<"Enter values for Rno,Cname and Agg_marks:";
cin>>Rno;
gets(Cname);
cin>>Agg_marks;
setGrade();
}
void dispResult()
{
cout<<"Registration number:"<<Rno;
cout<<"\nCandidate name:";
puts(Cname);
cout<<"\nAggregate marks:"<<Agg_marks;
cout<<"\nGrade:"<<Grade;
}
};
void main()
{
clrscr();
Candidate A;
A.Getdata();
A.dispResult();
getch();
}
