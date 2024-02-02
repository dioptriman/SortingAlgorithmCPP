#include <iostream>
using namespace std;

/*
    Time Complexity = O(N^2)
    Further Question: what is the best case for it?
*/

void bubbleSort(int arr[], int n){
    
    for(int i = 1; i <= n-1; i++){
        for(int j = 0; j <= n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }


}


int main(){
    //Unsorted Array
    int arr[] = {5, 8, 4, 7, 9, 20, -3, -12};
    int n = sizeof(arr) / sizeof(int);

    //Sorting Algorithm
    bubbleSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    
    return 0;
}