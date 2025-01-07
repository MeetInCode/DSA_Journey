#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    char ch = 'A';

    for (int i = 0 ; i<=n ; i++){
        for(int j = 0 ; j<n ; j++){
            cout << ch << " ";
            ch++;  // A= 65 , A++ 65++= 66 , 66=B
        }
        cout << endl;
    }

}