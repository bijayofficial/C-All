#include<iostream>
#include<string>
using namespace std;

class Func

{
public:
	void run()
	{
		cout<<"void running. "<<endl;
	}
	void run(int a)
	{
		cout<<"void is int: "<<a<<endl;
	}
	void run(int a, int b=10)
	{
		cout<<"a= "<<a<<endl<<" b =" <<b<<endl;
	}
};


int main()

{
	Func obj;
	obj.run();
	obj.run(15);
	return 0;
}