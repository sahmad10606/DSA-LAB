

#include <iostream>
#include <string> //for getline function
using namespace std;
struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student s;
    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cout << "Enter Full Name: ";
    cin >> ws;  //using this to clear the input buffer before using getline
    getline(cin, s.name);

    cout << "Enter Marks : ";
    cin >> s.marks;
    // Display student details using dot 
    cout << "Student Details ";
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Full Name  : " << s.name << endl;
    cout << "Marks      : " << s.marks << endl;
    return 0;
}