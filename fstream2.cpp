#include <iostream>
#include <fstream> 
using namespace std;
int main(int argc, char const *argv[])	
{
	int a=0;
	char ch;
	if(argc==2)
	{
		ofstream o(argv[1],ios::out|ios::binary);
		if(!o)
		{
			cout<<"Cannot open file";
			return 1;
		}
		while(a!=255)
		{
			ch=a;
			o<<ch;
			a++;
		}
		o.close();
		return 0;

	}
}
