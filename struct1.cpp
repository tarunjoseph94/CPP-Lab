#include <iostream>
using namespace std;
typedef struct 
	{
		int seconds;
		int minutes;
		int hours;
	}timecal;
	
int  main()
{
	timecal t1;
	int cal;
	cout<<"Enter the hours \n";
	cin>>t1.hours;
	cout<<"Enter the minutes \n";
	cin>>t1.minutes;
	cout<<"Enter the seconds \n";
	cin>>t1.seconds;
	cal=(((t1.hours*60)+t1.minutes)*60)+t1.seconds;
	
	cout<<"Total number of seconds is "<<cal<<"\n";
	return 0;
}