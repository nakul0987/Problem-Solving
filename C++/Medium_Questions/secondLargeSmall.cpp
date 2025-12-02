#include <iostream>
using namespace std;

int main()
{

    int arr[7] = {19, 37, 52, 64, 87, 12, 94};
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (largest > arr[i] && secondLargest < arr[i])
        {
            secondLargest = arr[i];
        }

        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (smallest < arr[i] && secondSmallest > arr[i])
        {
            secondSmallest = arr[i];
        }
    }

    cout << "Second Largest: " << secondLargest << endl;
    cout << "Second Smallest: " << secondSmallest << endl;

    return 0;
}
