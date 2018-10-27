// opdracht3

#include <iostream>

using namespace std;

int n = 0;

int findGCD(int a, int b) {
    n++;
    if (a == b) {
        return a;
    } else if (a > b) {
        return findGCD(a - b, b);
    } else {
        return findGCD(a, b - a);
    }
}

int main() {
    cout << findGCD(900, 280) << endl;
    cout << n;
};
//Hoe vaak wordt de onderstaande code uitgevoerd met a=900 en b=280?
/*10 keer
 *
 */

