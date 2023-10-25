#include <iostream>
using namespace std;

int main()
{

    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int sum = 0;
    int largestSomeindex = 0;
    int maxi = 0;

    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }

        if (sum > maxi)
        {
            maxi = sum;
            largestSomeindex = i;
        }
    }

    cout << "sume of " << largestSomeindex << "row "
         << "is" << maxi;
    cout << endl;

    return 0;
}