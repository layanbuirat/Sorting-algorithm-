// leyan burait
// 1211439
//#1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Function to print the array of integer type
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        printf("   ");
    }
    printf("\n");
}


// Function to sort the array using Counting Sort
// int order 1 to ascanding 2 th descending
void countingSort(int arr[], int n, int max_value, int order) {
    // Create a count array to store the count of each element
    int count[max_value + 1];
    // first loop to
    //set all elements in the count array to zero at the beginning
    for (int i = 0; i <= max_value; i++) {
        count[i] = 0;
    }

    // Store the count of each element in the array
    for (int i = 0; i < n; i++) {

        count[arr[i]]++;
    }
// 1 descending sort
    // Modify the count array to store the cumulative count
    if (order == 1) {
        // Ascending order
            // update element value in count from 0 to new value as i expliane it in report
            //count[i] += count[i - 1]
        for (int i = 1; i <= max_value; i++) {
                // add the count of each element to the preceding element count
            count[i] += count[i - 1];
        }
            // // Update the count array to hold the  count


    }

     //2: Descending order
        // Starting from the second last index (max_value - 1), subtract the count of each element
        // from the succeeding element's count
     else if (order == 2) { // Descending order

        for (int i = max_value - 1; i >= 0; i--) {
                //subtract the count of each element from the succeeding element's count
            count[i] += count[i + 1];
        }
    }

    // Create a temporary array to store the sorted output
    int output[n];
    for (int i = 0; i < n; i++) {
        output[i] = 0;
    }

    // Build the sorted array : out array
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the sorted output array to the original array : input array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}



int main() {
    // of integer type
    int n;
    // of character
    int m;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Generate random values for the array of integer
    int arr[n];
    int max_value = 100; // Maximum value allowed in the array
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % (max_value + 1);
    }



    printf("Original Array: \n");
    printArray(arr, n);

    // Sort the array in ascending order
    countingSort(arr, n, max_value, 1);
    printf("Array sorted in ascending order: \n");
    printArray(arr, n);

    // Sort the array in descending order
    countingSort(arr, n, max_value, 2);
    printf("Array sorted in descending order: \n");
    printArray(arr, n);




    return 0;
}

