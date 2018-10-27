//opdracht 4
#include <iostream>

using namespace std;

int fib(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int number = 0;
    cout << "geef een het aantal iteraties:";
    cin >> number;
    for (int i = 1; i <= number; ++i) {
        cout << "F(" << i << ") = " << fib(i) << endl;
    }

    return 0;
}