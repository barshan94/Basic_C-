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
void bubblesort(int arr[], int n)
{
    int temp=0;
    for (int i = 1; i < n; i++)     //step number/iteration
    {
        for (int j = 0; j < n-i; j++)   //checking
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }

        }
        cout<<endl;
        
    }
    
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
    bubblesort(arr,n);
    display(arr,n);


}