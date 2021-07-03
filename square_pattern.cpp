
#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<<"enter the number of rows: ";
   cin>>n;
   for(int i=1;i<=n;i++)
   {
         for(int j=1;j<=n;j++)
         {
            if((i==1) || (i==n) ||(j==1) ||(j==n))// main ligic: jokhon row r column ake thakbe tokhon sob jaigai star print hbe; r baki somai space print hobe.
                  cout<<"*";
            else
                     
                  cout<<" ";
         }
         cout<<endl;
   }
   return 0;
}