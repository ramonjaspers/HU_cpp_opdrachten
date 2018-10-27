#include <vector>
#include <iostream>

using namespace std;

bool check(const vector<float> &numbers) {
    float min = numbers[0];
    for (unsigned int i = 1; i < numbers.size(); i++) {
        if (numbers[i] < min) {
            return false;
        }
    }
    return true;
}

float min(const vector<float> &numbers) {
    float min = numbers[0];
    for (unsigned int i = 1; i < numbers.size(); i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    return min;
}

int count(const vector<float> &numbers) {
    int counter = 0;
    for (unsigned int i = 0; i < numbers.size(); i++) {
        counter++;

    }
    return counter;
}

float avg(const vector<float> &numbers) {
    float sum = 0;
    for (unsigned int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    float medium = sum / numbers.size();
    return medium;
}

vector<float> getNumbers() {
    vector<float> values = {};
    int number;
    while (number > -1) {
        cout << "Geef een positief getal of een negatief getal als je wilt stoppen: ";
        cin >> number;
        if (number < 0) {
        } else {
            values.push_back(number);
        }
    }
    return values;

}

int main() {
    vector <float> values = getNumbers();
//    values = getNumbers();
    bool sorted = check(values);
    if (sorted == 0) {
        cout << "De reeks is niet gesorteed" << endl;
    }
    if (sorted == 1) {
        cout << "De reeks is gesorteed" << endl;
    }
    float averageVector = avg(values);
    cout << "De gemiddelde waarde is: " << averageVector << endl;
    float minimumVector = min(values);
    cout << "De minimum waarde is: " << minimumVector << endl;
    int length = count(values);
    cout << "De reeks bevat " << length << " getallen" << endl;


    return 0;
}