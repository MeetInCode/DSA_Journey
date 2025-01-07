#include <iostream>
using namespace std;

// count no of lines we need to travel - outer loop - n lines
// if we want to run any loop n times then we need to run it from 1 to n
// how many times in one single row - inner loop

/* n =4

    1234
    1234
    1234
    1234
*/

/*
i=0 to i<=n-1
i=0 to i<n
i=1 to i<=n

i=0 to i<=n-1:

Starts at i = 0
Ends at i = n-1
Iterates n times


i=0 to i<n:

Starts at i = 0
Ends at i = n-1
Iterates n times


i=1 to i<=n:

Starts at i = 1
Ends at i = n
Iterates n times
*/

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= n-1; ++j) {
            cout << j+1 << " ";
        }
        cout << endl;
    }

    return 0;
}
