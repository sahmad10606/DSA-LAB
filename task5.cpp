
#include <iostream>
#include <string>

using namespace std;


struct Student {
    int rollNo;
    string name;
    float marks;
};


void displayIfExists(const Student* s) {
    if (s == nullptr) {
        cout << "No record available\n";
    }
    else {
        cout << "Student Record ---";
        cout << "Roll Number: " << s->rollNo << endl;
        cout << "Full Name  : " << s->name << endl;
        cout << "Marks      : " << s->marks << endl;
    }
}

int main() {
    //Initialize pointer to nullptr
    Student* p = nullptr;

    cout << " Checking before allocation:\n";
    displayIfExists(p);

  
    p = new Student{};

    cout << "Enter Roll Number: ";
    cin >> p->rollNo;

    cout << "Enter Full Name: ";
    cin >> ws;
    getline(cin, p->name);
    
    cout << "Enter Marks (0 - 100): ";
    cin >> p->marks;

    cout << "\nChecking after allocation and entry:";
    displayIfExists(p);

    
    delete p;
    p = nullptr;

    cout << "\nChecking after deletion and resetting pointer:\n";
    displayIfExists(p);

    return 0;
}