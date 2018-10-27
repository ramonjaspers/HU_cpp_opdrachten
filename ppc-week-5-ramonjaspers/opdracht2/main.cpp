// opdracht2
#include <iostream>
#include <vector>
#include "assert.h"

using namespace std;

int m(vector<int> numbers, int size) {
    assert(numbers.size() > 0 && size > 0);
    if (size == 1) {
        return numbers[0];
    }

    int mmm = m(numbers, size - 1);
    if (mmm < numbers[size - 1]) {
        return mmm;
    } else {
        return numbers[size - 1];
    }
}

int main() {

    vector<int> numbers = {6, 3, 7, 3, 8, 2, 34};
    int CTD = m(numbers, numbers.size());
}

/*wat doet de functie m?:*/
// als er maar 1 nummer in zit dan haal alleen het 1e nummer op.
//zo niet:
// set mmm, mmm is altijd hetzelfde als size maar dan 1 kleiner.
// als mmm kleiner is dan het size-1 dan return mmm (hij pakt dan het 1e getal)

// hij pakt altijd het laagste getal