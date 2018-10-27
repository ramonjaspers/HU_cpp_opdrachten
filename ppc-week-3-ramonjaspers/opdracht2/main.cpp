//opdracht 2
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void upperAndLower(vector<string> &text) {
    string blin;
    string blyat;
    for (unsigned int i = 0; i < text.size(); i++) {
        for (unsigned int j = 0; j < text[i].size(); j++) {
            if (i % 2 == 0) {
                blin = text[i][j] |= (1 << 5);
                cout << blin;
            } else {
                blyat = text[i][j] &= ~(1 << 5);
                cout << blyat;
            }
        }
    }
}
int main(){
    vector<string> words = {"lepel", "lepel", "lepel", "flesje", "flesje"};

    upperAndLower(words);
};


/*Beschrijf in maximaal twee zinnen wat de onderstaande functie upperAndLower()
doet. Je mag aannemen in je beschrijving dat de parameter van de functie enkel
letters bevat.*/

/*Antwoord:
Om het data element wordt de text om gezet van upper naar lower (lower->Upper->Lower->Upper etc.)

*/