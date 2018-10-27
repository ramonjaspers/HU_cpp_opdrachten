#include <string>
#include <vector>
#include <iostream>

using namespace std;
struct students {
    string name;
    int age;
    vector<float> grades;
    vector<string> pet;
};
struct classes {
    string name;
    vector<students> student;
    string teachers;
};


float avg(const vector<float> &numbers) {
    float sum = 0;
    for (unsigned int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    float result = sum / numbers.size();
    return result;
}

int getGrades(classes &c) {
    vector<float> numbers;
    for (int i = 0; i < c.student.size(); ++i) {
        for (int j = 0; j < c.student[i].grades.size(); ++j) {
            numbers.push_back(c.student[i].grades[j]);
            cout << c.student[i].grades[j];
        }
    }
    float result = avg(numbers);
    return result;

};


int main() {
    students student1 = {"John", 15, {6.6, 4, 7, 8, 6, 5}, {"fish", "pirate"}};
    students student2 = {"Hendrik", 14, {6, 7, 8, 8, 8, 9}, {"dog"}};
    students student3 = {"James", 15, {7, 6, 8, 6, 3, 8}, {"cat"}};

    classes class1 = {"ArtsA6", {student1, student3}, "Kim"};
    classes class2 = {"TechB5", {student1, student2, student3}, "Hank"};

    float result = getGrades(class1);
    cout << result;

    return 0;
}





// Haal p/class alle students op en daarvan alle grade GEM
