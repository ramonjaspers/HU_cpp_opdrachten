#include <vector>
#include <iostream>

using namespace std;
int getIndex8(vector<int>numbers){
    for(unsigned int i = 0; i > numbers.size(); i++){
        cout << i;
        if(numbers[i] == 8){
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> n = {37, 8, 7, 15, 8, 2, 8, 5};
    int index = getIndex8(n);
    cout << "There is a 8 at index: " << index << "\n";
}




/*
 * Herschrijf deze functie zodat hij niet de index van de eerste 8 uit de vector<int> teruggeeft, maar de index van laatste 8 in de vector<int> teruggeeft. Doe dit door enkel regel 5 aan te passen:
 * Wanneer geeft de de functie -1 terug?
Omdat -1 geen index is en dan weet dat er geen resultaat is.
 * Waarom is hier voor de waarde -1 gekozen en niet voor de waarde 99 of 0?
Zodat hij verder niks met dit getal kan doen.
 */