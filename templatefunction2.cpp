#include <iostream>
using namespace std;
template <class Stack>

int push(Stack* stk,int top)
{
	Stack item;
	if(top==5)
	{
		cout<<"Stack is full \n";
		return top;
	}	
	else
	{
		top++;
		cout<<"Enter the item to be pushed \n";
		cin>>item;
		stk[top]=item;
		return top;
	}
}
template <class Stack>
int pop(Stack* stk,int top)
{
	Stack item;
	if(top==-1)
	{
		cout<<"Stack is empty \n";
		return top;
	}	
	else
	{
		item=stk[top];
		top--;
		cout<<"Popped item is "<<item<<"\n";
		return top;
	}
}
template <class Stack>
void display(Stack *stk,int top)
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

int instack[5];
int intop=-1;
float flstack[5];
int fltop=-1;

int main()
	{
		cout<<" int push\n";
	intop=push(instack,intop);
	cout<<" int push\n";
	intop=push(instack,intop);
	cout<<" int push\n";
	intop=push(instack,intop);
	cout<<" int push\n";
	intop=push(instack,intop);
	cout<<"int push\n";
	intop=push(instack,intop);
	cout<<"float push\n";
	fltop=push(flstack,fltop);
	cout<<"float push\n";
	fltop=push(flstack,fltop);
	cout<<"float push\n";
	fltop=push(flstack,fltop);
	cout<<"float push\n";
	fltop=push(flstack,fltop);
	cout<<"float push\n";
	fltop=push(flstack,fltop);
	cout<<"int pop\n";
	intop=pop(instack,intop);
	cout<<"int pop\n";
	intop=pop(instack,intop);
	cout<<"float pop\n";
	fltop=pop(flstack,fltop);
	cout<<"int display\n";
	display(instack,intop);
	cout<<"float display\n";
	display(flstack,fltop);
	return 0;
	}