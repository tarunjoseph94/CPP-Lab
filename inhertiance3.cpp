# include <iostream>
using namespace std;
class Student
{
protected:
	char name[20];
public:
	
	void add()
	{
		cout<<"Enter your name"<<endl;
		cin>>name;
	}
	virtual void display()
	{
		cout<<"The name is "<<name<<endl;
		
	}
	//  void display()
	// {
	// 	cout<<"The name is "<<name<<endl;
		
	// }
	// virtual void display()=0;
	
	
};
class Eng: public Student
{
protected:
	char stream [20] ={'E','n','g','i','n','e','e','r','i','n','g'};
public:


	void display()
	{
		cout<<"The stream is "<<stream<<endl;
		
	}
};

int main()
{
	Student* ptr;

	Eng e1;
	ptr=&e1;
	e1.add();
	ptr->display();

}