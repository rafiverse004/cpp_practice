#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void show()
    {
        cout << name << endl;
        cout << age << endl;
    }
};

int main()
{
    Student s1;

    s1.name = "Rafik";
    s1.age = 21;

    s1.show();

    return 0;
}