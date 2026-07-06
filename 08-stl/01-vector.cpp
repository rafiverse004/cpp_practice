#include <iostream>
using namespace std;

class Student
{
public:
    int age;

    void setAge(int age)
    {
        this->age = age;
    }

    void show()
    {
        cout << age << endl;
    }
};

int main()
{
    Student s;

    s.setAge(21);
    s.show();

    return 0;
}