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
void subarray(int arr[], int n)
{
for (int i = 0; i < n; i++)
{
    for (int j = i; j < n; j++)
    {
        for (int k = i; k <= j; k++)
        {
            cout<<arr[k]<<" ";
        }
        
    }
    cout<<endl;
    
}
}

void msubarray(int arr[], int n)
{
        
    int maxsum=INT_MIN;
for (int i = 0; i < n; i++)
{


    for (int j = i; j < n; j++)
    {
        int sum=0;
        for (int k = i; k <= j; k++)
        {
            
          int z=sum+=arr[k];
          cout<<z<<endl;
        }
        maxsum=max(maxsum,sum);
    }
    cout<<endl;
    
}
    cout<<maxsum;
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
    subarray(arr,n);
    msubarray(arr,n);

    


}