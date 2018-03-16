#include <iostream>
using namespace std;
class Distance
{
	private:
		int inch;
		int feet;
	public:
	Distance
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