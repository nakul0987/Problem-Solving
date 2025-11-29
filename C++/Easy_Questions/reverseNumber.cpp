// Reverse a number (e.g., 123 → 321).

#include <iostream>
using namespace std;

int main()
{

    int a;
    cin >> a;

    int rev = 0;
    while (a > 0)
    {
        int digit = a % 10;
        rev = rev * 10 + digit;
        a = a / 10;
    }

    cout << rev << endl;

    return 0;
}
