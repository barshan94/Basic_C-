#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {    
    int c=1;
    for (int i = n; i > 0; i--)
    {
        c*=i;
    }

    return c;
    
    }
}
int main()
{
    cout<<"Enter the number of N and R : ";
    int n,r,result;
    cin>>n>>r;
    result=(fact(n))/(fact(r)*fact(n-r));
    cout<<result;
    return 0;
    
}