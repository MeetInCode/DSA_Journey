// #include<iostream>
// using namespace std;

// int main (){
//    int n ;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    int num = 1;
//     for (int i = 0; i < n; i++) { //outer loop number of lines
//          for (int j = 0; j < n; j++) { //inner loop increment numbers
//               cout << num << " ";
//               num ++;
//          }
//          cout << endl;
//     }
// }

#include<iostream>
using namespace std;

int main (){
   int n ;
   cout << "Enter the value of n: ";
   cin >> n;
   char num = 'A';
    for (int i = 0; i < n; i++) { //outer loop number of lines
         for (int j = 0; j < n; j++) { //inner loop increment numbers
              cout << num << " ";
              num ++;
         }
         cout << endl;
    }
}