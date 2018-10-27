//opdracht 1
#include <iostream>
#include <bitset>

using namespace std;

//int main() {
//    uint8_t value = 0x6b; // 01101011
//
//    uint8_t result = ~value;
//
//    cout << "value in bits: \t\t" << bitset<8>(value) << endl;
//    cout << "inverse-result in bits: " << bitset<8>(result) << endl;
//
//    //output:
//    // value in bits: 01101011
//    // inverse-result in bits: 10011011
//}

int main() {
    char mask = 0x6b;
    uint8_t b = 15;
    cout <<"1: "<<bitset<8>(b) << endl;
    b = b | (1 << 6);
    cout <<"2: "<< bitset<8>(b) << endl;
    b = ~b;
    cout <<"2: "<< bitset<8>(b) << endl;
    b = b << 1;
    cout <<"3: "<< bitset<8>(b) << endl;
    b |= 7;
    cout <<"4: "<< bitset<8>(b) << endl;
    b &= ~(1 << 1);
    cout <<"5: "<< bitset<8>(b) << endl;
    b ^= mask;
    cout <<"6: "<< bitset<8>(b) << endl;
}

/*Antwoorden:
00001111
10110000
01100000
01100111
01100101
00001110
 */