#include<iostream>
using namespace std;
int check(int n)
{
 /*   int result=0;
    for(int i=1; i<=n; i++)
    {
        result+=i;

    }
    return result;*/

    int result=0;
    result=((n*(n+1))/2);
    return result;


}
int main()

{
    cout<<"Enter number : ";
    int n;
    cin>>n;
    cout<<check(n);
}