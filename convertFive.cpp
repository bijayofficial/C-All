
/* enter and random number and the output should be replaced with 5 in place of all 0's.*/


#include<iostream>
using namespace std;

convertFive(int n)
{
	int k,r;
	k=0;

	while(n!=0)// checks if the number is 0 or not.
	{
		r=n%10; //takes the reminder.
		if(r!=0) // checks if the reminder is 0 or not
			k=k*10+r; // place the reminder in k.
		else
			k=k*10+5;// place 5 in place of reminder 
		n=n/10; // reduce the number by 1 digit from last.
	}



	while(k!=0) //check of the number stored in k is 0 or not. And will reverse it into n.
	{
		r=k%10;
		n=n*10+r;
		k=k/10;
	}
	return n;
}

int main()
{
	int n;
	cin>>n;
	cout<<convertFive(n);

	return 0;

}