#include <iostream>
#include <fstream> 
#include <stdlib.h> 
using namespace std;

struct dets
{
	char name[20];
	char email[20];
	char no[10];
};

int main()
{
	char choice;
	int count=0,flag,swchoice,num;
	struct dets d;
	int record;

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
		ifstream in("Details.txt",ios::in|ios::binary);
					if(!in)
					{
						cout<<"Error in opening the file";
					}
		while(swchoice!=4)
		{
			cout<<"\n";
		cout<<"1.Search via record number \n";
		cout<<"2.Search via mobile number \n";
		cout<<"3.Display All \n";
		cout<<"4.Exit \n";
		cout<<"Enter your choice \n";
		cin>>swchoice;
		num=count;
		switch(swchoice)
			{
			case 1:cout<<"Enter the record number to be searched \n";
					cin>>record;
					if(record>num)
					{
						cout<<"Invalid record number \n";
						break;
					}
					while(num!=0)
					{
						if(num==record)
						{
						in.read((char*)&d,sizeof(struct dets));
						cout<<"Your name is "<<d.name<<" \n";
						cout<<"Your email is "<<d.email<<" \n";
						cout<<"Your no is "<<d.no<<" \n";
						}
						num--;
					}
			break;

			case 2:cout<<"Enter the mobile number to be searched";
					cin>>record;
					flag=0;
					while(num!=0)
					{
						in.read((char*)&d,sizeof(struct dets));
						if(atoi(d.no)==record)
						{
						cout<<"Your name is "<<d.name<<" \n";
						cout<<"Your email is "<<d.email<<" \n";
						cout<<"Your no is "<<d.no<<" \n";
						flag=1;
						break;
						}
						num--;
					}
					if(flag==0)
					{
						cout<<"The mobile numebr is not found \n";
					}

			break;

			case 3:while(num!=0)
					{
						in.read((char*)&d,sizeof(struct dets));
						cout<<"Your name is "<<d.name<<" \n";
						cout<<"Your email is "<<d.email<<" \n";
						cout<<"Your no is "<<d.no<<" \n";
						num--;
					}
			break;

			case 4:
			break;

			}
		}

	
}