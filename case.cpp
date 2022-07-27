#include<iostream>
using namespace std;
int main()
{
    float a,b,result;
    char op;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter an operator"<<endl;
    cin>>op;
    switch(op)
    {

case '+':

        result=a+b;
        cout<<result;
        break;

    case '-':

        result=a-b;
        cout<<result;
        break;

    case '*':

        result=a*b;
        cout<<result;
        break;

    case '/':

        result=a/b;
        cout<<result;
        break;

    }
    return 0;
}
