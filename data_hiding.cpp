#include <iostream>

using namespace std;

class Person
{
    // members
private:
    string name;
    int age;
    string city;

    // methods
public:
    Person()
    {
        this->name = "";
        this->age = 0;
        this->city = "Pune";
    }
    // function signature / to declare
    // Person(string name, int age, string city);

    // function definition
    Person(string name, int age, string city)
    {
        this->name = name;
        this->age = age;
        this->city = city;
    }

    int getAge()
    {
        this->changeName();
        return this->age;
    }

    void displayName()
    {
        cout << this->name;
    }

private:
    void changeName()
    {
        this->name = "hahaha";
    }
};

// to define
// Person::Person(string name, int age, string city) { }

int main()
{
    Person p1("Rug", 21, "Pune");

    cout << p1.getAge() << endl;
    p1.displayName();

    return 0;
}