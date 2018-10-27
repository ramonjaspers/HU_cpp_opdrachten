//
// Created by Ramon Jaspers on 2/11/2018.
//

#include <iostream>

using namespace std;

int main() {
    string capitalizedVertaalZin;
    string vertaalZin;
    cout << ("Geef een string om te vertalen: ");
    while (getline(cin, vertaalZin)) {
        cout << "\n";
        cout << "1337-speak:" << "\n";
        for (int i = 0; i <vertaalZin.size(); i++) {
            char & c = vertaalZin[i];
            if (c == 'e') {
                c = '3';
            }if (c == 'l') {
                c = '1';
            }if (c == 't') {
                c = '7';
            }if (c == 'o') {
                c = '0';
            }

            toupper(c);
// Voor debugging readability.
//            cout << "\n";
        }
        cout << vertaalZin;
    }

    return 0;
}
