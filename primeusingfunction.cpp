#include<iostream>
#include<math.h>
using namespace std;
void isprime(int a, int b)
{
   for(int num=a ; num<=b; num++)
    {
        int i;
        for(i=2; i<num; i++)
        {
            if(num%i==0)
            {
                break;
            }
        }
        if(i==num)
        {
            cout<<num<<" ";
        }
    }
}

int main()
{
    int a,b;
    cout<<"Enter range : ";
    cin>>a>>b;
    isprime(a,b);

    }
    