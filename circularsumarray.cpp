#include<iostream>
#include<climits>
using namespace std;
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
}
void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int kadane(int arr[], int n)
{
    int maxsum=INT_MIN;
    int tsum=0;
    for (int i = 0; i < n; i++)
    {
        tsum+=arr[i];
        if(tsum<0)
        {
            tsum=0;
        }
        maxsum=max(maxsum,tsum);
    }
    

    return maxsum;

    
}




int main()
{
    int nonwrapsum,wrapsum;
    int total=0;
    cout<<"Enter array size : ";
    int n,a;
    cin>>n;
    cout<<"Enter ELEMENTS : ";
    int arr[n];
    input(arr,n);
    display(arr,n);
    cout<<endl;
    nonwrapsum=kadane(arr,n);
//    cout<<nonwrapsum<<endl;

    for (int i = 0; i < n; i++)
    {
        total+=arr[i];
        arr[i]=-arr[i];

    }
    wrapsum=total+kadane(arr,n);
    //kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;
   // cout<<wrapsum;
  

    return 0;


}