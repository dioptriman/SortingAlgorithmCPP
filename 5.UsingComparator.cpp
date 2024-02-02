#include <iostream>
#include<algorithm>
using namespace std;

/*
    Time Complexity = O(N log N)
*/

bool compare(int a, int b){
    return a < b;
}

int main(){
    //Unsorted Array
    int arr[] = {5, 8, 4, 7, 9, 20, -3, -12};
    int n = sizeof(arr) / sizeof(int);

    //Sorting Algorithm
    //Passing a function as parameter
    sort(arr, arr + n, compare); 
    
    //Using in-built comparator
    sort(arr, arr + n, greater<int>());
    

    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    return 0;
}