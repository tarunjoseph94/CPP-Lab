#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])	
{
	
	FILE *fr;
	char ch;
	int countA,countE,countI,countO,countU;

	if(argc==2)
	{
		
		if(fr=fopen(argv[1],"r"))
		{
			while(!foef(fr))
			{
				ch=getc(fr);
				switch(ch)
				{
					case a:
					case A:countA++;
					break;
					case e:
					case E:countE++;
					break;
					case i:
					case I:countI++;
					break;
					case O:
					case o:countO++;
					break;
					case u:
					case U:countU++;
					break;
					
				}
			}
		fclose(fr);
		cout<<"No of A \n"<<
		}
	}
return 0;
}
