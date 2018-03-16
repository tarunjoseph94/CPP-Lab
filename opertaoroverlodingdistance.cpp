#include <iostream>
using namespace std;
class Distance
{
	private:
		int inch;
		int feet;
	public:
	Distance operator+ (Distance b)
	{
		int f,i;
		f=feet+b.feet;
		i=inch+b.inch;
		if(i>12)
		{
			f=f+(i/12);
			i=i%12;
		}
		return Distance(i,f);
	}
	void display()
	{
		cout<<"Feet "<<feet<<"\n";
		cout<<"Inch "<<inch<<"\n";
	}
	Distance(int x,int y)
	{
		inch=x;
		feet=y;
	}
	Distance()
	{
		inch=0;
		feet=0;
	}
	// ~Distance();
	
};
int main()
{
	Distance d1(12,20),d2(30,20),d3;
	d3=d1+d2;
	d3.display();
}