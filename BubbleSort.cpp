#include <iostream>
using namespace std;

int main() {
    int size;

    //Taking array size
    cin >> size;

    int arr[size];

    // Taking values into array
    for (int i = 0; i < size ; i++) {
        cin >> arr[i] ;
    }

    // outer loop runs (size - 1) times
    for(int outerLoop = 0; outerLoop < size - 1; outerLoop++) {
        // inner loop runs (size - outerloop - 1) times
        for (int innerLoop = 0; innerLoop < size - outerLoop - 1; innerLoop++) {

            // comparing adj. elements | larger element pushed to the last index (Ascending)
            // for descending change ">" to "<" | larger element pushed to the first index (Descending)
            if (arr[innerLoop] < arr[innerLoop + 1]) {
                int temp = arr[innerLoop];
                arr[innerLoop] = arr[innerLoop + 1];
                arr[innerLoop + 1] = temp;

                // or we can use built in swap func
                // swap(arr[innerLoop],arr[innerLoop + 1]);
            }
        }
    }

    // printing sorted array elements
    for (int i = 0; i < size ; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

