# include <iostream>
using namespace std;
class  Base
{
protected:
	int n1=1;
public:
	int n2=2;
};
	class derive1:public Base
	{
	
		int n3=3;
	public:
		int n4=4;
		void display()
		{
		cout<<n1<<endl;
		cout<<n2<<endl;
		}
	};
	class derive2:protected Base
	{
	protected:
		int n5=5;
	public:
		int n6=6;
		void display()
		{
		cout<<n1<<endl;
		cout<<n2<<endl;
		}
	};
class out
{
public:
	void display()
	{
	
	}
};
 int main()
{
	derive1 d1;
	derive2 d2;
	out o1;
	d1.display();
	d2.display();
	// cout<<d1.n1<<endl;
	cout<<d1.n2<<endl;
	// cout<<d1.n3<<endl;
	cout<<d1.n4<<endl;
	// cout<<d2.n5<<endl;
	cout<<d2.n6<<endl;
	return 0;
}

