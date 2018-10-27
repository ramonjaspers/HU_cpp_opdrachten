#include <iostream>
#include <bitset>

using namespace std;

int shift(char &ch, int &n) {
    unsigned short short1 = ch;
    bitset<8> bitset1{short1};
    cout << bitset1 << endl;
    if (n > 0) {
        //to the left
        unsigned short short2 = short1 << n;
        unsigned short mask2 = short1 >> 8 - n;
        //compare with or gate
        uint8_t result2 = short2 | mask2;
        cout << bitset<8>(result2);
    } else {
// to the right
        unsigned short short3 = short1 >> n;
        unsigned short mask3 = short1 << n - 8;
        uint8_t result3 = short3 | mask3;
        cout << bitset<8>(result3) << endl;
        return 0;
    }
}

int main() {
    char character;
    int position;

    cout << "Geef een character op:";
    cin >> character;
    cout << "Geef een bit positie:";
    cin >> position;
    shift(character, position);
};