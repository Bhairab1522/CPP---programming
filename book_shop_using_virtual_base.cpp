#include <iostream>
using namespace std;
class Media {
protected:
    char title[30], publication[30];
public:
    virtual void read() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter publication: ";
        cin >> publication;
    }
    virtual void show() {
        cout << "Title: " << title << endl;
        cout << "Publication: " << publication << endl;
    }
};
class Book : public Media {
    int pages;
public:
    void read() {
        Media::read();
        cout << "Enter pages: ";
        cin >> pages;
    }
    void show() {
        Media::show();
        cout << "Pages: " << pages << endl;
    }
};
class Tape : public Media {
    float time;
public:
    void read() {
        Media::read();
        cout << "Enter playing time: ";
        cin >> time;
    }
    void show() {
        Media::show();
        cout << "Playing time: " << time << " minutes" << endl;
    }
};
int main() {
    Media *ptr;
    Book b;
    Tape t;
    cout << "Enter book details:" << endl;
    ptr = &b;
    ptr->read();
    ptr->show();
    cout << "\nEnter tape details:" << endl;
    ptr = &t;
    ptr->read();
    ptr->show();
    return 0;
}
