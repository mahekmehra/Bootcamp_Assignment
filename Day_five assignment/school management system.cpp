#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
public:
    Student(int registration_number, const string& name, const string& address, int attendance)
        : registration_number(registration_number), name(name), address(address), attendance(attendance), marks(0){}

    void caltotalmark(double maths_m,double eng_m,double phy_m,double comp_m,double chem_m) {
        marks=maths_m+eng_m+phy_m+comp_m+chem_m;
    }

    double getTotalMarks() const {
        return attendance + marks;
    }

    void printStudentDetails() const {
        cout << "Registration number: " << registration_number << "\nName: " << name << "\nAddress: " << address
                  << "\nAttendance: " << attendance << "\nTotal Marks: " << getTotalMarks() << endl;
    }

    int getRegn() const {
        return registration_number;
    }

private:
    int registration_number;
    string name;
    string address;
    int attendance;
    double marks;
};

class Resultgenerator {
public:
    double calculateTotalMarks(const Student& student) {
        return student.getTotalMarks();
    }

};

class DatabaseSystem {
public:
    void addStudent() {
        int registration_number,attendance;
        string name,address;
        cout << "Enter Student registation number: ";
        cin >> registration_number;
        cin.ignore();
        cout << "Enter Student Name: ";
        getline(cin, name);
        cout << "Enter Student Address: ";
        getline(cin, address);
        cout << "Enter Student Attendance (out of 10): ";
        cin >> attendance;

        students.push_back(Student(registration_number, name, address, attendance));
        cout << "Student added successfully.\n";
    }

    void updateStudent() {
        int registration_number;
        cout << "Enter Student registration number to update: ";
        cin >> registration_number;

        for (auto& stu : students) {
            if (stu.getRegn() == registration_number) {
                double maths_m, eng_m, phy_m, comp_m,chem_m;
                cout << "Enter Maths Marks(out of 100): ";
                cin >> maths_m;
                cout << "Enter English Marks(out of 100): ";
                cin >> eng_m;
                cout << "Enter Physics Marks(out of 100): ";
                cin >> phy_m;
                cout << "Enter Chemistry Marks(out of 100): ";
                cin >> chem_m;
                cout << "Enter Computer Marks(out of 100): ";
                cin >> comp_m;

                stu.caltotalmark(maths_m,eng_m,phy_m,chem_m,comp_m);
                cout << "Student updated successfully.\n";
                return;
            }
        }
        cout << "Student not found.\n";
    }

    void deleteStudent() {
        int registration_number;
        cout << "Enter Student registration number to delete: ";
        cin >> registration_number;

        for (auto i = students.begin(); i != students.end(); ++i) {
            if (i->getRegn() == registration_number) {
                students.erase(i);
                cout << "Student deleted successfully.\n";
                return;
            }
        }
        cout << "Student not found.\n";
    }

    void checkResult() {
        int registration_number;
        cout << "Enter Student registration number to check result: ";
        cin >> registration_number;

        for (const auto& stu : students) {
            if (stu.getRegn() == registration_number) {
                Resultgenerator rg;
                double totalmarks = rg.calculateTotalMarks(stu);
                if(totalmarks>240){
                    cout<<"Result Status: Passed with total marks "<<totalmarks<<endl;
                }
                else{
                    cout<<"Result Status: Failed with total marks "<<totalmarks<<endl;
                }
            }
            return;
        }
        cout << "Student not found.\n";
    }

    void generateReport() {
        for (const auto& stu : students) {
            stu.printStudentDetails();
            cout << "------------XXXXXXXXXXXXX------------\n";
        }
    }

private:
    vector<Student> students;
};

class Mainmenu {
public:
    void displayMenu() {
        cout << "1. Add Student\n2. Update Student\n3. Delete Employee\n4. Check Result\n5. Generate Report\n6. Exit\n";
    }

    int getInput() {
        int choice;
        cin >> choice;
        return choice;
    }

    void displayOutput(const string& output) {
        cout << output << endl;
    }
};

int main() {
    Mainmenu mn;
    DatabaseSystem ds;

    while (true) {
        mn.displayMenu();
        int choice = mn.getInput();

        switch (choice) {
            case 1:
                ds.addStudent();
                break;
            case 2:
                ds.updateStudent();
                break;
            case 3:
                ds.deleteStudent();
                break;
            case 4:
                ds.checkResult();
                break;
            case 5:
                ds.generateReport();
                break;
            case 6:
                cout<<"Thankyou for using our School Management System!!"<<endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
