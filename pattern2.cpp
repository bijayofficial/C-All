#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"give the number of rows:  ";
	cin>>n;

	for(int i=1,k=0; i<=n; i++,k=0)
	{
		for(int s=1; s<=(n-i); s++)  //space count
		{
			cout<<" ";
		}
		while(k != (2*i)-1) //star count
		{
			cout<<"*";
			k++;
		}
		cout<<endl;
	}
	
	return 0;
}


	/*

	this suppose to be the output.
     *
    ***
   *****
  *******   
	
	




	*/