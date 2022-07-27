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
int linearsearch(int arr[],int n,int key)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key)
        {
            return i;
          //  break;
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
    cout<<linearsearch(arr,n,key);

}