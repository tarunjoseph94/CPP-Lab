
#include <iostream>
using namespace std;
	
	class firstObj //Class name
	{
	private:
	int a,b,c;
	public:

	void add()
	{
		cout<<"Enter a \n";
		cin>>a>>b;
		
		
		c=a+b;
		cout<<"C ="<<c;
	}	
		
	};
int main()
{
	
	firstObj a1;
	a1.add();
	
	return 0;
}