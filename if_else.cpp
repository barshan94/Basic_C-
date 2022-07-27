#include<iostream>
using namespace std;
int main()
{
   /* short int a=1,2,3;
    short int b=2,3,1;
    short int c=3,1,2;
*/
short int a,b,c;
cout<<"Enter the 1st value"<<endl;
cin>>a;
cout<<"Enter the 2nd value"<<endl;
cin>>b;
cout<<"Enter the 3rd value"<<endl;
cin>>c;
/*
    if(a>b)
        {
        if(a>c){
            cout<<a;
        }
                if(c>a){
            cout<<c;
        }

    }
            if(a<b){
            if(b<c){
                cout<<c;
            }
            else{
                cout<<b;
            }
        }

  */

  if(a>b && a>c)
  {
      cout<<a;

  }
    if(a>b && c>a)
  {
      cout<<c;

  }
  if(a<b && b>c)
  {
      cout<<b;
  }

cout<<endl<<endl<<endl;
  int n;
  cout<<"enter your number For checking:"<<endl;
  cin>>n;

  if(n%2==0){
    cout<<"Number is Even";
  }
  else{
    cout<<"Number is odd";
  }

    return 0;
}
