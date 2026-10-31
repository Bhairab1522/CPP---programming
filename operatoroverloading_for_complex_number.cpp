#include <iostream>
using namespace std;
class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
    void operator++() {
        real++;
        imag++;
    }
    void operator--() {
        real--;
        imag--;
    }
    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex operator-(Complex c) {
        return Complex(real - c.real, imag - c.imag);
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    Complex c1(5, 3), c2(2, 1), c3;
    cout << "First complex number: ";
    c1.display();
    ++c1;
    cout << "After increment: ";
    c1.display();
    --c1;
    cout << "After decrement: ";
    c1.display();
    cout << "\nSecond complex number: ";
    c2.display();
    ++c2;
    cout << "After increment: ";
    c2.display();
    --c2;
    cout << "After decrement: ";
    c2.display();
    c3 = c1 + c2;
    cout << "\nAddition: ";
    c3.display();
    c3 = c1 - c2;
    cout << "Subtraction: ";
    c3.display();
    return 0;
}
