// find smallest and largest element 

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {12, 3, 5, 7, 19};
    int smallest = arr[0];
    int largest = arr[0];
    int smallest_index;
    int largest_index;

    for (int i = 1; i < 5; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            smallest_index = i;
        }
       
        //alternate approach
        if (arr[i] > largest) {
            largest = arr[i];
            largest_index = i;
        }
        
    }

    cout << "The smallest element in the array is: " << smallest << endl;
    cout << "The largest element in the array is: " << largest << endl;
    cout << "The smallest element index in the array is: " << smallest_index << endl;
    cout << "The largest element index in the array is: " << largest_index << endl;

    return 0;
} 