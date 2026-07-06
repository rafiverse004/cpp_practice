#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    void show()
    {
        cout << name << endl;
        cout << age << endl;
    }
};

int main()
{
    Student s1("Rafik", 21);

    s1.show();

    return 0;
}