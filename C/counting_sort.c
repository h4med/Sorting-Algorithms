#include <stdio.h>
#include <stdlib.h>

void displayArray(int* arr, int size) {
    int i = 0;
    printf("[");
    for(i = 0; i < size; ++i) {
        printf(" %d ", arr[i]);
    }
    printf("]\n");
};

void minMaxOfArray(int* arr, int size, int* minVal, int* maxVal) {
    int i = 0;
    *minVal = arr[0];
    *maxVal = arr[0];
    for(i = 0; i < size - 1 ; ++i) {
        if(arr[i+1] > *maxVal)
            *maxVal = arr[i + 1];
        if(arr[i+1] < *minVal)
           *minVal = arr[i + 1];
    }
};

int sort(int* arr, int size) {
    int i = 0, j = 0, cntr = 0, ops = 0;
    int arr_min, arr_max;
    minMaxOfArray(arr, size, &arr_min, &arr_max);

    int count_size = arr_max - arr_min + 1;
    int* count = (int*) calloc(count_size, sizeof(int));

    for(i = 0; i < size; i++) {
        count[arr[i] - arr_min] ++;
        ops++;
    }

    for(i = arr_min; i <= arr_max; i++){
        for (j = 0; j < count[i - arr_min] ; j++) {
            arr[cntr] = i ;
            cntr++;
            ops++;
        }
    } 

    free(count);
    return ops;
};

int main() {
    int numbers[] = {5, 10, 5, 2, 5, 9, 2, 6, 5, 3, 2};
    int i = 0;

    int size = sizeof(numbers)/sizeof(int);
    displayArray(numbers, size);

    int ops = sort(numbers, size);
    printf("No of operations: %d\n", ops);
    displayArray(numbers, size);

    return 0;
}
/*
**output**
[ 5  10  5  2  5  9  2  6  5  3  2 ]
No of operations: 22
[ 2  2  2  3  5  5  5  5  6  9  10 ]
*/