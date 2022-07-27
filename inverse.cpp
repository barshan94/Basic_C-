#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number : ";
    int n;
    cin>>n;
    int reverse=0;
    while(n>0)
    {
        int last_number=(n%10);
        reverse=reverse*10 + last_number;
        n=(n/10);

    }
    cout<<reverse;

return 0;
}
