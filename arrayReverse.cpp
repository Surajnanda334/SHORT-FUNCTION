#include<iostream>

using namespace std;

void reverse(int arr[],int n);

int main()
{
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for( int i=0 ; i < n ; i++)
        cin >> arr[i];
    cout << "Array before reversing: ";
    for( int i=0 ; i < n ; i++)
        cout << arr[i];
    reverse( arr , n);
    cout <<"\nArray after reversing: ";
    for( int i=0 ; i < n ; i++)
        cout << arr[i];
    return 0;
}
void reverse(int arr[],int n)
{
    for (int i=0,j=n-1; i<n/2 ;i++,j--)
    {
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
    }
}