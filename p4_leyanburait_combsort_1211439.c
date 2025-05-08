// leyan burait
//1211439
//#1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// global array int with size =100
int newArrayInt[100];
//global array character with size =100
char newArrayChar[100];
// swap the integer in integer array
void swapInt(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
// function to swap the character in char array

void swapChar(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}
// function comb sort of integer ascanding
void combSortInt(int arr[], int n) {
    // number of element in array = gap
    int gap = n;
    // shrink factor : r = 1.3 by WIKA search in report
    float shrink = 1.3;
    // limit if array sort
    int sorted = 0;
// update n = gap = number of element by divide it by 1.3 : r : shrink factor
    while (gap > 1 || sorted) {
            //\[(gap == 1) \land (\text{no swaps occurred in the last pass})\]
        if (gap > 1) {
            gap = gap / shrink;
        }

        sorted = 0;
// will add to last update of gap (gap/r) to i start 0 then iteration until i + gap < number of element:n
        for (int i = 0; i + gap < n; i++) {
                // swap element if arr[i] > arr[i + gap] this sort ascanding
                                // in index i if element larger than element in index i+gap then swap it

            if (arr[i] > arr[i + gap]) {
                swapInt(&arr[i], &arr[i + gap]);
                // update sorted to 1
                sorted = 1;
            }
        }
    }
}
// function comb sort of character ascending
void combSortChar(char arr[], int n) {
        // number of element in array = gap

    int gap = n;
        // shrink factor : r = 1.3 by WIKA search in report
    float shrink = 1.3;
    int sorted = 0;

    while (gap > 1 || sorted) {
        if (gap > 1) {
            gap = gap / shrink;
        }

        sorted = 0;
// will add to last update of gap (gap/r) to i start 0 then iteration until i + gap < number of element:n
// this sort ascanding
        for (int i = 0; i + gap < n; i++) {
                // in index i if element larger than element in index i+gap then swap it
            if (arr[i] > arr[i + gap]) {
                swapChar(&arr[i], &arr[i + gap]);
                                // update sorted to 1

                sorted = 1;
            }
        }
    }
}
// function to sort integer desending of  integer type
void combSortIntDesc(int arr[], int n) {
            // number of element in array = gap

    int gap = n;
            // shrink factor : r = 1.3 by WIKA search in report

    float shrink = 1.3;
    int sorted = 0;

    while (gap > 1 || sorted) {
        if (gap > 1) {
            gap = gap / shrink;
        }

        sorted = 0;

        for (int i = 0; i + gap < n; i++) {
                                // in index i if element less than element in index i+gap then swap it

            if (arr[i] < arr[i + gap]) {
                swapInt(&arr[i], &arr[i + gap]);
                sorted = 1;
            }
        }
    }
}
// function to sort integer descending of  character type

void combSortCharDesc(char arr[], int n) {
            // number of element in array = gap

    int gap = n;
            // shrink factor : r = 1.3 by WIKA search in report

    float shrink = 1.3;
    int sorted = 0;
// iteration until the value of gap ~=1
    while (gap > 1 || sorted) {
        if (gap > 1) {
            gap = gap / shrink;
        }

        sorted = 0;

        for (int i = 0; i + gap < n; i++) {
        // in index i if element less than element in index i+gap then swap it
            if (arr[i] < arr[i + gap]) {
                swapChar(&arr[i], &arr[i + gap]);
                sorted = 1;
            }
        }
    }
}

int main() {
    int n;
    int type;

    printf("\nEnter the number of elements to store in array: ");
    scanf("%d", &n);
// local array of int & char
    int arrayInt[n];
    char arrayChar[n];

    printf("\nEnter 1 for integer input or 2 for character input: ");
    scanf("%d", &type);

    if (type == 1) {
        printf("\nGenerating random integer elements...\n");
        srand(time(0)); // Initialize random seed

        for (int i = 0; i < n; i++)
            arrayInt[i] = rand() % 100;

        printf("\nGenerated integer elements: ");
        for (int i = 0; i < n; i++)
            printf("%d\t", arrayInt[i]);
    } else if (type == 2) {
        printf("\nGenerating random character elements...\n");
        srand(time(0)); // Initialize random seed

        for (int i = 0; i < n; i++)
            arrayChar[i] = 'A' + rand() % 26;

        printf("\nGenerated character elements: ");
        for (int i = 0; i < n; i++)
            printf("%c\t", arrayChar[i]);
    } else {
        printf("\nInvalid input type entered.");
        return 0;
    }

    printf("\n\nSorting using Comb Sort in ascending order...\n");

    switch (type) {
        case 1:
            for (int i = 0; i < n; i++)
                newArrayInt[i] = arrayInt[i];
            combSortInt(newArrayInt, n);
            printf("\nSorted array in ascending order:\n");
            for (int i = 0; i < n; i++)
                printf("%d\t", newArrayInt[i]);
            break;

        case 2:
            for (int i = 0; i < n; i++)
                newArrayChar[i] = arrayChar[i];
            combSortChar(newArrayChar, n);
            printf("\nSorted array in ascending order:\n");
            for (int i = 0; i < n; i++)
                printf("%c\t", newArrayChar[i]);
            break;

        default:
            printf("\nInvalid input type entered.");
            return 0;
    }

    printf("\n\nSorting using Comb Sort in descending order...\n");

    switch (type) {
        case 1:
            for (int i = 0; i < n; i++)
                newArrayInt[i] = arrayInt[i];
            combSortIntDesc(newArrayInt, n);
            printf("\nSorted array in descending order:\n");
            for (int i = 0; i < n; i++)
                printf("%d\t", newArrayInt[i]);
            break;

        case 2:
            for (int i = 0; i < n; i++)
                newArrayChar[i] = arrayChar[i];
            combSortCharDesc(newArrayChar, n);
            printf("\nSorted array in descending order:\n");
            for (int i = 0; i < n; i++)
                printf("%c\t", newArrayChar[i]);
            break;

        default:
            printf("\nInvalid input type entered.");
            return 0;
    }

    return 0;
}

