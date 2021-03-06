//
// Created by suraj on 06-03-2021.
//
#include<iostream>
using namespace std;
int freq(long int x, int n)
{
    int res=0;
    while(x!=0)
    {
        if(x%10 == n)
            res++;
        x/=10;
    }
    return res;
}
int main() {
    long int x;
    int n;
    cout << "Enter a number: ";
    cin>> x;
    cout << "\nEnter the number whose frequency you want : ";
    cin>> n;
    int f = freq(x, n);
    cout << "\nFrequency of " << n << " in " << x << "is " << f;
}

