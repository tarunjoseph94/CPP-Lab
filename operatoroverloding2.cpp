#include <iostream>
using namespace std;
class counter
{
private:
	int count;
public:

	counter()
	{
		count=0;
	}
		counter(int a)
	{
		count=a;
	}
	int getCount()
	{
		return count;
	}
	void operator++()
	{
		++count;
	}
	counter operator++(int)
	{
		++count;
		return counter(count);
	}
};
int main()
{
	counter c1,c2,c3,c4;
	++c1;
	++c1;
	++c1;
	c4=c1;
	c2++;
	c3=c2++;
	cout<<"The count "<<c1.getCount()<<"\n";
	cout<<"The count "<<c2.getCount()<<"\n";
	cout<<"The count "<<c3.getCount()<<"\n";
	cout<<"The count "<<c4.getCount()<<"\n";
	return 0;
}
