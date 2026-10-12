#include <iostream>
using namespace std;
class Student
{
protected:
    int roll;
    string name;
public:
    void getStudent()
    {
        cout << "Enter Roll No and Name: ";
        cin >> roll >> name;
    }
};
class Exam : public Student
{
protected:
    int m[6];
public:
    void getMarks()
    {
        cout << "Enter marks of 6 subjects: ";
        for (int i = 0; i < 6; i++)
            cin >> m[i];
    }
};
class Result : public Exam
{
    int total = 0;
public:
    void display()
    {
        for (int i = 0; i < 6; i++)
            total += m[i];
        cout << "\nRoll No: " << roll;
        cout << "\nName: " << name;
        cout << "\nTotal Marks: " << total;
        cout << "\nPercentage: " << total / 6.0 << "%";
    }
};
int main()
{
    Result r;
    r.getStudent();
    r.getMarks();
    r.display();
    return 0;
}