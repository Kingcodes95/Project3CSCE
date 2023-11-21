#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

// Define the struct to hold the 2D array
struct Student {
    string** data; // 2D array to hold strings
    size_t numRows; // Number of rows
    size_t numCols; // Number of columns
};

// Function to read the file and populate the 2D array in the struct
int getNumberColumns(Student& studentInstance) {
    ifstream inputFile("student.dat");

    //opens file
    if (!inputFile.is_open()) {
        cout << "File could not open!" << endl;
        return 1; //returns error
    }

    string line;

    if (getline(inputFile, line)) {
        istringstream iss(line);
        string element;

        while (getline(iss, element, ',')) {
            studentInstance.data[0][studentInstance.numCols++] = element;
        }
    } else {
        cout << "File is empty" << endl;
        return 1;
    }

    inputFile.close();
    return studentInstance.numCols;
}

// Function to initialize the 2D array in the struct
void initializeArray(Student& studentInstance, size_t rows, size_t cols) {
    studentInstance.data = new string*[rows];
    for (size_t i = 0; i < rows; ++i) {
        studentInstance.data[i] = new string[cols];
    }
    studentInstance.numRows = rows;
    studentInstance.numCols = cols;
}

// Function to deallocate the memory used by the 2D array
void deallocateArray(Student& studentInstance) {
    for (size_t i = 0; i < studentInstance.numRows; ++i) {
        delete[] studentInstance.data[i];
    }
    delete[] studentInstance.data;
}

// Function to print the contents of the 2D array
void printArray(const Student& studentInstance) {
    for (size_t i = 0; i < studentInstance.numRows; ++i) {
        for (size_t j = 0; j < studentInstance.numCols; ++j) {
            cout << studentInstance.data[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    Student studentInstance; // Declare an instance of the struct
    initializeArray(studentInstance, 1, 10); // Assuming 1 row and 10 columns initially

    int cols = getNumberColumns(studentInstance);

    if (cols != 0) {
        cout << "Number of columns: " << cols << endl;

        // Access the 2D array from the struct in the main function
        printArray(studentInstance);
    }

    // Deallocate memory used by the 2D array
    deallocateArray(studentInstance);

    return 0;
}
