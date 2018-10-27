//
// Created by Ramon Jaspers on 3/11/2018.
//
#ifndef PPC_WEEK_4_RAMONJASPERS_OPDRACHT9_WINNERS_HPP
#define PPC_WEEK_4_RAMONJASPERS_OPDRACHT9_WINNERS_HPP

#include <iostream>

#include <vector>

using namespace std;


vector<float> vecSort(vector<float> v) {
    vector<float> result;
    float miniPos;
    for (int i = 0; i < v.size(); i++) {
        miniPos = i;
        for (int j = i + 1; j < v.size(); j++) {
            if (v[j] < v[miniPos]) {
                miniPos = j;
            }
        }

        float temp = v[miniPos];
        v[miniPos] = v[i];
        v[i] = temp;

        result.push_back(v[i]);
    }
    return result;
}

vector<float> top3(vector<float> scores) {
    vector<float> sorted = vecSort(scores);
    vector<float> result;
    for (int i = 0; i < sorted.size(); i++) {
    }
    result.push_back(sorted[sorted.size() - 1]);
    result.push_back(sorted[sorted.size() - 2]);
    result.push_back(sorted[sorted.size() - 3]);


    return result;
}


float second2last(vector<float> scores) {
    vector<float> sorted = vecSort(scores);
    float result;
    for (int i = 0; i < sorted.size(); i++) {
    }
    result = (sorted[sorted.size() - sorted.size()]);

    return result;

}

#endif //PPC_WEEK_4_RAMONJASPERS_OPDRACHT9_WINNERS_HPP
