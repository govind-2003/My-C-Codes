	   //Program for binary search
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,temp=0,b=0,end=7,mid;
int a[]={2,4,16,34,35,56,78,98};
cout<<"Enter any element to be searched:";
cin>>n;
while(temp==0 && end>b)
{
mid=(b+end)/2;
if(n>a[mid])
b=mid;
else if(n<a[mid])
end=mid;
else if(n==a[mid])
temp=1;
}
if(temp==1)
cout<<"Number is found at position "<<mid+1;
else
cout<<"Number is not found.";
getch();
}

