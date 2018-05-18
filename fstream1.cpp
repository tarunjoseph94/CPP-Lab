#include <iostream>
#include <fstream> 
using namespace std;
int main(int argc, char const *argv[])	
{
	
	char ch;
	if(argc==2)
	{
		ifstream in(argv[1],ios::in|ios::binary);
		if(!in)
		{
			cout<<"Cannot open file";
			return 1;
		}
		while(in)
		{
			in.get(ch);
			if(in)
			cout<<ch;
		}
		return 0;

	}
}
