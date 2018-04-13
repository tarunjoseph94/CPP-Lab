#include <iostream>
using namespace std;
class Stack
{
private:
	int stk[10];
	int top;
	int item;
public:
	Stack()
	{
		top=-1;
	}
	void  operator ++ ()
	{
		if(top==10)
		{
			cout<<"Stack is full \n";
		}
		else
		{
			cout<<"Enter the item to be pushed \n";
			cin>>item;
			top++;
			stk[top]=item;
			return;

		}
	}
	void operator -- ()
	{
		if(top==-1)
		{
			cout<<"Stack is empty \n";
		}
		else
		{
			item=stk[top];
			top--;
			cout<<"Popped item is "<<item<<"\n";
			return;
		}
	}


	



	void display()
	{
		int i;
		if(top==-1)
		{
			cout<<"Stack is empty \n";
		}
		else
		{
			cout<<"The stack is \n";
			for(i=0;i<top+1;i++)
			{
				cout<<stk[i]<<"\n";
			}
		}
	}
};
int main()
{
	Stack s1;
	int choice;
	while(choice!=4)
	{	
		
		cout<<"1.Push\n";
		cout<<"2.Pop\n";
		cout<<"3.Display\n";
		cout<<"4.Exit\n";
		cout<<"Enter your choice\n";
		cin>>choice;
		
			switch(choice)
			{
				case 1: ++s1;
				break;
				case 2: --s1;
				break;
				case 3: s1.display();
				break;
				case 4: 
				break;
				
			}
		}
		
	}
	return 0;
}