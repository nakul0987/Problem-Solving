// Check if a number is prime or not.

#include <iostream>
#include <cmath>
using namespace std;

int checkPrime(int num)
{
    if (num <= 1)
    {
        return -1;
    }
    if (num == 2)
    {
        return 1;
    }
    for (int i = 2; i < pow(num, 0.5); i++)
    {
        if (num % i == 0)
        {
            return -1;
        }
    }
    return 1;
}

int main()
{

    int number;
    cin >> number;

    if (checkPrime(number))
    {
        cout << "Prime\n";
    }
    else
    {
        cout << "Not Prime\n";
    }

    return 0;
}
