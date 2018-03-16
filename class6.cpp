
#include <iostream>
using namespace std;
	
	class strctObj //Class name
	{
	private:
	float area()
		{
			float a;
			a=3.14*(c1.radius*c1.radius);
			return a;
		}
	public:
	typedef struct 
		{
			int radius;
		}circle;
		circle c1;
		
	strctObj() //Constructor
		 {
		 	
		 	cout<<"Enter the radius";
		 	cin>>c1.radius;
			float a;
			a=area();
			cout<<"area is "<<a<<"\n";	 	
		 }
		
		
	};
int main()
{
	strctObj s1;
	
	return 0;
}