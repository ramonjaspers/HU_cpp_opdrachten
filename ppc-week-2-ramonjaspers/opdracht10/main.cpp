//
// Created by Ramon Jaspers on 2/18/2018.
//

#include <vector>
#include <iostream>
using namespace std;

float sumVectoren(const vector<float> & vecString1, const vector<float> & vecString2){
    float sum = 0;
    for(unsigned int i = 0; i < vecString1.size(); i++){
        sum += vecString1[i];
    }
    for(unsigned int i = 0; i < vecString2.size(); i++){
        sum += vecString2[i];
    }
    return sum;
}

int main(){
    vector<float> n1 = {1.4, 8.3};
    vector<float> n2 = {1.6, 8.1};
    float vectorSum = sumVectoren(n1, n2);
    cout << "The sum is: "<< vectorSum <<'\n';
}