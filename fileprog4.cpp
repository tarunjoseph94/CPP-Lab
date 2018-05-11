#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])	
{
	
	FILE *fr;
	char ch;
	if(argc==2)
	{
		fr=fopen(argv[1],"r");
		if(fr!=NULL)
		{
		
		while(!feof(fr))
		{
			ch=getc(fr);
			cout<<ch;
		}
				}
		else
		{
			cout<<"File not opened";
		}
		// fc=fopen(argv[2],"w");

	}
	fclose(fr);
	// fclose(fc);
}
