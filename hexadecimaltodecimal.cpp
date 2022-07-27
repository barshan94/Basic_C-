#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int convert(string n)
{
    int result=0;
    int a=1;
    int b=n.size();

    for (int i = b-1; i>=0; i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
        result+=a*(n[i]-'0'+0); //ekhane char value 0 diye - kore int value ana hoise
        }
        else if(n[i]>='A' && n[i]<= 'F')
        {
            result+=a*(n[i]-'A' + 10);
        }
        a*=16;

    }
    
       
    return result;
    
}
int main()
{
    cout<<"Enter number : ";
    string n;
    cin>>n;
    cout<<convert(n);
}