// opdracht7
#include <iostream>
#include <vector>

using namespace std;


bool isSorted(vector<float> v, int size) {
    float curNumber = v[size - 1];
    float nextNumber = v[size - 2];
    if (size > 1) {
        return (isSorted(v, size - 1) && nextNumber <= curNumber);
    } else {
        return true;
    }
}

int main() {
    vector<float> n = {-3, -2, -1, 1};
    bool sorted = isSorted(n, n.size());
    cout << sorted;
    return 0;
}

