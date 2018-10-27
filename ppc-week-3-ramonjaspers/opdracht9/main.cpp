//opdracht 9
#include <iostream>
#include <vector>
#include <string>

using namespace std;


float getVecTot(const vector<float> &n) {
    float vecNumbers = 0;
    float vecTot = 0;
    for (int k = 0; k < n.size(); ++k) {
        vecNumbers += n[k];
    }
    vecTot = vecNumbers;
    return vecTot;


}

vector<float> getTot(const vector<vector<float>> &v) {
    vector<float> vecNumbers;
    for (int i = 0; i < v.size(); i++) {
        vecNumbers.push_back(getVecTot(v[i]));
    }
    return vecNumbers;
}


int main() {
    vector<vector<float>> mat = {
                {21, 2, 44, 55, 34, 66},
                {21, 2, 44, 55, 34, 67},
                {21, 2, 44, 55, 34, 68},
                {21, 2, 44, 55, 34, 69},
    };
    vector<float> total = getTot(mat);
    return 0;
}