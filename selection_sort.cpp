#include<iostream>
#include<string>

using namespace std;

int main()
{
	int arr[]={5,4,1,3,2};
	int size=sizeof(arr)/sizeof(int);// as this is an integer array so size of this array containing 5 element is 5*4  and after it is devided by the size of integer.
	int minIndex;

	cout<<"unsorted array is : "<<endl;
		for(int i=0; i<size; i++)
			cout<<arr[i]<<" ";

	for (int i = 0; i < size-1; i++)	
	{
		minIndex=i;
		for(int j=i+1; j<size; j++) 
		{
			if(arr[minIndex]>arr[j])// check whether the minimum index element is greater than the next element.  
				minIndex=j;

				// swap the element . 
		int temp=arr[minIndex];
		arr[minIndex]=arr[i];
		arr[i]=temp;
			
		}
	
	}
	
	cout<<"Sorted array is : "<<endl;
		for(int i=0; i<size; i++)
			cout<<arr[i]<<" ";
	return 0;
}