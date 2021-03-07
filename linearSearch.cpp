#include<iostream>
#include<conio.h>
 
using namespace std;

void Search(int a[] , int n , int num);
 
int main()
{
	system("cls");
	int a[20],n,num;
	cout << "Enter the number of elements you want to insert : ";
	cin >> n;
	cout << "\nEnter elements of the array\n";
	
	for (int i = 0; i < n ; ++i )
		cin >> a[i];
	
	cout << "\nEnter element to search:";
	cin>>num;
	Search(a,n,num);
	return 0;
}
void Search(int a[] ,int n, int num)
{
	int f=0,i;
	for( i = 0 ; i < n ; ++i)
	{
		if(a[i] == num)
		{
			f = 1;
			break;
		}
	}
	system("cls");
	if(f)
		cout<<"\nElement is found at position "<<i+1;
	else
		cout<<"\nElement not found";
	getch();
	system("cls");

}