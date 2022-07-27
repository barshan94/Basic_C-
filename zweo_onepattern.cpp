#include<iostream>
using namespace std;
int main()
//0-1 pattern

{
    int n;
    cout<<"Enter nelement : ";
    cin>>n;
    cout<<endl;
    for(int i=1; i<=n; i++)
    {
        int a;
        for(int j=1; j<=i; j++)
        {
            a=i+j;
            if(a%2==0)
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"0 ";
            }

        }
            cout<<endl;
    }

    return 0;
}
