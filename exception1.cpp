#include <iostream>
using namespace std;
int main()
{
	cout<<"Try \n";
	try
	{
		cout<<"Invalid try block \n";
		throw 100;
		cout<<"This will not execute \n";
	}
	catch(int i)
	{
		cout<<"Excetion is"<<endl;
		cout<<i<<"\n";
		throw 'b';
	}

	cout<<"Ending";
}