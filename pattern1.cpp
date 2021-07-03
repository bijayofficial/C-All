
#include <iostream>

using namespace std;

int main()
{
    int n,k=1;
    cout<< "enter the number of rows: ";
    cin>>n;
    for (int i=1; i<=n; i++) {
        for(int j=1;j<=i; j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }

    return 0;
}

/*output:


enter the number of rows:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/