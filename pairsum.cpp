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
/*
//bruteforce approach
bool pairsum(int arr[],int n,int key)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]+arr[j]==key)
            {
                cout<<"Indexes : "<<i<<" "<<j;
                return 1;
            }
        }
        return -1;
        
    }
    
}

*/


bool pairsum(int arr[],int n,int key)
{
    int low=0;
    int high=n-1;
    while (low<high)
    {
        if(arr[low]+arr[high]==key)
        {
            cout<<"Indexes : "<<low<<" "<<high;
            return true;
        }
        else if(arr[low]+arr[high]>key)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
    
}

int main()
{
    cout<<"Enter array size : ";
    int n,a;
    cin>>n;
    int key;
    
    int arr[n];


     cout<<"Enter ELEMENTS : ";
    input(arr,n);
    cout<<"Enter key : "<<endl;
    cin>>key;
   
    display(arr,n);
    cout<<endl;
    pairsum(arr,n,key);

}
