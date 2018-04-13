#include <iostream>
using namespace std;
class Comp
{
private:
	int num1;
public:
	int operator < (Comp c2)
	{
		if(num1<c2.num1)
			return 1;
		else
			return 0;
	}
		int operator > (Comp c2)
	{
		if(num1>c2.num1)
			return 1;
		else
			return 0;
	}
		int operator == (Comp c2)
	{
		if(num1==c2.num1)
			return 1;
		else
			return 0;
	}
		int operator != (Comp c2)
	{
		if(num1!=c2.num1)
			return 1;
		else
			return 0;
	}
	Comp()
	{
		num1=0;
	}

	void enterData()
	{
		cout<<"Enter any number \n";
		cin>>num1;
	}
	
};
 int main()
{
	Comp o1,o2;

	o1.enterData();
	o2.enterData();
	if((o1<o2)==1)
		cout<<"o1 is < than o2 \n";
	else
		cout<<"o1 is > than o2 \n";
	if((o1>o2)==1)
		cout<<"o1 is > than o2 \n";
	else
		cout<<"o1 is < than o2 \n";
if((o1==o2)==1)
		cout<<"o1 is == o2 \n";
	else
		cout<<"o1 is != o2 \n";
if((o1!=o2)==1)
		cout<<"o1 is != o2 \n";
	else
		cout<<"o1 is == o2 \n";

	return 0;
}
