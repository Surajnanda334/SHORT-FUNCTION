#include<iostream>

using namespace std;

void toh(int source, int helper, int destination, int &count,int n);        //Function prototype

int main()      // Main function
{
    int n,source=1,helper=2,destination=3,count=0;      //Declaring integer values for numbering the towers
    cout<<"Enter the total number of plates :";
    cin>>n;
    toh(source,helper,destination,count,n);     //Function call
    cout<<"\nTotal number of steps :"<<count;       //Displaying number of steps
}

void toh(int source, int helper, int destination, int &count, int n)
{
    if(n==1)        //When there is only one plate on source tower and all plates are transfered to helper tower
    {
        cout<<"\nMoving disc "<<n<<" from tower "<<source<<" to "<<destination;
        count++;        //Keeping track of steps
        return;
    }
    toh(source,destination,helper,count,n-1);       //This will transfer n-1 plates from source to helper
    cout<<"\nMoving disc "<<n<<" from tower "<<source<<" to "<<destination;
    count++;
    toh(helper,source,destination,count,n-1);       //Now when n-1 plates are placed on helper tower  we need to move them from helper to destination
    return;
}