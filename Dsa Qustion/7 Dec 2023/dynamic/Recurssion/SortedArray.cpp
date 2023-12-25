#include <iostream>
using namespace std;

bool checkSorted(int arr[], int size)
{

    if (size == 0)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }

    else
    {
        return checkSorted(arr + 1, size - 1);
    }
}

int main()
{

    int arr[5] = {3, 5, 6, 8, 10};

    bool sort = checkSorted(arr, 5);

    if (sort)
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted ";
    }

    return 0;
}
