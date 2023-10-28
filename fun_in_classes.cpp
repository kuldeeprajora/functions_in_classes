#include <iostream>

using namespace std;

class Student {
private:
    char name[100];
    char gender[10];
    int rollNo;
    double marks;
    int age;

public:
    void takedata() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter student gender: ";
        cin >> gender;

        cout << "Enter student age: ";
        cin >> age;

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void showdata() {
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

void takedata(Student students[], int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        students[i].takedata();
    }
}

void showdata(Student students[], int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nStudent " << i + 1 << " Information:" << endl;
        students[i].showdata();
    }
}

int main() {
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    Student students[numStudents];

    takedata(students, numStudents);

    cout << "\nStudent Information:" << endl;
    showdata(students, numStudents);

    return 0;
}
