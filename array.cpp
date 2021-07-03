#include<iostream>
using namespace std;

void pascal(int n)
{
	int arr[n][n];
	for (int i=0; i<n; i++)  // i is for row
	{
		for(int j=0; j<=i; j++) // j is for column
		{
			if(j==0 || j==i)  
				arr[i][j]=1;   // for the first and last element in row and column 
			else
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j]; 
/* for the middle element goto the previous row [i-1]and  select the values of j.*/
			
		}
	}

	for(int i=0; i<n; i++)  //  output
	{
		for(int j=0; j<=i; j++)
		{
			cout<<arr[i][j]<<" ";
		}
	cout<<endl;	
	}
}
int main()
{	
	pascal(5);

	return 0;
}

/*  
output
=========


1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
