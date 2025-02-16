// program to swap min and max element of array
#include<iostream>
using namespace std;



void swap(int arr[],int size,int min_index,int max_index){
    int temp;
    temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;

    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }


}
void findminmax(int arr[],int size){
    int min = arr[0];
    int max = arr[0];
    int min_index;
    int max_index;
    for(int i=0;i<5;i++){
        if(arr[i]<=min){
            min = arr[i];
            min_index=i;
        }
        if(arr[i]>=max){
            max = arr[i];
            max_index=i;
        }

    }
    cout << min ;
    cout << min_index;
    cout << max;
    cout << max_index;

    swap(arr,size,min_index,max_index);
}

int main(){
int arr[5] = {11 , 12 ,  999 , 13 , 1 };
int size = 5;

findminmax(arr,size);


return 0;
}