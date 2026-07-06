#include <iostream>
using namespace std;

void show()
{
    cout << "Hello" << endl;
}

int main()
{
    void (*funcPtr)() = show;

    funcPtr();

    return 0;
}