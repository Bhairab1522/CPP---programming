
#include <iostream>
using namespace std;
class Student {
    int roll;
    float marks;
public:
    void getData(int roll, float marks) {
        this->roll = roll;
        this->marks = marks;
    }
    void display() {
        cout << "Roll number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    Student s;
    s.getData(101, 85.5);
    s.display();
    return 0;
}
