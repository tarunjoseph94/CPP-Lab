#include <iostream>
using namespace std;
class Shape
{
private:
	float result;
public:
	void area(int r)
	{
		result=3.14*r*r;
	}
	void area(int l,int b)
	{
		result=l*b;
	}
	void area(double b,double h)
	{
	result=0.5*b*h;
	}
	void display()
	{
		cout<<"The area is"<<result<<"\n";
	}
	
	
};

int main()
{
Shape s1;
int choice;
while(choice!=4)
	{
		cout<<"1.Area of Circle \n";
		cout<<"2.Area of Rectangle \n";
		cout<<"3.Area of Triangle \n";
		cout<<"4.Exit \n";
		cout<<"Enter your choice  \n";
		cin>>choice;
		switch(choice)
		{
			case 1:	s1.area(5);
			s1.display();
			break;
			case 2:s1.area(2,8);
			s1.display();
			break;
			case 3:s1.area(10.2,5.3);
			s1.display();
			break;
			default:cout<<"Enter a valid choice";
		}
}
return 0;
}