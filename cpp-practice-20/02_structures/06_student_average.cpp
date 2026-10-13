// Simple structure example: calculate a student's average.
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int marks[3];
};

double averageMarks(const Student& student) {
    int total = 0;
    for (int mark : student.marks) total += mark;
    return total / 3.0;
}

int main() {
    Student student = {"Aarav", {82, 91, 87}};
    cout << student.name << "'s average: " << averageMarks(student) << '\n';
}
