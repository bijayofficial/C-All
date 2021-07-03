#include<iostream>
using namespace std;
int main()
{
	int n, temp,rem, sum=0;
	cout<<"enter the number: ";
	cin>>n;
	// set this in temp
	temp=n;
	
	while(n>0)
	{
	      rem=n%10;// take the reminder from backward
	      sum=(sum*10)+rem;	//attach in front 
	      n=n/10;//example: 121/10=>12/10=>1/10=>0
	}
      
	//compare the temp and sum
	if(temp==sum)
	{
	      cout<<"is palindrome";
	}
	else
	{
	      cout<<"not palindrome";
	}

	return 0;

}