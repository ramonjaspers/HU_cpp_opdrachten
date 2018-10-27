// opdracht6
#include <iostream>
#include <vector>

using namespace std;


float getGem(const vector<float> &numbers, int size) {
    int curNumber = numbers[size - 1];
    if (size != 0) {
        return (getGem(numbers, size - 1) * (size - 1) + curNumber) / size;
    } else
        return 0;
}


int main() {
    vector<float> n = {37, 8, 7, 15, 8, 2, 8, 5};
    //volgens docent is n.size beter om te gebruiken dan vanaf 0 beginnen (zie vorige opgave).
    cout << getGem(n, n.size());
    return 0;
}

