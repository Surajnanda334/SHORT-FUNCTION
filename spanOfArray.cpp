#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int max,min,n;
    system("cls");
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i=0; i<n; i++) 
    {
        cin >> arr[i];
    }
    min=arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    max=arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    int span=max-min;
    cout << "max: "<< max <<endl<< "min: "<< min<<endl;
    cout<<"The span of entered array is "<<span;
    getch();
    system ("cls");
    return 0;


}