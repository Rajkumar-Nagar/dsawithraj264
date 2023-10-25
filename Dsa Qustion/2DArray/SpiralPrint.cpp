#include <iostream>
using namespace std;

int main()
{
    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    int count = 0;
    int totalElements = 12;
    int startingColumn = 0;
    int endingColumn = 2;
    int startingRow = 0;
    int endingRow = 3;

    while (count < totalElements)
    {
        // Print starting row
        for (int i = startingColumn; i <= endingColumn && count < totalElements; i++)
        {
            cout << arr[startingRow][i] << " ";
            count++;
        }
        startingRow++;

        // Print ending column
        for (int i = startingRow; i <= endingRow && count < totalElements; i++)
        {
            cout << arr[i][endingColumn] << " ";
            count++;
        }
        endingColumn--;

        // Print ending row
        for (int i = endingColumn; i >= startingColumn && count < totalElements; i--)
        {
            cout << arr[endingRow][i] << " ";
            count++;
        }
        endingRow--;

        // Print starting column
        for (int i = endingRow; i >= startingRow && count < totalElements; i--)
        {
            cout << arr[i][startingColumn] << " ";
            count++;
        }
        startingColumn++;
    }

    return 0;
}
