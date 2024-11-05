/*
Given an Integer n and a list arr. Sort the array using bubble sort algorithm.
Input: n = 5, arr[] = {4, 1, 3, 9, 7}
Output: 1 3 4 7 9
Link: https://www.geeksforgeeks.org/problems/bubble-sort/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
*/
    void bubblesort (int arr[],int size) {
    for (int i = 0; i < size - 1;i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    }