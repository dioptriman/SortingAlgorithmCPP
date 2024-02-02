#include<iostream>
using namespace std;

/*
    Time Complexity = O(N^2)
*/

void insertionSort(int * arr, int n){
    
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int prev = i - 1;
        while(prev >= 0 && arr[prev] > current){
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }

        arr[prev + 1] = current;
            

    }

}

int main(){
    //Unsorted Array
    int arr[] = {5, 8, 4, 7, 9, 20, -3, -12};
    int n = sizeof(arr) / sizeof(int);

    //Sorting Algorithm
    insertionSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    return 0;
}

