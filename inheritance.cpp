#include<iostream>
using namespace std;

class GamingSystem{

public: 
	GamingSystem()
	{
	cout<<" gaming system"<<endl;  // second call
		
	}
};


class Laptop
{

public: 
	Laptop()
	{
		cout<<"Laptop constructor"<<endl;   // first call	}
	string name;
	float price;
};

class GamingLaptop: public Laptop :public GamingSystem
// the single line will call all the classes and constructors will automatically be called.

{
public:
	GamingLaptop()
	{
		cout<<" gaming laptop"<<endl;   // final call
	}
	string name;
	int vram;
};

int main()
{	GamingLaptop lap1;


	return 0;
}