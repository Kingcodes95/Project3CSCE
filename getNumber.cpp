#include "Rap0249.h"
#include <iostream>
#include <fstream>
using namespace std;

int getNumber() {  
    ifstream fin;
    string line;

    fin.open("student.dat");

    if (fin.fail()) {
        cout << "File error." << endl;
        exit(1);
    }

    int count = 0;

    while (!fin.eof()) {
        getline(fin, line);
        count++;
    }
    fin.close();
    cout << "Working" << endl;
    return(count);
}
