

#include <iostream>
#include <string>

using namespace std;

// Define the Student structure
struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    
    Student* p = new Student{};   //allocating 1 record

	//input details using pointer
    cout << "Enter Roll Number: ";
    cin >> p->rollNo;

    cout << "Enter Full Name: ";
    cin >> ws;
    getline(cin, p->name);

    cout << "Enter Marks: ";
    cin >> p->marks;

    
    cout << "Student Record "<<endl;
    cout << "Roll Number: " << p->rollNo <<endl ;
    cout << "Full Name  : " << p->name << endl;
    cout << "Marks      : " << p->marks << endl;

    //using this to release allocated heap memory and reset pointer
    delete p;
    p = nullptr;

    cout << "Memory successfully released and pointer set to nullptr.";

    return 0;
}