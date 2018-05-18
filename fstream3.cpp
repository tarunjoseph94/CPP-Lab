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
	struct dets d;
	cout<<"Enter your name \n";
	cin>>d.name;
	cout<<"Enter your email \n";
	cin>>d.email;
	cout<<"Enter your no \n";
	cin>>d.no;
	
	ofstream out("Details",ios::out|ios::binary);
	if(!out)
	{
		cout<<"Error in opening the file";
	}
	out.write((char*)&d,sizeof(struct dets));
	out.close();

	ifstream in("Details",ios::in|ios::binary);
	if(!in)
	{
		cout<<"Error in opening the file";
	}
	in.read((char*)&d,sizeof(struct dets));
	cout<<"Your name is"<<d.name<<" \n";
	cout<<"Your email is"<<d.email<<" \n";
	cout<<"Your no is"<<d.no<<" \n";

	
}