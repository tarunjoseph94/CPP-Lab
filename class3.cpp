#include <iostream>
using namespace std;
	
	class smallobj //Class name
	{
	private:
		int somedata; 
		
	public:
		int count=0;
		void setdata(int d) //inline function
		{
			
			
			somedata=d;
		}
		void showdata()
		{
			cout<<"Data is "<<somedata<<"\n";
		 	cout<<count<<"\n";

		}
		 smallobj() //Constructor
		 {
		 	int i;
		 	i++;
		 	count++;
		 	cout<<"This is the "<<i<<" object \n";
		 	cout<<count<<" object \n";
		 }
		
		
	};
int main()
{
	smallobj s[3];
	int i,num;
	for(i=0;i<3;i++)
		{
			cout<<"Enter the data";
			cin>>num;
			s[i].setdata(num);
			
		}
	for (i = 0; i < 3; ++i)
		{
			s[i].showdata();
		}	

	return 0;
}