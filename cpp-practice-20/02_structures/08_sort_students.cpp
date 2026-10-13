// Sort students by marks using a structure.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int marks;
};

int main() {
    vector<Student> classList = {
        {"Maya", 78}, {"Arjun", 92}, {"Nisha", 85}
    };

    sort(classList.begin(), classList.end(),
         [](const Student& a, const Student& b) {
             return a.marks > b.marks;
         });

    for (const Student& student : classList) {
        cout << student.name << ": " << student.marks << '\n';
    }
}
