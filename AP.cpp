#include<iostream>

using namespace std;

int main()
{
	/* code */
	int a=5, n , d=2 , sum=0 , nth=0 ;
	cout<<"enter the n: "<< endl ;
	cin>>n;

	for (int i = 1;i<=n;i++)
	{
		/* code */
		nth=a +((i-1)*d);
		// cout<<"Term "<< i <<" ="<<nth<<endl;
		cout<<nth<<endl
		sum = sum + nth;
	} 

	cout<< "sum : "<<sum<<endl;


	return 0;
}