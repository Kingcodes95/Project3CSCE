#include <iostream>
using namespace std;

int number_of_students = 5;
enum choices {Add = 1, Remove = 2, Display = 3, Search = 4, Results = 5, Quit = 6};
choices choice;

struct Student {
    string nameStudent;
    int studentID, testTaken;
    //pointer for dynamic array RIGHT HERE
    int avgScores;
};

int main()
{
    switch (choice) {
        case Add:
        //code
        break;

        case Remove:
        //code
        break;

        case Display:
        //code
        break;

        case Search:
        //code
        break;

        case Results:
        //code
        break;

        case Quit:
        //code
        break;

        default:
        //code
        break;

    }
    return 0;
}