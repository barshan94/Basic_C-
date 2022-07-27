#include<iostream>
using namespace std;
int convert(int n)
{
    int lastdigit=0;
    int a=1;
    int result=0;
    while (n>0)
    {
        lastdigit=n%10;
        result+=lastdigit*a;
        a*=2;
        n=n/10;
        
    }
    return result;
    

}
int main()
{
    cout<<"Enter Binary number : ";
    int n;
    cin>>n;
    cout<<convert(n);
}