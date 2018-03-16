
#include <iostream>
using namespace std;
	
	class strctObj //Class name
	{
	private:
	
	public:
	typedef struct 
		{
			int radius;
		}circle;
		circle c1;
		float area()
		{
			float a;
			a=3.14*(c1.radius*c1.radius);
			return a;
		}
	strctObj() //Constructor
		 {
		 	
		 	cout<<"Enter the radius";
		 	cin>>c1.radius;
		 	
		 }
		
		
	};
int main()
{
	strctObj s1;
	float a;
	a=s1.area();
	cout<<"area is "<<a<<"\n";
	return 0;
}