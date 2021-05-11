#include<iostream>
#include<conio.h>

using namespace std;

int main()
    {
        int n,i,j,max,m;
        system("cls");
        cout << "Enter number of outcomes in the bar Graph: ";
        cin >> n;
        int arr [n];
        cout << "Enter the values of each outcomes: ";
        for ( i = 0 ; i < n ; i++ )
            cin >> arr[i];
        max=arr[0];
        for (int i = 1; i < n; i++)
        {
            if(arr[i]>max)
                max=arr[i];
        }
        m = max;
        system("cls");
        cout << " \t^\n";
        for ( i = 0 ; i < m+1 ; i++ )
        {
            cout << m-i <<"\t|";
            for ( j = 0 ; j < n ; j++ )
            {   if ( arr[j] < max )
                    cout << "   ";
                else 
                    cout << "| |";
            }
            cout <<endl;
            max--;
        }
        cout << " \t";
        for ( i = 0 ; i < n*3+1 ; i++ )
            cout << "-";
        cout << ">";
        cout << "\n\t";
        for (i = 0 ; i < n+1 ; i++)
        {
            cout << i << "  ";
        }
        getch();
        system("cls");
        return 0;
    }