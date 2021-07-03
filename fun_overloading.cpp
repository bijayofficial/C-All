#include<iostream>
using namespace std;

void run()
{
	cout<<" running"<<endl;
}

void run(int a)
{
	cout<<" run with int "<<a<< " is running"<<endl;
}

void run(int a, int b)
{
	cout<<" run with int "<<a<<" " <<b<< " is running"<<endl;
}

void run(char a)
{
	cin>>a;
	cout<<" char : "<<a<<endl;

}

int main()
{ 
	run();
	run(5);
	return 0;
}