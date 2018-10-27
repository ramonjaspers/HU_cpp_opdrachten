// Opdracht 5
#include <iostream>
#include <vector>
#include <string>

using namespace std;


float getVecTot(const vector<float> &n) {
    float vecNumbers = 0;
    float vecGem = 0;
    for (int k = 0; k < n.size(); ++k) {
        vecNumbers += n[k];
    }
    vecGem = vecNumbers / n.size();
    return vecGem;


}

float getTot(const vector<vector<float>> &v) {
    float vecNumbers = 0;
    float vecTot = 0;
    for (int i = 0; i < v.size(); i++) {
        vecNumbers += getVecTot(v[i]);
        cout << "VECTOR "<< i <<" GEMIDDELDE: "<< getVecTot(v[i]) << endl;
    }
    vecTot = vecNumbers / v.size();
    return vecTot;
}

int main() {
    vector<vector<float>> mat = {
            {1,  2,  3,  4,  5,  6,  7,  -1, -1, 5,  -1, -1},
            {-1, 0,  -1, 0,  0,  0,  -1, -1, 0,  -1, -1},
            {-1, 0,  -1, 0,  -1, -1, -1, 0,  0,  1,  -1},
            {-1, 0,  0,  0,  0,  0,  0,  0,  -1, -1, -1},
            {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}
    };
    float average = getTot(mat);
    cout <<"Het totaal gemiddelde is: "<< average;
    return 0;
}