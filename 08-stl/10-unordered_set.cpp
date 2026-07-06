#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s = {1, 2, 3, 3};

    for (int x : s)
    {
        cout << x << endl;
    }

    return 0;
}