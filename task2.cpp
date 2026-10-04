
#include <iostream>
#include <string>

using namespace std;


struct Student {
    int rollNo;
    string name;
    float marks
};

int main() {
    Student s;
    Student* p = &s; //this is th pointer pointing to local variable s

    cout << "Enter Roll Number: ";
    cin >> p->rollNo;
    cout << "Enter Full Name: ";
    cin >> ws;
    getline(cin, p->name);
    cout << "Enter Marks : ";
    cin >> p->marks;
    cout << endl;
    //display details using arrow 
    cout << " Student Record (Initial)"<<endl;
    cout << "Roll Number: " << p->rollNo << endl;
    cout << "Full Name  : " << p->name << endl;
    cout << "Marks      : " << p->marks << endl;

    //using this for updating marks
    cout << "Enter new marks to update: ";
    cin >> p->marks;

    //to display updated details
    cout << " Student Record (Updated)"<<endl;
    cout << "Roll Number: " << p->rollNo << endl;
    cout << "Full Name  : " << p->name << endl;
    cout << "Marks      : " << p->marks << endl;

    return 0;
}