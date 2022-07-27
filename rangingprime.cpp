#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two ranges"<<endl;
    cin>>a>>b;
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


 return 0;
}
   /*
   cout<<"Enter number"<<endl;
   cin>>n;
   for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            cout<<"Not Prime"<<endl;
            break;
        }
        if (n==i)
        {
            cout<<"Prime";
        }
    }
}
*/



