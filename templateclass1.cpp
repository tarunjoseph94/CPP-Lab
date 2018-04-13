#include <iostream>
using namespace std;
template <class typeA>
class Stack
{
private:
	typeA stk[5];
	int top;
public:
	void push()
{
	typeA item;
	if(top==5)
	{
		cout<<"Stack is full \n";
		
	}	
	else
	{
		top++;
		cout<<"Enter the item to be pushed \n";
		cin>>item;
		stk[top]=item;
		cout<<"Top is"<<top<<endl;
	
	}
}
void pop()
{
	typeA item;
	if(top==-1)
	{
		cout<<"Stack is empty \n";
	
	}	
	else
	{
		item=stk[top];
		top--;
		cout<<"Popped item is "<<item<<"\n";
	
	}
}
void display()
{
	
	if(top==-1)
	{
		cout<<"Stack is empty \n";
		
	}	
	else
	{
		cout<<"Stack is \n";
		for (int i = 0; i <=top; ++i)
		{
			cout<<stk[i]<<endl;
		}
		cout<<"\n";
	}
}



	Stack()
	{
		top=-1;
	}
	
	
};

int main()
{
	Stack <int> s1;
	Stack <float> s2;
	int choice1,choice2;
	while(choice1!=3)
	{
		cout<<"1.Int stack \n";
		cout<<"2.Float stack \n";
		cout<<"3.Exit \n";
		cout<<"Enter your choice \n";
		cin>>choice1;
		switch(choice1)
		{
			case 1:while(choice2!=4)
			{
				cout<<"1.Push int \n";
				cout<<"2.Pop int stack \n";
				cout<<"3.Display Int stack \n";
				cout<<"4.Go back \n";
				cout<<"Enter your choice \n";
				cin>>choice2;
				switch(choice2)
				{
					case 1:s1.push();
					break;
					case 2:s1.pop();
					break;
					case 3:s1.display();
					break;
					case 4:
					break;
				}

			}
			break;
			case 2:while(choice2!=4)
			{
				cout<<"1.Push float stack \n";
				cout<<"2.Pop float stack \n";
				cout<<"3.Display float stack \n";
				cout<<"4.Go back \n";
				cout<<"Enter your choice \n";
				cin>>choice2;
				switch(choice2)
				{
					case 1:s2.push();
					break;
					case 2:s2.pop();
					break;
					case 3:s2.display();
					break;
					case 4:
					break;
				}

			}
			break;
			case 3:break;
		}
	}
}