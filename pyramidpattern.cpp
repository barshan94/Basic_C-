#include<iostream>
using namespace std;

//pyramid
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    cout<<endl;
    for(int i=1; i<=n; i++)
    {
        int j;
        for(j=n; j>i; j--)
        {
            cout<<" ";
        }
        for(int k=1; k<=i; k++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
