#include <iostream>
using namespace std;

void findIntersection(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int resultSize = 0; // Initialize size of result array

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) { 
                // Check if already added to result to avoid duplicates
                bool alreadyExists = false;
                for (int k = 0; k < resultSize; k++) {
                    if (result[k] == arr1[i]) {
                        alreadyExists = true;
                        break;
                    }
                }
                
                if (!alreadyExists) {
                    result[resultSize++] = arr1[i]; // Store the common element
                }
            }
        }
    }
    cout << "Intersection: ";
    for (int i = 0; i < resultSize; i++) {
        cout << result[i] << " ";
    }

}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int result[5]; // Max possible size is min(size1, size2)

    findIntersection(arr1, size1, arr2, size2, result);

   
    return 0;
}
