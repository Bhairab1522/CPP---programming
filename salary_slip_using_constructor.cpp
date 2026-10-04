#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
class Person
{
    char name[64], address[64];
    int age;
    float basic, hra, da, ta, gross;
public:
    Person(const char n[], int a, const char ad[], float b)
    {
        strcpy(name, n);
        age = a;
        strcpy(address, ad);
        basic = b;
        hra = basic * 0.20;
        da = basic * 0.10;
        ta = basic * 0.05;
        gross = basic + hra + da + ta;
    }
    void display()
    {
        cout << "\n--- Salary Slip ---\n";
        cout << "Name    : " << name << endl;
        cout << "Age     : " << age << endl;
        cout << "Address : " << address << endl;
        cout << fixed << setprecision(2);
        cout << "Basic   : " << basic << endl;
        cout << "HRA     : " << hra << endl;
        cout << "DA      : " << da << endl;
        cout << "TA      : " << ta << endl;
        cout << "Gross   : " << gross << endl;
    }
};
int main()
{
    Person p[10] =
    {
        Person("Rahul", 20, "Kolkata", 30000),
        Person("Amit", 25, "Delhi", 35000),
        Person("Riya", 22, "Mumbai", 32000),
        Person("Neha", 28, "Pune", 40000),
        Person("Arjun", 24, "Chennai", 38000),
        Person("Priya", 21, "Jaipur", 30000),
        Person("Rohan", 30, "Patna", 42000),
        Person("Ananya", 23, "Delhi", 36000),
        Person("Karan", 27, "Kolkata", 45000),
        Person("Sneha", 26, "Pune", 40000)
    };
    for (int i = 0; i < 10; i++)
        p[i].display();
    return 0;
}