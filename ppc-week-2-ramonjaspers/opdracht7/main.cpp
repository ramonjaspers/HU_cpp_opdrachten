#include <vector>
#include <iostream>

using namespace std;


int count(const vector<int> &numbers) {
    int min = INT_MAX;
    for (int t : numbers) {
        if (min > t) {
            min = t;
        }
    }
    return min;
}

int main() {
    int waarde = 0;
    waarde = count({5, 4, 3, 2, 4, 4, 3, 1, 1});
    cout << waarde;
}