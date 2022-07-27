#include<iostream>
using namespace std;
int main()

//star pattern
{
        cout<<"Enter thr number : ";
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=(n-i); j>=1; j--)
        {
            cout<<"  ";
        }

            for(int l=i;l>1; l--)
        {
            cout<<"*"<<" ";
        }

        for(int k=1; k<=i; k++)
        {
            cout<<"*"<<" ";
        }

        cout<<endl;

    }



    for(int i=n; i>=1; i--)
    {
        for(int j=(n-i); j>=1; j--)
        {
            cout<<"  ";
        }

            for(int l=i;l>1; l--)
        {
            cout<<"*"<<" ";
        }

        for(int k=1; k<=i; k++)
        {
            cout<<"*"<<" ";
        }

        cout<<endl;

    }

    return 0;

}
