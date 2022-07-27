#include<iostream>
using namespace std;
int main()
{

//for 180 right handed pyramid
{
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    cout<<endl;

    for(int i=1;i<=n;i++)
    {
    for(int j=1; j<=(n-i); j++) //for sojasoji
        {
            cout<<" ";

        }

    for(int j=1; j<=i; j++) //for sojasoji
        {
            cout<<"*";

        }

            cout<<endl;
    }
    return 0;

}


}