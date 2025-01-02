void updateStudent() {
    int id;
    cout << "Enter the ID of the student to update: ";
    cin >> id;

    for (auto& student : students)
	 {
        if (student.id == id) {
            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, student.name);
            cout << "Enter new age: ";
            cin >> student.age;
            cout << "Enter new level: ";
            cin.ignore();
            getline(cin, student.level);

            cout << "Student details updated successfully!\n";
            return;
        }
    }
    cout << "Student with the given ID not found.\n";
}
