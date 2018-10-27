#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Hoe groot moet de pyramide worden:";
    cin >> input;
    int i = 0;
    int j;
    int k;
    int spaces;
    while (i <= input) {
        spaces = input;
        while (spaces > i) {
            cout << " ";
            spaces--;
        }
        j = 0;
        while (j < i) {
            cout << "*";
            j++;
        }
        cout << "\n";
        i++;
    }
    //count down stars with whitespace
    int l = input;
    while (l >= 0) {
        spaces = input;
        while (spaces >= l) {
            cout << " ";
            spaces--;
        }
        k = 1;
        while (k < l) {
            cout << "*";
            k++;
        }
        cout << "\n";
        l--;
    }
    return 0;
}

/*
 * Ik heb gekozen voor de "while" loop, omdat ik dit overzichtelijker vind en makkelijker aan kan aanpassen.
 */