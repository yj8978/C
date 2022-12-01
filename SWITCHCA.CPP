#include<iostream.h>
#include<conio.h>
void main()
{
 int x,y,c,r=0;
 cout<<"Enter two number\n";
 cin>>x>>y;
 cout<<"Menu\n"<<"1.Addition\n"<<"2.Subtraction\n"<<"3.Multiplication\n"<<"4.Division\n"<<"5.Remainder\n"<<"Enter the choice"<<endl;
 cin>>c;
 switch(c)
	{
	 case 1:
	 r=x+y;
	 cout<<"Sum\n"<<r<<endl;
	 break;

	 case 2:
	 r=x-y;
	 cout<<"Subtraction\n"<<r<<endl;
	 break;

	 case 3:
	 r=x*y;
	 cout<<"Multiplication\n"<<r<<endl;
	 break;
	 case 4:
	 r=x/y;
	 cout<<"Division\n"<<r<<endl;
	 break;

	 case 5:
	 r=x%y;
	 cout<<"Remainder\n"<<r<<endl;
	 break;

	 default:
	 cout<<"Error choice\n";
	}
 getch();
}
