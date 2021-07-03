#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,max_three;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;
    cout<<"Enter third number: ";
    cin>>n3;
    if(n1>n2 && n1>n3)
        max_three=n1;
    else if(n2>n1 && n2>n3)
        max_three=n2;
    else
        max_three=n3;
    cout<<"The largest number is: "<<max_three;
    return 0;
}