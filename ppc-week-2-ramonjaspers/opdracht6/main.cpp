#include <iostream>
#include <vector>

using namespace std;

bool count(const vector<int> &numbers) {
    int one = 0;
    int zero = 0;
    string message = "";
    for (int t : numbers) {
        if (t == 1) {
            one++;
        }
        if (t == 0) {
            zero++;
        }
    }

    return (one > zero && zero <= 12);
//
//    if (zero > 12) {
//        return 2;
//    }
    return 0;
}

int main() {
    int returnValue = 0;
    returnValue = count({0, 1, 0, 1, 1, 0, 0, 1, 1});
    cout << returnValue;

}