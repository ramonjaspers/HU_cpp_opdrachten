//
// Created by Ramon Jaspers on 3/3/2018.
//
//opdracht 11
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> nonTransposed(vector<vector<int>> &n) {
    vector<vector<int>> vectors;
    for (int i = 0; i < n.size(); ++i) {
        vector<int> number;
        for (int j = 0; j < n[i].size(); ++j) {
            number.push_back(n[i][j]);
        }
        vectors.push_back(number);

    }
    return vectors;
}

void transposed(vector<vector<int>> &n) {
    for (int j = n.size() - 1; j > 0; j--) {
        for (int i = j; i < n[j].size(); ++i) {
            int swapped = n[j][i];
            n[j][i] = n[i][j];
            n[i][j] = swapped;
        }
    }

    int i = n.size()-1;
    for (int j = n.size() - 1; j >= 1; --j) {
        int tmp = n[i][j];
        n[i][j] = n[j][i];
        n[j][i] = tmp;
    }
}

int main() {
    vector<vector<int>> team = {
            {1,  2,  3},
            {4,  5,  6},
            {7,  8,  9}
    };
    cout << "Non-Transposed:" << endl;
    vector<vector<int>> RNT = nonTransposed(team);
    for (unsigned int i = 0; i < RNT.size(); i++) {
        for (unsigned int j = 0; j < RNT[i].size(); j++) {
            cout << RNT[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Transposed:" << endl;
    transposed(team);
    for (unsigned int i = 0; i < team.size(); i++) {
        for (unsigned int j = 0; j < team[i].size(); j++) {
            cout << team[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
