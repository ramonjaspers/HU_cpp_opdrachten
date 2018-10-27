#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int times = 0;
    while (times != -1) {
        cout << "Wat wil je 10 keer vermenigvuldigen: ";
        cin >> times;
        cout << endl;
        if (-1 != times) {
            for (int multiplier = 1; multiplier <= 10; multiplier++) {
                int total = times * multiplier;
                int maxSpaces = 30;
                int lengte = to_string(total).length();
                int totaalSpaces = maxSpaces - lengte;
                int j = 0;

                if (multiplier < 10) {
                    cout << times << " x " << multiplier << "  " << "=";
                    while (j <= totaalSpaces) {
                        cout << " ";
                        j++;
                    }
                } else {
                    cout << times << " x " << multiplier << " " << "=";
                    while (j <= totaalSpaces) {
                        cout << " ";
                        j++;
                    }
                }
                cout << total << endl;
                cout << endl;

            }
        }
    }

    //extra cout for outputbuffer.
    cout << ' ' << endl;
    return 0;
}