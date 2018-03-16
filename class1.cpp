#include <iostream>
using namespace std;
	
	class smallobj //Class name
	{
	private:
		int somedata; //a varibale of private
	public:
		void setdata(int d) //inline function
		{
			somedata=d;
		}
		void showdata()
		{
			cout<<"Data is "<<somedata<<"\n";
		}
		 smallobj() //Constructor
		 {
		 	int i;
		 	i++;
		 	cout<<"This is the "<<i<<" object \n";
		 	
		 }
		
		
	};
int main()
{
smallobj s1,s2,s3,s4,s5;
s1.setdata(1066);
s2.setdata(1766);
s1.showdata();
s2.showdata();
return 0;
}