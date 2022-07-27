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

void insertionsort(int arr[], int n)
{
    int current,j;
    for (int i = 1; i < n; i++)
    {
        current=arr[i];
        j=i-1;

       while(arr[j]>current && j>=0)
       {
         arr[j+1]=arr[j];
         j--;
       }
        cout<<endl;
        cout<<j<<endl;
        cout<<endl;
        cout<<j+1;
        cout<<endl;
       arr[j+1]=current; //for storing the current value
       cout<<arr[j+1];
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
    insertionsort(arr,n);
    display(arr,n);


}