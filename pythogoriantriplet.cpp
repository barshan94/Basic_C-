#include<iostream>
using namespace std;

void check(int x, int y, int z)
{
    int a;

    a=max(x,max(y,z));

    if(x==a && x*x==y*y+z*z)
    {
        cout<<"Pythogorian Triplet";
    }
   if(y==a && y*y==x*x+z*z)
    {
        cout<<"Pythogorian Triplet";
    }

   if(z==a && z*z==y*y+x*x)
    {
        cout<<"Pythogorian Triplet";
    }

    else
    {
        cout<<"Not pythogorian triplet.";
    }

}

int main()
{
    cout<<"Enter X, Y, Z : ";
    int x,y,z;
    cin>>x>>y>>z;
    check(x,y,z);
}