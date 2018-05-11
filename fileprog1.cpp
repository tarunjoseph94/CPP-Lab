#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])	
{
	
	FILE *fp;

	if(argc==2)
	{
		fp=fopen(argv[1],"r");
		if(fp!=NULL)
		{
			cout<<"File opened";
		}
		else
		{
			cout<<"File not opened";
		}

	}
}
