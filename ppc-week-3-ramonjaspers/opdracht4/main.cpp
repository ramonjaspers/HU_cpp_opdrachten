//opdracht 4
#include <iostream>
#include <vector>
#include <string>
#include <bitset>

using namespace std;

char reverse(char ch) {
    char result = (ch & 1);
    for (int i = 0; i < 7; i++) {
        result <<= 1;
        ch >>= 1;
        result |= (ch & 1);
    }
    return result;
}


int main() {
    char resultaat;
    char input;
    cout << "Geef een character:";
    cin >> input;
    cout << bitset<8>(input) << endl;
    resultaat = reverse(input);
    cout << "Resultaat: " << bitset<8>(resultaat);
}

/*Antwoord:
De functie reversed the bits dus bv 00110010 -> 01001100
*/