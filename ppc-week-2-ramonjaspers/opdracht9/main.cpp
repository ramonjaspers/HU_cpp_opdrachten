#include <vector>
#include <iostream>

using namespace std;

int vergelijk(const string &a, const string &b) {
    unsigned int smallestSize;
    if (a.size() < b.size()) {
        smallestSize = a.size();
    } else {
        smallestSize = b.size();
    }
    for (unsigned int i = 0; i <= smallestSize; i++) {
        if (a[i] != b[i]) {
            return i;
        }
    }
    if (a.size() == b.size()) {
        return -1;
    }
    return smallestSize;
}

int main() {
    string stringA;
    string stringB;
    cout << "Geef een string:";
    getline(cin, stringA);
    cin.sync();
    cout << endl;
    cout << "Geef nog een string:";
    getline(cin, stringB);
    int indexVerschil = vergelijk(stringA, stringB);
    cout << "Het eerste verschil zit op index: " << indexVerschil << endl;
    return 0;
}