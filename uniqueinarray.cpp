// find all unique values in array

#include <iostream>
using namespace std;

void findUnique(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isUnique = true;

        // Check the entire array for occurrences of arr[i] but avoid check by itself i.e when i and j both will be 1 it will point to same but that does not mean they are repeated
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j] && i != j) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {9 ,1, 1, 2, 5, 2, 2, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique elements: ";
    findUnique(arr, size);

    return 0;
}
