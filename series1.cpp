
#include <iostream>

using namespace std;

int main()
{
   int n, s1=0, sum=0;
   cout<<"enter the number of terms: ";
   cin>>n;
   for(int i=1; i<=n; i++)
   {
         s1=s1+i;
         sum=sum+s1;
   }
   
   
   cout<<"sum is : "<<sum<< endl;
   return 0;
}
