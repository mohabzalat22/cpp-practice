#include <iostream>

using namespace std;

class Iworkable
{
public:
    virtual void work() = 0;
};

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}
    virtual void introduce() = 0;
    void birthday()
    {
        age++;
    };
    int getAge()
    {
        return age;
    }
};

class Employee : public Person, public Iworkable
{
private:
    string jobTitle;

public:
    Employee(string n, int a, string j) : Person(n, a), jobTitle(j) {}

    void introduce()
    {
        cout << "Hi, i am " << name << ", my age is : " << age << " ,i work as " << jobTitle << ".\n";
    }

    void work()
    {
        cout << "i work as: " << jobTitle << ".\n";
    }
};

int main()
{
    Employee e("Mohab", 22, "Software developer");

    e.introduce();
    e.birthday();
    cout << "now i am " << e.getAge() << " years old" << ".\n";

    e.work();

    // polymorphism with abstract class

    Person *p = &e;
    p->introduce();

    // polymorphism with interface

    Iworkable *i = &e;
    i->work();

    return 0;
}