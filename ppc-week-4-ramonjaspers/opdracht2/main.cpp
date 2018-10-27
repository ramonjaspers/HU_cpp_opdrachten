// Opdracht 2
//
// Created by Ramon Jaspers on 3/7/2018.
//
#include <vector>
#include <iostream>
#include <string>
#include "winners.hpp"

using namespace std;

int main() {
    vector<float> results = {5.322, 8.76, 2.12, 745, 98.1, 23.6, 87.3};
    vector<float> topDrie = top3(results);

    for (int i = 0; i < topDrie.size(); i++) {

    }

    cout << endl;
    float mole = second2last(results);

    cout << "De top 3 is: " << topDrie[0] << ", " << topDrie[1] << ", " << topDrie[2] << endl;
    cout << "De mol is: " << mole << "\n";


    return 0;
}
//
// podium plaatsen berekenen
// bepaal wie de mol is (de een-na-laatste)
