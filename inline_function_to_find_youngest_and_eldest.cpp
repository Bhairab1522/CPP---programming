#include <iostream>
using namespace std;
class Person
{
    char name[64];
    int age;
public:
    Person()
    {
        age = 0;
    }
    Person(const char n[], int a)
    {
        int i = 0;
        while (n[i] != '\0')
        {
            name[i] = n[i];
            i++;
        }
        name[i] = '\0';
        age = a;
    }
    inline int getAge()
    {
        return age;
    }
    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main()
{
    Person p[10];
    p[0] = Person("Rahul", 20);
    p[1] = Person("Amit", 25);
    p[2] = Person("Riya", 22);
    p[3] = Person("Neha", 28);
    p[4] = Person("Arjun", 24);
    p[5] = Person("Priya", 21);
    p[6] = Person("Rohan", 30);
    p[7] = Person("Ananya", 23);
    p[8] = Person("Karan", 27);
    p[9] = Person("Sneha", 26);
    int young = 0, old = 0;
    for (int i = 1; i < 10; i++)
    {
        if (p[i].getAge() < p[young].getAge())
            young = i;
        if (p[i].getAge() > p[old].getAge())
            old = i;
    }
    cout << "Youngest Person:\n";
    p[young].display();
    cout << "Eldest Person:\n";
    p[old].display();
    return 0;
}