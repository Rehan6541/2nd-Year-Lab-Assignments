//practical number 6

#include <iostream>
#include <cstring>
using namespace std;

class Student {
protected:
    char name[50];
    int rollNumber;
    char subject[50];
public:
    virtual void input() {
        cout << "Enter name: ";
        cin>>name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter subject: ";
        cin>>subject;
    }
    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << rollNumber << endl;
        cout << "Subject: " << subject << endl;
    }
    virtual int getRollNumber() {
        return rollNumber;
    }
};

class Exam : public Student {
protected:
    int subjectCode;
    float internalAssessment;
    float universityMarks;
public:
    void input() {
        Student::input();
        cout << "Enter subject code: ";
        cin >> subjectCode;
        cout << "Enter internal assessment marks: ";
        cin >> internalAssessment;
        cout << "Enter university examination marks: ";
        cin >> universityMarks;
    }
    void display() {
        Student::display();
        cout << "Subject code: " << subjectCode << endl;
        cout << "Internal assessment marks: " << internalAssessment << endl;
        cout << "University examination marks: " << universityMarks << endl;
    }
    int getRollNumber() {
        return rollNumber;
    }
};

int main() {
    
    Exam students[3];
    int count = 0;
    int choice;
    int searchRollNumber;
    bool found = false;

    do {
        cout << "\n1. List a table\n2. Insert a new entry\n3. Delete old entry\n4. Edit an entry\n5. Search for a record\n0. Exit\nEnter your choice: ";
        cin >> choice;
       
        switch (choice) {
            case 1:
                cout << "\nListing table...\n";
                for (int i = 0; i < count; ++i) {
                    students[i].display();
                    cout << "--------------------------------------\n";
                }
                break;
            case 2:
                if (count < 3) {
                    cout << "\nInserting a new entry...\n";
                    students[count].input();
                    count++;
                } else {
                    cout << "\nCannot insert, maximum limit reached.\n";
                }
                break;
            case 3:
                cout << "\nDelete old entry (by roll number): ";
                int deleteRollNumber;
                cin >> deleteRollNumber;
                found = false;
                for (int i = 0; i < count; ++i) {
                    if (students[i].getRollNumber() == deleteRollNumber) {
                        found = true;
                        for (int j = i; j < count - 1; ++j) {
                            students[j] = students[j + 1];
                        }
                        count--;
                        break;
                    }
                }
                if (!found) {
                    cout << "Record not found.\n";
                } else {
                    cout << "Record deleted.\n";
                }
                break;
            case 4:
                cout << "\nEdit an entry (by roll number): ";
                int editRollNumber;
                cin >> editRollNumber;
                found = false;
                for (int i = 0; i < count; ++i) {
                    if (students[i].getRollNumber() == editRollNumber) {
                        found = true;
                        students[i].input();
                        break;
                    }
                }
                if (!found) {
                    cout << "Record not found.\n";
                } else {
                    cout << "Record edited.\n";
                }
                break;
            case 5:
                cout << "\nSearch for a record (by roll number): ";
                cin >> searchRollNumber;
                found = false;
                for (int i = 0; i < count; ++i) {
                    if (students[i].getRollNumber() == searchRollNumber) {
                        found = true;
                        students[i].display();
                        break;
                    }
                }
                if (!found) {
                    cout << "Record not found.\n";
                }
                break;
            case 0:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}