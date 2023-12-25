#include <iostream>
using namespace std;

void sayDigit(int n, string arr[])
{
    if (n == 0)
    {
        return;
    }

    int digit = n % 10;
    n = n / 10;

    sayDigit(n, arr);

    cout << arr[digit];

    // Print a space only if it's not the last digit
    if (n != 0)
    {
        cout << " ";
    }
}

int main()
{
    int n;
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    cout << "Enter the digit: ";
    cin >> n;
    sayDigit(n, arr);
    return 0;
}
