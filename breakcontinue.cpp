#include<iostream>
using namespace std;
int main()

    {
    cout<<"Enter date\n";
    int date;
    int pocketmoney=11000;
    cin>>date;
    for(int mstart=1;mstart<31;mstart++)
    {

        if(date%2==0)
        {
            continue;

        }
        if(pocketmoney<700)
        {
            break;
        }
        cout<<"Go to versity\n";
        pocketmoney=pocketmoney-700;
        cout<<pocketmoney;
        break;

    }

    return 0;
}
