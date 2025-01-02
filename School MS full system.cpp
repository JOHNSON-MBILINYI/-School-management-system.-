#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to store student information
struct Student {
    int id;
    string name;
    int age;
    string grade;
};

// List of students
vector<Student> students;

// Function to create (add) a new student
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

// Function to read (view) all students
void viewStudents() {
    if (students.empty()) {
        cout << "No students found.\n";
        return;
    }

    cout << "List of Students:\n";
    for (const auto& student : students) {
        cout << "ID: " << student.id << ", Name: " << student.name
             << ", Age: " << student.age << ", Grade: " << student.grade << endl;
    }
}

// Function to update a student's information
void updateStudent() {
    int id;
    cout << "Enter the ID of the student to update: ";
    cin >> id;

    for (auto& student : students) {
        if (student.id == id) {
            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, student.name);
            cout << "Enter new age: ";
            cin >> student.age;
            cout << "Enter new grade: ";
            cin.ignore();
            getline(cin, student.grade);

            cout << "Student details updated successfully!\n";
            return;
        }
    }
    cout << "Student with the given ID not found.\n";
}

// Function to delete a student
void deleteStudent() {
    int id;
    cout << "Enter the ID of the student to delete: ";
    cin >> id;

    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->id == id) {
            students.erase(it);
            cout << "Student deleted successfully!\n";
            return;
        }
    }
    cout << "Student with the given ID not found.\n";
}

// Main menu
int main() {
    int choice;

    do {
        cout << "\n=== School Management System ===\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Update Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                updateStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                cout << "Thank you for using the system!\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
