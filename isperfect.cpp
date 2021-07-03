
#include <iostream>

using namespace std;

int main()
{
      int  sum=0,n;
      cout<<"enter any positive number : "<<endl;
       cin>>n;
      for (int i=1;i<=n/2;i++) //example: 28= 1+2+4+7+14; maximum range is 28/2=14
      	{
            
            if(n%i==0) 
            {
                 sum=sum+i;
            }
            
      }
      cout<<"the sum of deviser is:  "<<sum<<endl;
      if(sum==n)
            cout<<"is perfece number";
      else
            cout<<"is not a perfect number";
 
    return 0;
}
