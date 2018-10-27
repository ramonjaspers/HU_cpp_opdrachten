#include <iostream>

using namespace std;

int main6() {
    int input;
    cout << "Hoe groot moet de pyramide worden:";
    cin >> input;
    for (int i = 0; i <= input; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = input; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}

int main() {
    int input;
    cout << "Hoe groot moet de pyramide worden:";
    cin >> input;
    int i = 0;
    int j;
    int k;
    while (i <= input) {
        j = 1;
        while (j <= i) {
            cout << "*";
            j++;
        }
        cout << "\n";
        i++;
    }
    int l = input;
    while (l >= 0) {
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

