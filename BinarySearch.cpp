#include<iostream>
#include<conio.h>
#include<algorithm>

using namespace std;

int Search(int arr[], int num, int low, int high);

int main()
{ 
    system("cls"); 
    int n,num,pos; 
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> num;
    sort(arr, arr+n);
    pos = Search( arr, num , 0 , n);
    if( pos == 0)
        cout << "Sorry the element is not present in the array";
    else
        cout << num <<" is found in the array at position " << pos;
    getch();
    system("cls");
    return 0;
}

int Search(int arr[], int num, int low, int high) 
{
    if (high >= low) 
    {
        int mid = low + (high - low) / 2;

    
        if (arr[mid] == num)                                      
            return mid;

    
        if (arr[mid] > num)
            return Search(arr, num, low, mid - 1);            

        else
            return Search(arr, num, mid + 1, high);        

    }
    return 0;
}