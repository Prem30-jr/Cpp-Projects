#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

// Define the structure for a student
struct Student {
    string name;
    int rollNumber;
    double cutoffMark;
};

// Function prototypes
void displayMenu();
void addStudent(Student students[], int& studentCount);
void displayStudents(const Student students[], int studentCount);
void updateStudent(Student students[], int studentCount);
void deleteStudent(Student students[], int& studentCount);
void findStudentsAboveCutoff(const Student students[], int studentCount, double cutoff);
void saveDataToFile(const Student students[], int studentCount);
void loadDataFromFile(Student students[], int& studentCount);

int main() {
    const int MAX_STUDENTS = 100;
    Student students[MAX_STUDENTS];
    int studentCount = 0;

    // Load existing data from file
    loadDataFromFile(students, studentCount);

    int choice;
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(students, studentCount);
                break;
            case 2:
                displayStudents(students, studentCount);
                break;
            case 3:
                updateStudent(students, studentCount);
                break;
            case 4:
                deleteStudent(students, studentCount);
                break;
            case 5:
                double cutoff;
                cout << "Enter cutoff mark: ";
                cin >> cutoff;
                findStudentsAboveCutoff(students, studentCount, cutoff);
                break;
            case 6:
                // Save data to file before exiting
                saveDataToFile(students, studentCount);
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}

void displayMenu() {
    cout << "===== Student Management System =====\n";
    cout << "1. Add Student\n";
    cout << "2. Display Students\n";
    cout << "3. Update Student\n";
    cout << "4. Delete Student\n";
    cout << "5. Find Students Above Cutoff\n"; 
    cout << "6. Exit\n";
}

void addStudent(Student students[], int& studentCount) {
    if (studentCount < 100) {
        cout << "Enter student name: ";
        cin >> ws;
        getline(cin, students[studentCount].name);

        cout << "Enter roll number: ";
        cin >> students[studentCount].rollNumber;

        cout << "Enter cutoff mark: ";
        cin >> students[studentCount].cutoffMark;

        studentCount++;
        cout << "Student added successfully.\n";
    } else {
        cout << "Maximum number of students reached.\n";
    }
}

void displayStudents(const Student students[], int studentCount) {
    if (studentCount > 0) {
        cout << "===== Student Records =====\n";
        cout << setw(20) << "Name" << setw(15) << "Roll Number" << setw(15) << "Cutoff Mark\n";
        for (int i = 0; i < studentCount; i++) {
            cout << setw(20) << students[i].name << setw(15) << students[i].rollNumber << setw(15) << students[i].cutoffMark << endl;
        }
    } else {
        cout << "No student records available.\n";
    }
}

void updateStudent(Student students[], int studentCount) {
    if (studentCount > 0) {
        int rollNumber;
        cout << "Enter the roll number of the student to update: ";
        cin >> rollNumber;

        for (int i = 0; i < studentCount; i++) {
            if (students[i].rollNumber == rollNumber) {
                cout << "Enter new cutoff mark for " << students[i].name << ": ";
                cin >> students[i].cutoffMark;
                cout << "Student information updated successfully.\n";
                return;
            }
        }
        cout << "Student with roll number " << rollNumber << " not found.\n";
    } else {
        cout << "No student records available.\n";
    }
}

void deleteStudent(Student students[], int& studentCount) {
    if (studentCount > 0) {
        int rollNumber;
        cout << "Enter the roll number of the student to delete: ";
        cin >> rollNumber;

        for (int i = 0; i < studentCount; i++) {
            if (students[i].rollNumber == rollNumber) {
                // Shift the remaining elements to fill the gap
                for (int j = i; j < studentCount - 1; j++) {
                    students[j] = students[j + 1];
                }
                studentCount--;
                cout << "Student deleted successfully.\n";
                return;
            }
        }
        cout << "Student with roll number " << rollNumber << " not found.\n";
    } else {
        cout << "No student records available.\n";
    }
}

void findStudentsAboveCutoff(const Student students[], int studentCount, double cutoff) {
    cout << "===== Students Above Cutoff =====\n";
    cout << setw(20) << "Name" << setw(15) << "Roll Number" << setw(15) << "Cutoff Mark\n";

    for (int i = 0; i < studentCount; i++) {
        if (students[i].cutoffMark >= cutoff) {
            cout << setw(20) << students[i].name << setw(15) << students[i].rollNumber << setw(15) << students[i].cutoffMark << endl;
        }
    }
}

void saveDataToFile(const Student students[], int studentCount) {
    ofstream outFile("students.txt");

    if (outFile.is_open()) {
        for (int i = 0; i < studentCount; i++) {
            outFile << students[i].name << " " << students[i].rollNumber << " " << students[i].cutoffMark << endl;
        }

        outFile.close();
        cout << "Data saved to file successfully.\n";
    } else {
        cout << "Unable to open file for saving data.\n";
    }
}

void loadDataFromFile(Student students[], int& studentCount) {
    ifstream inFile("students.txt");

    if (inFile.is_open()) {
        while (inFile >> students[studentCount].name >> students[studentCount].rollNumber >> students[studentCount].cutoffMark) {
            studentCount++;
            if (studentCount == 100) {
                cout << "Maximum number of students reached. Some data may not be loaded.\n";
                break;
            }
        }

        inFile.close();
        cout << "Data loaded from file successfully.\n";
    } else 
	{
        cout << "No existing data file found";
	}
}
