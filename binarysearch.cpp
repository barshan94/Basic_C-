#include<iostream>
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
int binarysearch(int arr[],int n,int key)
{
    int a=0;
    int b=n;
    int mid=0;
    while(a<=b) //starting index can not be largerr than ending
    {
        mid=(a+b)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]>key)
        {
            b=mid-1;
        }
        if(arr[mid]<key)
        {
            a=mid+1;
        }

    }
    return -1;

}
int main()
{
    cout<<"Enter array size : ";
    int n,key,a;
    cin>>n;
    cout<<"Enter ELEMENTS : ";
    int arr[n];
    input(arr,n);
    display(arr,n);
    cout<<endl;
    cout<<"Enter element to be searched : ";
    cin>>key;
    cout<<binarysearch(arr,n,key);

}