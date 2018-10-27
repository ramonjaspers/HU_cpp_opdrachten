//opdracht 3
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void createMaze(vector<vector<int>> &number) {
    for (const auto& inner : number) {
        for (const auto& item : inner) {
            char c  = item;
            if (c == -1) {
                c = 'x';
                cout << c;
            }else{
                cout << item;
            }
//            cout << c;
        }
cout << endl;
    }

}


int main() {
    vector<vector<int>> mat = {
            {-1, 0,  -1, -1, -1, -1, -1, -1, -1, -1, -1},
            {-1, 0,  -1, 0,  0,  0,  -1, -1, 0,  -1, -1},
            {-1, 0,  -1, 0,  -1, -1, -1, 0,  0,  1,  -1},
            {-1, 0,  0,  0,  0,  0,  0,  0,  -1, -1, -1},
            {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}
    };
    createMaze(mat);
    return 0;
}