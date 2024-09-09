7.                         //Program to find the Electric Bill using Class
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class Ele_Bill
{
private:
char Cname[20];
long int Pnumber;
int units;
float Amount;
void Cal_Amount()
{
if(units<=50)
Amount=0;
else if(units<=150)
Amount=(units-50)*0.80;
else if(units<=350)
Amount=100*0.80+(units-150)*1.00;
else Amount=100*0.80+200+(units-350)*1.20;
}
public:
void Accept()
{
cout<<"Enter Customer name,Phone number and Number of units.";
gets(Cname);
cin>>Pnumber>>units;
Cal_Amount();
}
void Display()
{
cout<<"Customer Name="<<Cname;
cout<<"\nCustomer Phone number="<<Pnumber;
cout<<"\nNumber of units="<<units;
cout<<"\nAmount="<<Amount;
}
};
void main()
{
clrscr();
Ele_Bill A1;
A1.Accept();
A1.Display();
getch();
}

