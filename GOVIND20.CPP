6.	      //Prgram for swapping the first Row elements with last Row elements
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ARR[10][10],R,C,i,j;
void swap_row(int ARR[10][10],int R,int C);
cout<<"Enter the number of rows:";
cin>>R;
cout<<"\nEnter the number of columns:";
cin>>C;
cout<<"\nEnter the elements of a matrix:";
for(i=0;i<R;i++)
{
for(j=0;j<C;j++)
{
cin>>ARR[i][j];
}
}
cout<<"Display of matrix elements:\n";
for(i=0;i<R;i++)
{
for(j=0;j<C;j++)
{
cout<<ARR[i][j]<<"  ";
}
cout<<"\n";
}
swap_row(ARR,R,C);
getch();
}
void swap_row(int ARR[10][10],int R,int C)
{
int i,j,k,c;
for(i=0,k=R-1;i<=0,k>=R-1;i++,k--)
{
for(j=0;j<C;j++)
{
c=ARR[i][j];
ARR[i][j]=ARR[k][j];
ARR[k][j]=c;
}
}
cout<<"Display of elements after swapping the elements:\n";
for(i=0;i<R;i++)
{
for(j=0;j<C;j++)
{
cout<<ARR[i][j]<<"  ";
}
cout<<"\n";
}
}