#include <iostream>
#include <fstream> 
using namespace std;

struct dets
{
	char name[20];
	char email[20];
	long int no;
};

int main()
{
	char choice;
	int count=0;
	struct dets d;
		ofstream out("details.txt",ios::out|ios::binary);
		if(!out)
		{
			cout<<"Error in opening the file";
		}
	do{
		cout<<"Enter your name \n";
		cin>>d.name;
		cout<<"Enter your email \n";
		cin>>d.email;
		cout<<"Enter your no \n";
		cin>>d.no;
		
		out.write((char*)&d,sizeof(struct dets));
		cout<<"do you wish to continue \n";
		cout<<"enter y for yes \n";
		cin>>choice;
		count++;
	}while(choice=='y'||choice=='Y');
		out.close();
	
	ifstream in("details.txt",ios::in|ios::binary);
	if(!in)
	{
		cout<<"Error in opening the file";
	}
	while(count!=0)
	{
		in.read((char*)&d,sizeof(struct dets));
		cout<<"Your name is "<<d.name<<" \n";
		cout<<"Your email is "<<d.email<<" \n";
		cout<<"Your no is "<<d.no<<" \n";
		count--;
	}
	
}