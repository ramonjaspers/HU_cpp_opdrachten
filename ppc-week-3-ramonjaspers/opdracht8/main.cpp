//opdracht 8
#include <iostream>
#include <bitset>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

void improveLoveMessage(char &message) {
    // source: http://www.cplusplus.com/reference/cstdlib/srand/
    srand(time(NULL));
    for (int j = 0; j < 3; ++j) {
        int index = (rand() % 8);
        message = message ^ (1 << index);
    }
    cout << message;
    //opdracht is void dus kan niks returnen
}

int main() {
    char input;
    cout << "Geef een character:";
    cin >> input;
    improveLoveMessage(input);

    return 0;
}
