#include<iostream>
using namespace std;
void fib(int n)
{
    int a,b,c;
    b=1;
    a=0;
    for (int i = 1; i <= n; i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
           
    }

     
}
int main()
{
    cout<<"Enter the number : ";
    int n;
    cin>>n;
    fib(n);

}