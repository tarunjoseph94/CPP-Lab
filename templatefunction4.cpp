#include <iostream>
using namespace std;
template <class typeA,class typeB>
double add(typeA a,typeB b)
{
	return a+b;
}

int main()
{
int a=5;
double b=10.5;
cout<<add(a,b)<<"\n";
cout<<add(b,a)<<"\n";
cout<<add(a,a)<<"\n";
cout<<add(b,b)<<endl;

}