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
void kadane(int arr[], int n)
{
    int maxsum=INT_MIN;
        int sum=0;
for (int i = 0; i < n; i++)
{

    sum+=arr[i];
    if(sum<0)
    {
        sum=0;
    }
    maxsum=max(maxsum,sum);
    
        
}
    cout<<maxsum<<endl;
    
}




int main()
{
    cout<<"Enter array size : ";
    int n,a;
    cin>>n;
    cout<<"Enter ELEMENTS : ";
    int arr[n];
    input(arr,n);
    display(arr,n);
    cout<<endl;
    kadane(arr,n);
  

    


}