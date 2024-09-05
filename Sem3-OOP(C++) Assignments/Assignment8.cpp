#include <iostream>
#include <string>

using namespace std;

class PersonnelDatabase {
private:
    string name;
    string dateOfBirth;
    string bloodGroup;
    double height;
    double weight;
    string insurancePolicyNumber;
    string contactAddress;
    string telephoneNumber;
    string drivingLicenceNo;

public:
    // Constructor
    PersonnelDatabase(string n, string dob, string bg, double h, double w, string ipn, string ca, string tn, string dln)
        : name(n), dateOfBirth(dob), bloodGroup(bg), height(h), weight(w), insurancePolicyNumber(ipn), contactAddress(ca), telephoneNumber(tn), drivingLicenceNo(dln) {}

    // Default constructor
    PersonnelDatabase() : name(""), dateOfBirth(""), bloodGroup(""), height(0), weight(0), insurancePolicyNumber(""), contactAddress(""), telephoneNumber(""), drivingLicenceNo("") {}

    // Copy constructor
    PersonnelDatabase(const PersonnelDatabase& other) {
        name = other.name;
        dateOfBirth = other.dateOfBirth;
        bloodGroup = other.bloodGroup;
        height = other.height;
        weight = other.weight;
        insurancePolicyNumber = other.insurancePolicyNumber;
        contactAddress = other.contactAddress;
        telephoneNumber = other.telephoneNumber;
        drivingLicenceNo = other.drivingLicenceNo;
    }

    // Destructor
    ~PersonnelDatabase() {
        cout << "PersonnelDatabase object destroyed." << endl;
    }

    // Function to display personnel information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Date of Birth: " << dateOfBirth << endl;
        cout << "Blood Group: " << bloodGroup << endl;
        cout << "Height: " << height << " cm" << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Insurance Policy Number: " << insurancePolicyNumber << endl;
        cout << "Contact Address: " << contactAddress << endl;
        cout << "Telephone Number: " << telephoneNumber << endl;
        cout << "Driving Licence No.: " << drivingLicenceNo << endl;
    }
};

int main() {
    // Create objects using different constructors
    PersonnelDatabase person1("John Doe", "01/01/1990", "A+", 180.5, 75.2, "IPN123", "123 Street, City", "1234567890", "DLN456");
    PersonnelDatabase person2;

    // Copying person1's information to person2 using the copy constructor
    PersonnelDatabase person3 = person1;

    // Display information
    person1.displayInfo();
    cout << "------------------------" << endl;
    person2.displayInfo(); // Default constructor output
    cout << "------------------------" << endl;
    person3.displayInfo(); // Copy constructor output

    return 0;
}