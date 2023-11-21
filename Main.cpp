#include "Rap0249.h"
#include <iostream>
#include <fstream>
using namespace std;

int number_of_students = 5;
enum choices {Add = 1, Remove = 2, Display = 3, Search = 4, Results = 5, Quit = 6};
int choice = Results;
ifstream file("student.dat");

struct Student {
    string nameStudent;
    int student_ID;
    int testsTaken;
    int* testsArray = new int [getNumber()]; //change something here cause it won't put everything in the array cause size too small
    int avgScores;

    //Deletes the extra space in the array thats not needed 
    ~Student() {
        delete[] testsArray;
    }
};

void add_Student(Student& studentInstance) {
    cout << "What is your First, Middle, and Last name";
    getline(cin, studentInstance.nameStudent); // student Last name
    
    cout << "Please enter your student ID";
    cin >> studentInstance.student_ID; // for the student ID 

    ifstream file("student.dat");
    file.open("student.dat");

    if (!file.is_open()) {
        cout << "File did not open" << endl;
        exit(1);
    }

    for (int i = 0; i < studentInstance.testsTaken; i++) {
        //Need to write code to change variables number in the actual file.
    }


    cout << "Add (Function not complete)" << endl;
}

void remove_Student() {
    cout << "Remove (Function not complete)" << endl;
}

void display_Data() {
    cout << "Display (Function not complete)" << endl;
} 

void search_Data() {
    cout << "Search (Function not complete)" << endl;
}

void export_Results() {
    cout << "Results (Function not complete)" << endl;
}

int main()
{
    Student studentInstance;
    ifstream file("student.dat");

    file.open("student.dat");

    if (!file.is_open()) {
        cout << "File is not open" << endl;
        exit(1);
    }

    if(file.is_open()) {
        string myChar;
        myChar = file.get();
        cout << myChar;
    }

    
    cout << endl;
    cout << "1. Add" << endl;
    cout << "2. Remove" << endl;
    cout << "3. Display" << endl;
    cout << "4. Search" << endl;
    cout << "5. Results" << endl;
    cout << "6. Quit" << endl;
    cout << "Please pick an option: ";
    cin >> choice;

    switch (choice) {
        case Add:
            add_Student(studentInstance);
            break;

        case Remove:
            remove_Student();
            break;

        case Display:
            display_Data();
            break;

        case Search:
            search_Data();
            break;

        case Results:
            export_Results();
            break;

        case Quit:
            cout << "Quit (Function not complete)" << endl;
            break;

        default:
            cout << "PLease enter a number 1 - 6" << endl;
            break;

    }
    return 0;
}