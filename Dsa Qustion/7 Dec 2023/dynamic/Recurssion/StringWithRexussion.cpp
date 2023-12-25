
#include <iostream>
using namespace std;

void ReverseString(string &Name, int i, int j)
{

    // if (i > j)
    // {
    //     return;
    // }


    if (i < j)
    {
        swap(Name[i], Name[j]);
        ReverseString(Name, i + 1, j - 1);
    }
}

int main()
{
    string Name = "abcdef";

    cout << "Original String: " << Name << endl;

    ReverseString(Name, 0, Name.length() - 1);

    cout << "Reversed String: " << Name << endl;

    return 0;
}
