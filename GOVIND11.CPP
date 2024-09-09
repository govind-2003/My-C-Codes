	  //Program for the multiplication of matrices
#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
int i,j,k;
int a[10][10],b[10][10],c[10][10];
int r1,r2,c1,c2;
cout<<"Enter rows and Columns:";
cin>>r1>>c1>>r2>>c2;
if(c1!=r2)
{
cout<<"Multiplication is not possible.";
exit(0);
}
cout<<"Enter elements of first matrix:";
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
cin>>a[i][j];
}
cout<<"\n";
}
cout<<"Enter elements of second matrix:";
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
cin>>b[i][j];
}
cout<<"\n";
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
c[i][j]=0;
for(k=0;k<r2;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
cout<<c[i][j]<<" ";
}
cout<<"\n";
}
getch();
}
