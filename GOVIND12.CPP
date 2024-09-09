	  //Program for the sum of diagonal elements
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,s=0;
int a[3][3];
cout<<"Enter matrix elements.\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>a[i][j];
}
}
cout<<"display of inputted matrix\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<a[i][j]<<"  ";
}
cout<<"\n";
}
cout<<"display of diagonal elements of a matrix\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i==j||i+j==2)
{
cout<<a[i][j]<<"   ";
s=s+a[i][j];
}
}
}
cout<<"\nSum of Diagonal elements:"<<s;
getch();
}