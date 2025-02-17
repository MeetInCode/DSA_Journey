#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& vec) {
    int start = 0;
    int stop = vec.size() - 1;

    while (start < stop) {
        swap(vec[start], vec[stop]);
        start++;
        stop--;
    }
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    reverse(vec);

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    return 0;
}