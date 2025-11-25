// Print Fibonacci series up to n terms.

#include <iostream>
using namespace std;

void fibo(int n)
{

    int a = 0;
    int b = 1;

    if (n >= 1)
        cout << a << " ";
    if (n >= 2)
        cout << b << " ";

    for (int i = 3; i <= n; i++)
    {
        int temp = a + b;
        cout << temp << " ";
        a = b;
        b = temp;
    }
}

int main()
{

    int n;
    cin >> n;
    fibo(n);

    return 0;
}
