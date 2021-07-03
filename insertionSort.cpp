#include<iostream>
using namespace std;

void bubbleSort(int arr[],int size)
{
	int temp;
	int minIndex;
	for(int i=0; i<=size-1; i++)
	{
		for(int j= i+1; j<size; j++)
		{

			if(arr[minIndex]>arr[j])
				minIndex=j;
		}	
			temp = arr[minIndex];
			 arr[minIndex] = arr[i];
			 arr[i] = temp;
	}		
}

void printArray(int arr[], int size)
{
	for(int i=0; i<size; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
int main()
{	int arr[]= {1,6,4,7,8,3,2,5};
	int size= sizeof(arr)/sizeof(int);

	cout<<"the unsorted array is : "<<endl;
	printArray(arr,size);

	bubbleSort(arr,size);

	cout<<"the sorted array is : "<<endl;
	printArray(arr,size);



	return 0;
}