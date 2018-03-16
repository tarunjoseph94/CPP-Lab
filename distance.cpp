#include <iostream>
using namespace std;

class Distance
{
private:
	int feet;
	int inches;
public:
	void showdist()
	{
		cout<<feet<<"-"<<inches<<"\n";

	}
	
	void getdist()
	{	
	
	cout<<"Enter the feet \n";
	
	cin>>feet;
	
	cout<<"Enter the inches \n";
	cin>>inches;

	}
	void adddist(Distance,Distance);
	
	Distance()
	{
		feet=0;
		inches=0;
	}
	Distance(int a,int b)
	{
		feet=a;
		inches=b;
	}
		
};
// void Distance::getdist()
// {
// 	cout<<"Enter the feet \n";
// 	cout<"1 \n";
// 	cin>>feet;
// 	cout<"2 \n";
// 	cout<"Enter the inches \n";
// 	cin>>inches;
// }
void Distance::adddist(Distance x,Distance y)
{
	inches=x.inches+y.inches;
	feet=x.feet+y.feet;
	if(inches>11)
	{
		inches=inches-12;
		feet++;
	}
}
int main()
{
	Distance d1(6,2),d2,d3;
	
	d2.getdist();
	d3.adddist(d1,d2);
	d3.showdist();
	return 0;
}