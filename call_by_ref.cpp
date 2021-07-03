#include<iostream>

using namespace std;

void change(int &n)// the & sign is indicates as "by reference"
{
	n=n*n;
	cout<<"value: "<<n<<endl;
}

int main()
{
	int n;
	cout<<"enter the value: "<<endl;
	cin>>n;
	change(n);
	cout<<"val in main: "<< n;


	return 0;
}


// output: 

// enter the value:
// 5
// value: 25
// val in main: 25