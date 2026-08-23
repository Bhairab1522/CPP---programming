#include <iostream>
using namespace std;
int main()
{
    int n, original, reverse = 0, digit;
    cout << "Enter an integer: ";
    cin >> n;
    original = n;
    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if (original == reverse)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";
    return 0;
}