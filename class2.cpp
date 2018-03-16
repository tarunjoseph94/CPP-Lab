#include <iostream>
using namespace std;
	
	class area 
	{
		public:
		void setRadius(int r) 
		{
			somedata=r;
		}
		void showRadius()
		{
			cout<<"Radius is "<<somedata<<"\n";
		}
		 area() 
		 {
		 	int i;
		 	i++;
		 	cout<<"This is the "<<i<<" object \n";
		 	
		 }
		
		
	};
int main()
{
area s1,s2,s3,s4,s5;
s1.setdata(1066);
s2.setdata(1766);
s1.showdata();
s2.showdata();
return 0;
}