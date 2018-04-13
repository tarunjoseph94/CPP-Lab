#include <iostream>
using namespace std;
class Count
{
private:
	int c=0;
public:
	
	friend void operator ++ (Count a);
	// friend void operator ++ (int,Count a);
	
};
 void operator ++ (Count a)
 {
 	a.c++;
 	cout<<a.c<<"\n";
 }
 //  void operator ++ (int,Count a)
 // {
 // 	a.c++;
 // 	cout<<a.c<<"\n";
 // }
 int main()
 {
 	Count c1;
 	 ++c1	;
 	 ++ c1;
 }