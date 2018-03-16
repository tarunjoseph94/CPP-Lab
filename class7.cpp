
#include <iostream>
using namespace std;
	
	class firstObj //Class name
	{
	private:
	void hello()
	{
		cout<<"Hello \n";
	}
		void yes()
	{
		cout<<"Yes \n";
	}
		void no()
	{
		cout<<"no \n";
	}
		void maybe()
	{
		cout<<"Maybe \n";
	}
	public:

	firstObj(int i) //Constructor
		 {
		 	
		 	switch(i)
		 	{
		 		case 1:hello();
		 		break;
		 		case 2:yes();
		 		break;
		 		case 3:no();
		 		break;
		 		case 4:maybe();
		 		break;
		 		default:cout<<"Enter a valid choice \n";
		 		break;
		 	}
		 	
		 }
		
		
	};
int main()
{
	cout<<"1.Hello \n";
	cout<<"2.Yes \n";
	cout<<"3.No \n";
	cout<<"4.Maybe \n";
	int choice;
	cin>>choice;
	firstObj a1(choice);
	
	return 0;
}