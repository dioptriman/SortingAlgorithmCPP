#include <iostream>
using namespace std;

/*
    Time Complexity = O(N^2)
*/

void selectionSort(int * arr, int n){

    for(int i = 0; i <= n-2; i++){
        int current = arr[i];
        int min_pos = i;

        for(int j = i; j < n; j++){
            if(arr[j] < arr[min_pos]){
                min_pos = j;
            }
        }

        swap(arr[min_pos], arr[i]);

    }

}

int main(){
    //Unsorted Array
    int arr[] = {5, 8, 4, 7, 9, 20, -3, -12};
    int n = sizeof(arr) / sizeof(int);

    //Sorting Algorithm
    selectionSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    return 0;
}