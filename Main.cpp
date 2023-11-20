#include "Rap0249.h"
#include <iostream>
using namespace std;

int number_of_students = 5;
enum choices {Add = 1, Remove = 2, Display = 3, Search = 4, Results = 5, Quit = 6};
int choice = Results;

struct Student {
    string nameStudent;
    int student_ID;
    size_t testsTaken;
    int* testsArray;
    int avgScores;

    // makes the dynamic Array
    Student(size_t size) : testsTaken(size) {
        testsArray = new int[size];
    }
    //Deletes the extra space in the array thats not needed 
    ~Student() {
        delete[] testsArray;
    }
};

void add_Student() {
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
    Student arrayInstance(5);
    arrayInstance.testsTaken = getNumber();

    //Manipulates the array
    for (size_t i = 0; i < arrayInstance.testsTaken; i++) {
        //This is just to test the array so it multiplys all by 2
        arrayInstance.testsArray[i] = i * 2;
    }
    //Prints the elements
    for (size_t i = 0; i < arrayInstance.testsTaken; i++) {
        cout << arrayInstance.testsArray[i] << '\t';
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
            add_Student();
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