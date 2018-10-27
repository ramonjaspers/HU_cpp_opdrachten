#include <vector>

using namespace std;

vector<int> positive1(vector<int> numbers) {
    for (unsigned int i = 0; i < numbers.size(); i++) {
        if (numbers[i] < 0) {
            numbers[i] *= -1;
        }
    }
    return numbers;
}

void positive2(vector<int> &numbers) {
    for (unsigned int i = 0; i < numbers.size(); i++) {
        if (numbers[i] < 0) {
            numbers[i] *= -1;
        }
    }
}

vector<int> positive3(const vector<int> &numbers) {
    vector<int> newNumbers = numbers;

    for (unsigned int i = 0; i < newNumbers.size(); i++) {
        if (newNumbers[i] < 0) {
            newNumbers[i] *= -1;
        }
    }
    return newNumbers;
}
/*
A: Beschrijf in één zin wat de functie positive1() doet.
-Maakt alle negatieve nummers de gegeven vector positief
B: De functie positive2() heeft geen return-statement. Hoe geeft de functie zijn resultaat terug?
-Door de variablen te veranderen.
C:De drie functies vervullen alle drie ongeveer de zelfde taak. Ze verschillen voornamelijk in hun functiedefinitie. Noem van elke functie een voordeel van de functiedefinitie.
-positive1: Returnt de lijst en veranderd de vector tegelijkertijd
-positive2: Heeft geen returnfuncie.
-positive3: Kan de originele variablen niet veranderen dus levert een nieuwe vector.
D: Welke functie heeft in dit geval je voorkeur? Geef minimaal één argument.
-De eerste vector, omdat ik die het meest overzichtelijk vind en beste begrijp qua opbouw logica.
 */

