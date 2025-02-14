#include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

void display() {
    // Local variable
    int localVar = 20;
    cout << "Local variable: " << localVar << endl;
    cout << "Global variable: " << globalVar << endl;
}

int main() {
    cout << "Global variable in main: " << globalVar << endl;
    // cout << localVar // Error: localVar is not defined in main
    display();
    return 0;
}