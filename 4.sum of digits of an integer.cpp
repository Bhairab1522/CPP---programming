#include <iostream>
using namespace std;
int main()
{
    int n, digit, sum = 0;
    cout << "Enter an integer: ";
    cin >> n;
    while (n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    cout << "Sum of digits = " << sum;
    return 0;
}