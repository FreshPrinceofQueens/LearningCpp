//
// Created by Tayo Oduyemi on 2020-12-15.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <utility>

using namespace std;
struct Student {
    string firstName;
    int grade;
};
bool studentGreater(Student student1, Student student2) {
    return student1.grade > student2.grade;
}
/*
int main() {
    int numberOfStudents;
    cout << "How many students do you want to enter?" << endl;
    cin >> numberOfStudents;

    std::vector<Student> students;

    //Obtain the student names and push them into the vector
    for(int i = 0; i < numberOfStudents; i++) {
        Student tempStudent;
        cout << "Enter a student name: ";
        cin >> tempStudent.firstName;
        cout << "Enter their average: ";
        cin >> tempStudent.grade;
        while (tempStudent.grade > 100 || tempStudent.grade < 0) {
            cout << "Invalid grade, try again: ";
            cin >> tempStudent.grade;
        }
        students.push_back(tempStudent);
    }
    //Sort the vector
    std::sort(students.begin(), students.end(), studentGreater);

    for(int i = 0; i < numberOfStudents; ++i) {
        cout << students[i].firstName << " got a grade of " << students[i].grade << endl;
    }

}*/