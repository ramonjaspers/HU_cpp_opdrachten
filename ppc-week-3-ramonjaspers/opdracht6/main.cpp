//opdracht 6
#include <iostream>
#include <bitset>

using namespace std;

int getBit(const char &ch, const int &n) {
    char character1 = ch;
    char mask1 = 1 << (7- n);
    cout << bitset<8> (mask1) << endl;
    cout << bitset<8> (ch) << endl;
    if (n > 7) {
        return -1;
    }

    if ((character1 & mask1) == mask1) {
        return 1;
    } else {
        return 0;
    }

}


int main() {
    int result = getBit('a', 2);
    if (result == -1) {
        cout << "Geef graag een waarde kleiner dan 8";
    } else {
        cout << result;
    }

}