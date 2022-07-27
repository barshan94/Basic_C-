#include<iostream>
using namespace std;
int main()
{
    //for inverse pyramid
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    cout<<endl;

    for(int i=1;i<=n;i++)
    {

    for(int j=0; j<=(n-i); j++)
        {
            cout<<"*";

        }

            cout<<endl;
    }
    return 0;
}

       /* for(int j=1; j<=i; j++) //for sojasoji
        {
            cout<<"*";

        }
*/