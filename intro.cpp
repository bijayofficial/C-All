#include<iostream>
#include<string>

using namespace std;

class Laptop
{
	string name;
	string brand;
	float price;
	string processor; 

public:

	void getdata()
	{
		cout<<" name : "<<endl;
		cin>>name;
		cout<<" brand : "<<endl;
		cin>>brand;
		cout<<" price : "<<endl;
		cin>>price;
		cout<<" processor : "<<endl;
		cin>>processor;
	}

	void  showdata()
	{
		cout<<name<<" " <<brand<<" " <<price<<" " <<processor<<endl;
	}

	void startup()
	{
		cout<<"laptop "<<name<<" has started"<<endl;
	}

	void shutdown()
	{
		cout<<"laptop "<<name<<" is shutting down."<<endl;
	}
};
int main()
{
	Laptop laptop1;
	laptop1.getdata();
	laptop1.showdata();
	laptop1.startup();
	laptop1.shutdown();

	return 0;
}
