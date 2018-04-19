# include <iostream>
using namespace std;
class Count
{
private:
	 int c;
public:
	Count(int a)
	{
	c=a;
	}
	friend Count operator ++(Count);
	// friend void operator ++ (int,Count a);
	
};
 Count operator ++(Count a)
 {
  	a.c++;
 	cout<<a.c<<"\n";
 	return a.c;
 }

 //  void operator ++ (int,Count a)
 // {
 // 	a.c++;
 // 	cout<<a.c<<"\n";
 // }
 int main()
 {
 	Count c1(0);
 	 c1=++c1;
 	 ++c1;
 }



//  using namespace std; 
//  class myClass
//  { 
//  	private: 
//  		int a;
//   	public: 
//   	myClass(int x)
//   	{ 
//   		a=x; 
//   	} 
//   	bool friend operator>(myClass,myClass); 
//   	void friend operator++(myClass); }; 
//   	bool operator>(myClass b1, myClass b2)
//   	{ 
//   		return b1.a<b2.a; 
//   	} 
//   	void operator++(myClass b1)
//   	{ 
//   		b1.a++; 
//   		cout<<"Value of a:"<<b1.a<<"\n";
// 	}
// int main()
// { 
// 	myClass a(10),b(11); 
// 	++a; 
// 	a++; 
// 	cout<<"A>B"<<(a>b)<<endl; 
// } 