#include<iostream>
using namespace std;

int main()
{
	int n;
	bool isprime=true;
	cout<<"enter an integer number :";
	cin>>n;
	if(n==0 || n==1)  
	{
	    isprime=false;
	}
	else
	{
	  	for(int i=2;i<=n/2;i++) // i ke 2 theke suru kore ordhek obde chalabo, devide hoar hole hoie jabe r na hole er pore rrrrr hobe na.
	    {
		    if (n%i==0)   // example= 8%4==0, tahle rr prime holo na, kintu 5%(5/2)= 5%2 !=0, eta prime .
		    {
			    isprime=false; 
		    }
	    }
	
	}
	
	if(isprime) //innitally it's true
	    cout<<"a prime number";
    else
        cout<<"is not a prime number";
    
    
	return 0;
}

