#include <iostream>
using namespace std;
class Distance
{
	private:
		int inch;
		int feet;
	public:
	Distance operator +(Distance a,Distance b)
	{
		int f,i;
		f=a.feet+b.feet;
		i=a.inch+b.inch;
		if(i>12)
		{
			i=i-12;
			f++:
		}
		return Distance(i,f);
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
	~Distance();
	
};
int main()
{
	Distance d1(12,20),d2(30,20),d3;
	d3=d1+d2;
	d3.display();
}