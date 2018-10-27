#include <vector>
#include <iostream>

using namespace std;


int count(const vector<int> &numbers) {
    int getal = 0;
    double result;
    for (int t : numbers) {
            getal =+ t;
        }
    cout << getal;
    result = getal / numbers.size();
    return result;
}

int main() {
    int waarde = 0;
    waarde = count({5, 4, 3, 2, 4, 4, 3, 1, 1});
    cout << waarde;
}