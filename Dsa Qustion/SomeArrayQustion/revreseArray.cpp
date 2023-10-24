#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{

    int s = 0;
    int e = v.size() - 1;

    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }

    return v;
}

int main()
{

    vector<int> v;

    v.push_back(1);
    v.push_back(120);
    v.push_back(33);
    v.push_back(41);

    vector<int> ans = reverse(v);

    int n=ans.size();


    for (int i=0;i<n;i++){
        cout<<ans[i]<<"";
    }

        return 0;
}
