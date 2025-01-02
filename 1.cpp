#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    int id;
    string name;
    int age;
    string level;
};
vector<Student> students;

void addStudent() {
    Student student;
    cout << "Enter student ID: ";
    cin >> student.id;
    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, student.name);
    cout << "Enter student age: ";
    cin >> student.age;
    cout << "Enter student level: ";
    cin.ignore();
    getline(cin, student.level);

    students.push_back(student);
    cout << "Student added successfully!\n";
}