#include <iostream>
using namespace std;
class timeclass
{
private:
	int hours;
	int minutes;
	int seconds;

public:
	void add_time(timeclass,timeclass);
	
	// void add_time(timeclass t1,timeclass t2)
	// {
	// 	hours=t1.hours+t2.hours;
	// 	minutes=t1.minutes+t2.minutes;
	// 	seconds=t1.seconds+t2.seconds;
	// 	if(seconds>59)
	// 	{	
	// 		seconds=seconds-60;
	// 		minutes++;
	// 	}
	// 	if (minutes>59)
	// 	{
	// 		minutes=minutes-60;
	// 		hours++;
	// 	}
	// }

	void show_time();
	
	// void show_time()
	// {
	// cout <<hours<<":"<<minutes<<":"<<seconds<<"\n";

	// }	

	timeclass();
	// {
	// 	hours=0;
	// 	minutes=0;
	// 	seconds=0;
	// }
	timeclass(int h,int m,int s);
	// {
	// 	hours=h;
	// 	minutes=m;
	// 	seconds=s;
	// 	while (seconds>59)
	// 	{
	// 		minutes++;
	// 		seconds=seconds-60
	// 	}
	// 	while (minutes>59)
	// 	{
	// 		hours++;
	// 		minutes=minutes-60;
	// 	}
	// }
	

	};
		timeclass::timeclass(int h,int m,int s)
	{	
		int add,rem;
		hours=h;
		minutes=m;
		seconds=s;
		if (seconds>59)
		{	
			add=(seconds/60);
			rem=(seconds%60);
			minutes=minutes+add;
			seconds=rem;
		}
		if (minutes>59)
		{
			add=(minutes/60);
			rem=(minutes%60);
			hours=hours+add;
			minutes=rem;
		}
	}
	 timeclass::timeclass()
	{
		hours=0;
		minutes=0;
		seconds=0;
	}
	void timeclass::show_time()
	{
	cout<<"Time in hh:mm:ss format \n";
	cout <<hours<<":"<<minutes<<":"<<seconds<<"\n";

	}
	void timeclass::add_time(timeclass t1,timeclass t2)
	{
		hours=t1.hours+t2.hours;
		minutes=t1.minutes+t2.minutes;
		seconds=t1.seconds+t2.seconds;
		if(seconds>59)
		{	
			seconds=seconds-60;
			minutes++;
		}
		if (minutes>59)
		{
			minutes=minutes-60;
			hours++;
		}
	}
int main()
	{
	timeclass t1(4,5,122), t2(2,4,50);
	timeclass t3;
	t1.show_time();
	t2.show_time();
	t3.show_time();
	t3.add_time(t1,t2);
	t3.show_time();
	return 0;
	}