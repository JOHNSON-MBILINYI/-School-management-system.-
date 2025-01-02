

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

