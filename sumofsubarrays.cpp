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
void subarray(int arr[], int n)
{
    int sum=0;
        for (int i = 0; i < n; i++)
    {
        sum=0;
        for (int j = i; j < n; j++)
        {
            //cout<<arr[j]<<endl;
            sum+=arr[j];
            cout<<sum<<endl;
            
        }
        
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
    subarray(arr,n);

    


}