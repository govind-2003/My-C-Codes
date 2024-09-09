		     //Program of bubble sort
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,temp;
int a[]={10,3,45,65,4,3,12,34};
for(i=0;i<8;i++)
{
for(j=0;j<8-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
//Display of sorted Array
for(i=0;i<8;i++)
{
cout<<a[i]<<"  ";
}
getch();
}