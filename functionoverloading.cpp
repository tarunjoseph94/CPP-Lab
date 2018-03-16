#include <iostream>
using namespace std;
class Adder
{
private:
	int result;
	int res[5];
	int r[3][3];
public:
	void add(int a,int b)
	{
		result=a+b;
		cout<<"THe result is "<<result<<"\n";
	}
	void add(int x[],int y[],int n)
	{
		int i;
		for ( i = 0; i < n; ++i)
		{
			res[i]=x[i]+y[i];
		}
		cout<<"The array elements are \n";
		for ( i = 0; i < n; ++i)
		{
			cout<<res[i]<<"\t";
		}
	}
	void add(int x[3][3],int y[3][3],int m,int n)
	{
		int i,j;
		for ( i = 0; i < m; ++i)
		{
			for (j = 0; j < n; ++j)
			{
				r[i][j]=x[i][j]+y[i][j];
			}
		}
		cout<<"The array elements are \n";
		for ( i = 0; i < m; ++i)
		{
			for (j = 0; j < n; ++j)
			{
				cout<<r[i][j]<<"\t";
			}
			cout<<"\n";
		}
	}
	// Adder();
	// ~Adder();
	
};
int main()
{
	Adder a;
	int choice,i,j;
	int num1,num2;
	int arr1[3],arr2[3],sz1=3;
	int mat1[3][3],mat2[3][3],sz2=3;
	while(choice!=4)
	{
		cout<<"1.Add 2 numbers \n";
		cout<<"2.Add 2 Arrays \n";
		cout<<"3.Add 2 matrices \n";
		cout<<"4.Exit \n";
		cout<<"Enter your choice  \n";
		cin>>choice;
		switch(choice)
		{
			case 1:cout<<"Enter 2 numbers \n";
					cin>>num1>>num2;
					a.add(num1,num2);
					break;
			case 2:cout<<"Enter 1st Array elements \n";
			for ( i = 0; i < sz1; ++i)
			{
				cin>>arr1[i];
				
			}
			cout<<"Enter 2nd Array elements \n";
			for ( i = 0; i < sz1; ++i)
			{
				cin>>arr2[i];
				
			}
			a.add(arr1,arr2,sz1);
			break;
			case 3:cout<<"Enter 1st Matrix elements \n";
					for ( i = 0; i < sz1; ++i)
					{
						for (j = 0; j < sz2; ++j)
						{
							cin>>mat1[i][j];
						}
					}
					cout<<"Enter 2nd Matrix elements \n";
					for ( i = 0; i < sz1; ++i)
					{
						for (j = 0; j < sz2; ++j)
						{
							cin>>mat2[i][j];
						}
					}
					a.add(mat1,mat2,sz1,sz2);
					
		}
	}
	return 0; 
}