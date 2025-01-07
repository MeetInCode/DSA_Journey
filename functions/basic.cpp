/*
no return- void
*/

#include <iostream>

using namespace std;

void printHello() {
    cout << "Hello" << endl;
}

int sum(int a, int b) { // paratameters - a b 
    return a + b;
}

int min(int a , int b){
    return a < b ? a : b;
}

int main() {
    printHello();
    cout << sum(2, 3) << endl; // aruments - 2 3
    
    return 0;
}