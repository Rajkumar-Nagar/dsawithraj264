#include <iostream>
using namespace std;

int main()
{

    int arr[7] = {3, 0, 0, 1, 2, 0, 4};

    int nonZeeroIndex = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[nonZeeroIndex], arr[i]);
            nonZeeroIndex++;
        }
    }

    for (int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}