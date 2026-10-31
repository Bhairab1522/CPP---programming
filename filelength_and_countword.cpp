#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream fin("data.txt");
    string word, search;
    char ch;
    int length = 0, count = 0;
    if (!fin) {
        cout << "File not found!";
        return 0;
    }
    cout << "Enter word to search: ";
    cin >> search;

    while (fin.get(ch))
        length++;
    fin.clear();
    fin.seekg(0);
    while (fin >> word) {
        if (word == search)
            count++;
    }
    cout << "File length = " << length << endl;
    cout << search << " occurs " << count << " times." << endl;
    fin.close();
    return 0;
}