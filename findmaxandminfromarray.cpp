#include<iostream>
#include<climits>
using namespace std;
int main()
{
    cout<<"Enter the size of array: ";
    int n,a,b;
    cin>>n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements of the array : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int Max=INT_MIN;
   int Min=INT_MAX;

    for (int i = 0; i < n; i++)
    {
         Max=max(Max,arr[i]);
         Min=min(Min,arr[i]);
         
    }
    a=Max;
    b=Min;
    cout<<"Max : "<<a<<" "<<"Min : "<<b;
    









    
}