#include<iostream>

using namespace std;

void toh(int s, int h, int d, int &c,int n);

int main()
{
    int n,s=1,h=2,d=3,c=0;
    cin>>n;
    toh(s,h,d,c,n);
    cout<<"\nTotal number of steps :"<<c;
}

void toh(int s, int h, int d, int &c, int n)
{
    if(n==1)
    {
        cout<<"\nMoving disc "<<n<<" from tower "<<s<<" to "<<d;
        c++;
        return;
    }
    toh(s,d,h,c,n-1);
    cout<<"\nMoving disc "<<n<<" from tower "<<s<<" to "<<d;
    c++;
    toh(h,s,d,c,n-1);
    return;
}