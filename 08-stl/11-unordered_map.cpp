#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, string> m;

    m[1] = "A";
    m[2] = "B";

    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}