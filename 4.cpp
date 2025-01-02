
void deleteStudent()
 {
    int id;
    cout << "Enter the ID of the student to delete: ";
    cin >> id;

    for (auto it = students.begin(); it != students.end(); ++it) 
	{
        if (it->id == id) {
            students.erase(it);
            cout << "Student deleted successfully!\n";
            return;
        }
    }
    cout << "Student with the given ID not found.\n";
}

