#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    bool flags=1;
    cout<<"Enter your number : ";
    cin>>n;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            flags=0;
            break;
        }
        if(n==i)
        {
            flags=1;
        }

    }
    if(flags==1)
    {
        cout<<"Prime number";
    }
    if(flags==0)
    {
        cout<<"Not prime";
    }


}
