#include <iostream>
using namespace std;
class B;
class A {
    int x;
public:
    void get() {
        cout << "Enter first number: ";
        cin >> x;
    }
    void display() {
        cout << "First number = " << x << endl;
    }

    friend void swap(A &, B &);
};
class B {
    int y;
public:
    void get() {
        cout << "Enter second number: ";
        cin >> y;
    }
    void display() {
        cout << "Second number = " << y << endl;
    }
    friend void swap(A &, B &);
};
void swap(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}
int main() {
    A a;
    B b;
    a.get();
    b.get();
    swap(a, b);
    cout << "After swapping:" << endl;
    a.display();
    b.display();
    return 0;
}
