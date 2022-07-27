#include<iostream>
using namespace std;

//for square pattern
int main()
{
    int row,col;
    cout<<"Enter rows & collumns : ";
    cin>>row>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
                cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

