#include <iostream>
using namespace std;

bool BinarySearch(int arr[], int s, int e, int key)
{

    int mid = s + (e - s) / 2;

    if (s > e)
    {
        return false;
    }

    if (arr[mid] == key)
    {
        return true;
    }

    else
    {
        if (arr[mid] < key)
        {
            BinarySearch(arr, mid + 1, e, key);
        }

        else
        {
            BinarySearch(arr, s, mid - 1, key);
        }
    }
}

int main()
{

    int arr[5] = {2, 5, 7, 16, 20};

    bool findIndex = BinarySearch(arr, 0, 4, 22);

    if (findIndex)
    {
        cout << "key is persent";
    }
    else
    {
        cout << "kay is not persent";
    }

    return 0;
}
