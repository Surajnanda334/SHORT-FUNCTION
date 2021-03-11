#include<iostream>

using namespace std;

void reverse(int arr[],int n,int s,int e);
void rotate(int arr[],int n,int k);

int main()
{
    int n,k;
    cout<<"Enter the length of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value of K (the point of rotation) : ";
    cin>>k;
    cout<<"The array before rotating: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    rotate(arr,n,k);
    cout<<"\nThe array after  rotating: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

void reverse(int arr[],int n,int s,int e)
{
    for (int i=s,j=e-1; i<j ;i++,j--)
    {
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
    }
}
void rotate(int arr[],int n,int k)
{
    k=k%n;
    if(k<0)
        k+=n;
    reverse(arr,n,0,n-k);
    reverse(arr,n,n-k,n);
    reverse(arr,n,0,n);
}