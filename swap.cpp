#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
	cout<<"A : "<<a<<endl<<"B : "<<b<<endl;
}

int main()
{
	int x,y;
	cout<<"enter the value of x and y"<<endl;
cin>>x;
cin>>y;

	swap(x,y);
	cout<<"X : "<<x<<endl<<"Y : "<<y<<endl;
	return 0;
}