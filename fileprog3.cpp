#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])	
{
	
	FILE *fr,*fw;
	char name[20],usn[10];

	if(argc==2)
	{
		fw=fopen(argv[1],"w");
		cout<<"Enter the Name \n";
		cin>>name;
		cout<<"Enter the Usn \n";
		cin>>usn;
		fprintf(fw,"%s %s",name,usn);		
		fclose(fw);

		fr=fopen(argv[1],"r");
		fscanf(fr,"%s",usn);
		fscanf(fr,"%s",name);
		cout<<"\n USN "<<usn;
		cout<<"\n Name "<<name;
		
		fclose(fr);
	}
return 0;
}
