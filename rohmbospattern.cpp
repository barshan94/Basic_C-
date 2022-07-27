#include<iostream>
using namespace std;
int main()

//Rombos printing
{
    int n;
    cout<<"Enter element : ";
    cin>>n;
    cout<<endl;

    for(int i=1; i<=n; i++)
    {
        for(int j=(n-1); j>i; j--)
        {
            cout<<" ";
        }


        for(int k=1; k<=n; k++)
        {
            cout<<"*";
        }

        for(int l=1; l<=(i-1); l++)
        {
            cout<<" ";
        }
        cout<<endl;
    }


    return 0;
}
