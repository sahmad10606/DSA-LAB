// Student Details
// Name: [Your Name]
// Reg No: [Your Registration Number]
// Section: [Your Section]

#include <iostream>
#include <string>

using namespace std;

// Define the Student structure
struct Student {
    int rollNo;
    string name;
    float marks;
};

// Function to display student record if it exists
void displayStudent(const Student* s) {
    if (s == nullptr) {
        cout << "Error: No record available to display.\n";
    }
    else {
        cout << "\n--- Student Record ---\n";
        cout << "Roll Number: " << s->rollNo << "\n";
        cout << "Full Name  : " << s->name << "\n";
        cout << "Marks      : " << s->marks << "\n";
    }
}

// Function to update marks of an existing record
void updateMarks(Student* s, float newMarks) {
    if (s == nullptr) {
        cout << "Error: No record available to update.\n";
    }
    else {
        s->marks = newMarks;
        cout << "Marks updated successfully.\n";
    }
}

int main() {
    Student* studentPtr = nullptr;
    int choice = 0;
	do {  //the do while loop is used to keep the menu running until the user chooses to exit
        
        cout << "   STUDENT RECORD MANAGEMENT   "<<endl;
        cout << "1. Create Record" << endl;
        cout << "2. Display Record" << endl;
        cout << "3. Update Marks" << endl;
        cout << "4. Delete Record" << endl;
        cout << "5. Exit"<<endl;
        cout << "Enter your choice (1-5): " << endl;
        cin >> choice;

		switch (choice) { //this is the code that runs the menu and the choice system using a switch statement
        case 1:
            if (studentPtr != nullptr) {
                cout << "Error: A record already exists. Delete the current record before creating a new one.\n";
            }
            else {
                studentPtr = new Student{};
                cout << "Enter Roll Number: ";
                cin >> studentPtr->rollNo;

                cout << "Enter Full Name: ";
                cin >> ws;
                getline(cin, studentPtr->name);

                cout << "Enter Marks (0 - 100): ";
                cin >> studentPtr->marks;

                cout << "Record created successfully.";
            }
            break;

        case 2:
            displayStudent(studentPtr);
            break;

        case 3:
            if (studentPtr == nullptr) {
                cout << "Error: No record available to update.";
            }
            else {
                float updatedMarks;
                cout << "Enter new marks (0 - 100): ";
                cin >> updatedMarks;
                updateMarks(studentPtr, updatedMarks);
            }
            break;
        case 4:
            if (studentPtr == nullptr) {
                cout << "Error: No record available to delete.";
            }
            else {
                delete studentPtr;
                studentPtr = nullptr;
                cout << "Record deleted successfully.";
            }
            break;

		case 5: //this deletes the memory and resets the pointer to nullptr before exiting the application
            if (studentPtr != nullptr) {
                delete studentPtr;
                studentPtr = nullptr;
                cout << "Cleaned up allocated memory.";
            }
            cout << "Exiting application. Goodbye!";
            break;
        default:
            cout << "Invalid choice! Please select an option between 1 and 5.";
            break;
        }

    } while (choice != 5);

    return 0;
}