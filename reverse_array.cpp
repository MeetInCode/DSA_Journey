#include <iostream>
using namespace std;

void reverse(int arr[]){
    int start = 0;
    int stop=4;

    while(start<stop){
        swap(arr[start],arr[stop]);
        start++;
        stop--;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    reverse(arr);

    for(int i=0;i<=4;i++){
    cout << arr[i];
}
    return 0;
}