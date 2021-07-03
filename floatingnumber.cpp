#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	//code
	int t;
	cout<<"the number of testcases is: ";
	cin>>t;
	
	while(t!=0)
	{
	    float a,b;
	    cin>>a>>b;
	    cout<<fixed;
	    cout<<setprecision(1);
	    cout<<a<<endl;
	    cout<<fixed;
	    cout<<setprecision(2);
	    cout<<b<<endl;
	    
	    t=0;
	}
	
	return 0;
}
