#include<iostream>

using namespace std;

class BinarySearch
{
	int a[100],n,item,beg,end,mid;
public:
	void getdata();
	void display();
};

void BinarySearch :: getdata()
{
	cout<<"enter the length of the array: "<<endl;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cout<<"enter the element at position "<<(i+1) <<" of the array"<<endl;
		cin>>a[i];
	}
cout<<"enter the key to find the element in the array: "<<endl;
cin>>item;
}

void BinarySearch :: display()
{
	beg =0;
	end = n-1;
	mid = (beg + end) / 2;
	while ((beg<=end)  && (a[mid] != item))
	{
		if (item < a[mid])
			end = mid - 1;
		else
			beg = mid + 1;
		mid = (beg + end) / 2;
	}
	if(a[mid] == item)
		cout<<"item found at location" <<mid + 1  <<endl;
	else
		cout<<"item doesn't exist "<<endl; 
}


int main()
{
	BinarySearch obj;
	obj.getdata();
	obj.display();
	return 0;
}