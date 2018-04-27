# include <iostream>
using namespace std;
class Employee
{

protected:
	char name[20];
	int empno;
	
public:
	void add()
	{
		cout<<"Enter your name"<<endl;
		cin>>name;
		cout<<"Enter your Employee no"<<endl;
		cin>>empno;
		
	}

	void display()
	{
		cout<<"The name is "<<name<<endl;
		cout<<"The emp no is "<<empno<<endl;
		
	}
};
class Salary
{
protected:
	int basic;
	float gross,bonus,hra,per;
public:
	void add()
	{
		cout<<"Enter your basic salary"<<endl;
		cin>>basic;
	}
	void display()
	{
		
		cout<<"The basic salary is "<<basic<<endl;
		cout<<"The hra is "<<hra<<endl;
		cout<<"The bonus is "<<bonus<<endl;
		cout<<"The gross salary is "<<gross<<endl;
	}
		void cal(float p)
	{
		hra =p*basic;
		bonus =p*basic;
		gross=bonus+hra+basic;
	}

	
	
};
class CEO:Employee,Salary
{
public:
	CEO()
	{
		per=0.5;
	}
	void add()
	{
		Employee::add();
		Salary::add();
	}
	void display()
	{
		Employee::display();
		Salary::display();
	}
	void calculate()
	{
		Salary::cal(per);
	}
	
};
class Worker:Employee,Salary

{
public:
	Worker()
	{
		per=0.2;
	}
	void add()
	{
		Employee::add();
		Salary::add();
	}
	void display()
	{
		Employee::display();
		Salary::display();
	}
	void calculate()
	{
		Salary::cal(per);
	}	
};
class Manager:Employee,Salary

{
public:
	Manager()
	{
		per=0.3;
	}
	void add()
	{
		Employee::add();
		Salary::add();
	}
	void display()
	{
		Employee::display();
		Salary::display();
	}
	void calculate()
	{
		Salary::cal(per);
	}
};
int main()
{
	CEO c1;
	Manager m1;
	Worker w1;
	c1.add();
	c1.calculate();
	c1.display();
	
	m1.add();
	m1.calculate();
	m1.display();

	w1.add();
	w1.calculate();
	w1.display();
}