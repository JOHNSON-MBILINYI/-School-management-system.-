#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    int age;
    string grade;
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
    cout << "Enter student grade: ";
    cin.ignore();
    getline(cin, student.grade);

    students.push_back(student);
    cout << "Student added successfully!\n";
}

void viewStudents() {
    if (students.empty())
	 {
        cout << "No students found.\n";
        return;
    }

    cout << "List of Students:\n";
    for (const auto& student : students) 
	{
        cout << "ID: " << student.id << ", Name: " << student.name
             << ", Age: " << student.age << ", Grade: " << student.level << endl;
    }
}

