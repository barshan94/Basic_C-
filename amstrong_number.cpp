#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout<<"Enter the number : ";
    int n,lastnumber;
    int amstrong=0;
    cin>>n;
    int orgn=n;

    while(n>0)
    {
       lastnumber=(n%10);
       amstrong += pow(lastnumber,3);
       n=n/10;
    }
    if(amstrong==orgn)
    {
        cout<<"Amstrong Number"<<endl;
        cout<<orgn;
    }
    else
    {
        cout<<"Not amstrong"<<endl;
        cout<<orgn;
    }
    return 0;
}
