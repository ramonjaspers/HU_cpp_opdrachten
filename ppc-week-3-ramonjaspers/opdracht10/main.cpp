//opdracht 10
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<int>> getAmount(const vector<vector<int>> &charMatrix, const int &c) {
    int j = 0;
    int getC = c;
    vector<vector<int>> vecIndex;
    for (const auto &inner : charMatrix) {
        int i = 0;
        vector<int> charIndex;
        for (const auto &item : inner) {
            if (item == getC) {
                i++;
            }
        }
        charIndex.push_back(i);
        vecIndex.push_back(charIndex);
    }
    return vecIndex;
}


int main() {
    vector<vector<int>> mat = {
            {2,  2, 44, 2,  34, 66},
            {21, 2, 2, 55, 34, 67},
            {21, 2, 44, 55, 34, 68, 2},
            {21, 2, 44, 55, 34, 69},
    };
    vector<vector<int>> result = getAmount(mat, 2);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << "keer";
        }
        cout << endl;
    };
    return 0;
}
