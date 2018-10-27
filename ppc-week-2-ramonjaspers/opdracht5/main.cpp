#include <vector>
#include <iostream>

using namespace std;


int count(const vector<int> &numbers, const int &x) {
	int i = 0;
	for (int t : numbers) {
		if (t == x) {
			i++;
		}
	}
	return i;
}
int main() {
	count({1, 2, 1, 2, 3, 1, 2, 3, 1, 2, 1, 4}, 2);
}