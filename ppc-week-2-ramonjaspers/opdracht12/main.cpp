#include <vector>
#include <iostream>
//#include <algorithm>
using namespace std;

bool ascend(vector<float>a){
    for(int i=1;i<a.size();i++){
        if(a[i]<a[i-1]){//put'='if it is to be strictly ascending
            return false;
        }
    }
    return true;
}


int main(){
    bool result;
    vector<float> n = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 8.8, 9.9, 10.1};
    if (ascend(n)){
        result = true;
    }
            else {
        result = false;
    }
    cout << "Is this a sorted vector? "<< result <<'\n';
}

