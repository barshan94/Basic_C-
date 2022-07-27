#include<iostream>
using namespace std;
int main()
{
    cout<<"Press 1 for   FOR loop"<<endl;
    cout<<"Press 2 for   WHILE loop"<<endl;
    cout<<"Press 3 for   DO WHILE loop"<<endl;
    short int a;
    cin>>a;
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(a==1)
    {
    int sum;

    for(int i=1; i<=n; i++)
    {
        sum=sum+i;
    }

    cout<<sum;
    }
    if(a==2)
    {
        while(n>0)
        {
            cout<<"Positive number";
            cin>>n;
        }
    }
    else
    {
        do
        {
            cout<<"1st time execution";
            cin>>n;
        }
        while(n>0);
    }
    return 0;
}
