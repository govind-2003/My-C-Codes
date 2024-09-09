           //Program to show the constructor overloading
#include<iostream.h>
#include<conio.h>
class over
{
private:
int a,b;
public:
over()
{
a=5;
b=6;
}
over(int x,int y)
{
a=x;
b=y;
}
over(over & A)
{
a=A.a;
b=A.b;
}
void display()
{
cout<<a<<"\n"<<b<<"\n";
}
};
void main()
{
clrscr();
over P;
over Q(100,200);
over R(Q);
P.display();
Q.display();
R.display();
getch();
}