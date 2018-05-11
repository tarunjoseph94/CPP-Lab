#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])	
{
	
	FILE *fr,*fc;
	char ch;
	if(argc==3)
	{
		fr=fopen(argv[1],"r");
		if(fr!=NULL)
		{
			cout<<"File opened";
		}
		else
		{
			cout<<"File not opened";
		}
		fc=fopen(argv[2],"w");
		while(!feof(fr))
		{
			ch=getc(fr);
			putc(ch,fc);
		}

	}
	fclose(fr);
	fclose(fc);
}
