#include <iostream>
#include <conio.h>

using namespace std;

void conv(int num, int base);
void convh(int num);

int main()
{
    int choice;
    system("cls");
    cout << "This program will help you in converting a decimal number to any number system. \n\n";
    cout << "Enter the decimal number : ";
    int num;
    cin >> num;
    while(1)
    {
        system("cls");
        cout << "   From the option below, choose the number system to which you want to change " << num;
        cout << "\n1. BINARY (2) " << endl <<  "2. OCTAL (8)" << endl << "3. HEXA-DECIMAL (16)" << endl << "4. Exit (4) \n";
        cin >> choice;
        switch(choice)
        {
            case 2 : conv(num, 2);
                     break;
            case 8 : conv(num, 8);
                     break;
            case 16 :convh(num);
                     break;
            case 4 : cout << "Thank you for using this converter...";
                     exit(0);
            default :system("cls");
                     cout << choice << " is valid option ...\nPlease press enter to choose again";
                     getch();
        }
    }
    return 0;
}
void conv(int num, int base)
{
    system("cls");
    long long res = 0 ;
    int p = 1, n= num;
    while (num > 0)
    {
        int d = num % base;
        num /= base;
        res += d * p;
        p *= 10;
    }
    cout << n << " in base " << base << " is : " << res;
    cout << "\nPress enter to go to main menu";
    getche();
}
void convh(int num)
{
    char hex[50];
    int n = num , dig ,i=1;
    cout<< hex[0];
    while (n != 0)
    {
        dig = n % 16;
        if (dig < 10)
            hex[i++] = dig + 48;
        else
            hex[i++] = dig + 55;
        n = n / 16;
        cout<< n;
    }
    cout << num << " in base 16 is : ";
    for (int j = i-1; j > 0; j--)
        cout << hex[j];
    cout << "\nPress enter to go to main menu";
    getche();

}