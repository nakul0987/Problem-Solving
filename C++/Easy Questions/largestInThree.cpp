// Find the largest of three numbers.

#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    int biggest = a;

    if (biggest < b)
    {
        biggest = b;
    }
    if (biggest < c)
    {
        biggest = c;
    }

    cout << biggest << endl;

    return 0;
}
