
#include <iostream>
#include <string>
using namespace std;


struct Student {
    int rollNo;
    string name;
    float marks;
};

// Function to display student details (read-only access)
void displayStudent(const Student* s) {
    if (s != nullptr) {
        cout << "Student Record: ";
        cout << "Roll Number: " << s->rollNo << endl;
        cout << "Full Name  : " << s->name << endl;
        cout << "Marks      : " << s->marks <<  endl;
    }
}

// Function to update student marks
void updateMarks(Student* s, float newMarks) {
    if (s != nullptr) {
        s->marks = newMarks;
    }
}

int main() {
    
    Student* p = new Student{};

    cout << "Enter Roll Number: ";
    cin >> p->rollNo;

    cout << "Enter Full Name: ";
    cin >> ws;
    getline(cin, p->name);

    cout << "Enter Marks (0 - 100): ";
    cin >> p->marks;

    
    displayStudent(p);

    
    float newMarks;
    cout << "Enter new marks to update: ";
    cin >> newMarks;
    updateMarks(p, newMarks);

   
    displayStudent(p);

    //Cleanup 
    delete p;
    p = nullptr;

    return 0;
}