#include<iostream>
using namespace std;

/*
n=4

1111
 222
  33
   4


space  num
0       4
1       3
2       2
3       1

space loop= 0 to i
num loop = 0 to n-i
*/

int main(){
    int n ;
    cout << "Enter the value of n: ";
    cin >> n;
    
    for (int i =0 ; i < n ; i++){
        for (int j = 0 ; j < i ; j++){
            cout << " ";
        }
        for (int j = 0; j < n-i ; j++){
            cout << n-i ;
        }
        cout << endl;
       
    }
}