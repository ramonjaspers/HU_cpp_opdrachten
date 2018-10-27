// opdracht5
#include <iostream>
#include <vector>

using namespace std;


float getMax(const vector<float> &numbers, int i) {
    if (i <= 1) {
        return numbers[0];
    }
    float max = getMax(numbers, i - 1);

    if (max > numbers[i - 1]) {
        return max;
    } else {
        return numbers[i - 1];
    }

}

int main() {
    vector<float> n = {8, 7, 15, 8, 2, 8, 5};
    cout << getMax(n, n.size());
    return 0;
}

