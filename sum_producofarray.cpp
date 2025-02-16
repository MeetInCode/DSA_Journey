// sum and product of all numbers in an array

#include <iostream>
using namespace std;

void calculate(int arr[]){
    int sum = 0;
    int product = 1;
    for(int i=0;i<5;i++){
            sum += arr[i];
            product *= arr[i];
    }
    cout << sum << endl;
    cout << product << endl;



}
int main(){
int arr[5] = {1, 2, 3, 4, 5};
calculate(arr);
return 0;
}