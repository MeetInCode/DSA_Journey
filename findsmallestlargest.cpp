// find smallest and largest element 

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {12, 3, 5, 7, 19};
    int smallest = arr[0];
    int largest = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
       
        //alternate approach

        largest = max(arr[i],largest);
    }

    cout << "The smallest element in the array is: " << smallest << endl;
    cout << "The largest element in the array is: " << largest << endl;

    return 0;
} 