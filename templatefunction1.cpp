#include <iostream>
using namespace std;
template <class aType>
aType aMax(aType *arr,int size)
{
	aType large;
	large=arr[0];
	for (int i = 0; i < size; ++i)
	{
		if(arr[i]>large)
		{
			large=arr[i];
		}
	}
	return large;
	
}
int main()
	{
	int a[]={20,30,20,4,1};
	char b[]={'A','B','C','X','Q'};
	double c[]={4.50,8.63,7.52,1.21,36.5};
	cout<<"The largest number is "<<aMax(a,5)<<"\n";
	cout<<"The largest char is "<<aMax(b,5)<<"\n";
	cout<<"The largest number is "<<aMax(c,5)<<"\n";
	return 0;
	}