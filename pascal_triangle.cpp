#include<iostream>
using namespace std;
int fact(int n)
{   
    int c=1;
    for (int i = n; i > 0; i--)
    {
        c*=i;
    }

    return c;
    
}
int main()
{
    cout<<"Enter the number of N : ";
    int n,result;
    cin>>n;
        if(n==0)
    {
        return 0;
    }
    else
    {

for (int i = 0; i < n; i++)
{
    for (int j = 0; j <= i; j++)
    {
        result=(fact(i))/(fact(j)*fact(i-j));
        cout<<result<<" ";
        
    }
    cout<<endl;
}

    return 0;
    
    }
}