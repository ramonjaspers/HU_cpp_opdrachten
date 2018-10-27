#include <string>
#include <vector>
#include <iostream>

using namespace std;
struct furniture {
     int number;
     string name;
     float weight;
     float length;
     };



int main() {
    furniture furniture;
    cout << "nummer: ";
    cin >> furniture.number;
    cout << "naam: ";
    cin >> furniture.name;
    cout << "gewicht: ";
    cin >> furniture.weight;
    cout << "length: ";
    cin >> furniture.length;
    cout << furniture.name<<" heeft nummer " << furniture.number <<", weegt " << furniture.weight <<" kilo en is "<<furniture.length <<" cm.";

    return 0;

}