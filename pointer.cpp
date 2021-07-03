#include<iostream>
using namespace std;

int main()
{	int x=5;
	int *p;
	p=&x;

	cout<<"address of 5 is : "<<x<<endl;
	cout<<" address of "<<x<< " is : "<<&x<<endl;
	cout<<" the address is : "<<p<<endl;



	return 0;
}