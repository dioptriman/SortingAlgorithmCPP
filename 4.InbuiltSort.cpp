#include <iostream>
#include<algorithm>
using namespace std;

/*
    Time Complexity = O(N log N)
*/

int main(){
    //Unsorted Array
    int arr[] = {5, 8, 4, 7, 9, 20, -3, -12};
    int n = sizeof(arr) / sizeof(int);

    //Sorting Algorithm
    sort(arr, arr + n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    return 0;
}