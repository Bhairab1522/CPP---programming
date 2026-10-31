#include <iostream>
using namespace std;
template <class T>
class Stack {
    T arr[5];
    int top;
public:
    Stack() {
        top = -1;
    }
    void push(T x) {
        if (top == 4)
            cout << "Stack Overflow" << endl;
        else
            arr[++top] = x;
    }
    void pop() {
        if (top == -1)
            cout << "Stack Underflow" << endl;
        else
            top--;
    }
    void display() {
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};
int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Stack elements: ";
    s.display();
    s.pop();
    cout << "After pop: ";
    s.display();
    return 0;
}
