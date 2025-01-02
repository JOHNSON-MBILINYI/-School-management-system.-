
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

        switch (choice) 
		{
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
                cout << "Invalid choice, please try it again.\n";
        }
    } while (choice != 5);

    return 0;
