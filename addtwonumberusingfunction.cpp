#include<iostream>
using namespace std;
int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}

void print(int c)
{
    cout<<"Sum is : "<<c;
}

int main()
{
    cout<<"Enter two numbers : ";
   int a,b,c;
    cin>>a>>b;
    c=add(a,b);
   print(c);
    return 0;
}

