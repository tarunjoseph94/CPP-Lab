#include <iostream>
using namespace std;
template <class aType>
double aMax(aType *arr,int size)
{
	aType sum=0;

	for (int i = 0; i < size; ++i)
	{
		sum=sum+arr[i];
	}
	return sum/size;
	
}


int main()
	{
	int a[]={20,30,20,4,1};
	long b[]={1l,2l,3l,4l,5l};
	double c[]={4.50,8.63,7.52,1.21,36.5};
	cout<<"The average is "<<aMax(a,5)<<"\n";
	cout<<"The average char is "<<aMax(b,5)<<"\n";
	cout<<"The average number is "<<aMax(c,5)<<"\n";
	return 0;
	}