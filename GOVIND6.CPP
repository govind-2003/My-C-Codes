		   //Program for linear Search
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,temp,i;
cout<<"Enter any element:";
cin>>n;
int a[]={2,4,54,53,67,87,98,32,12,79};
for(i=0;i<10;++i)
{
if(n==a[i])
{
temp=1;
break;
}
}
if(temp==1)
cout<<"Number is found at position "<<i+1;
else
cout<<"Number is not found";
getch();
}