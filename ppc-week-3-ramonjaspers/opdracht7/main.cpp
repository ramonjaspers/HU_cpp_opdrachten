//opdracht 7
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<int>> getIndexes(const vector<vector<char>> &charMatrix, const char &c) {
    vector<vector<int>> vecIndex;
    for (int k = 0; k < charMatrix.size(); ++k) {
        vector<int> charIndex;
        for (int i = 0; i < charMatrix[k].size(); ++i) {
            if (charMatrix[k][i] == 'c') {
                charIndex.push_back(i);
            }
        }
        vecIndex.push_back(charIndex);
    }
    return vecIndex;
}

int main() {
    vector<vector<char>> mat = {
            {'c', 'a', 'a', 'c', 'a', 'a', 'a', 'a', 'a', 'a', 'a'},
            {'a', 'c', 'c', 'c', 'a', 'a', 'a', 'a', 'a', 'a', 'a'},
            {'a', 'c', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'},
            {'a', 'c', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'},
            {'a', 'c', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'},
    };
    vector<vector<int>> result = getIndexes(mat, 'c');
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}