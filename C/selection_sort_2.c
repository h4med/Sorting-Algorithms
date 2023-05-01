#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void displayArray(int* arr, int size) {
    int i = 0;
    printf("[");
    for(i = 0; i < size; ++i) {
        printf(" %d ", arr[i]);
    }
    printf("]\n");
};

int findSmallestIdx(int* arr, int size){
    int smallest = arr[0];
    int smallestIdx = 0;
    for(int i = 1; i < size; i++) {
        if (smallest > arr[i]) {
            smallest = arr[i];
            smallestIdx = i;
        }
    }
    return smallestIdx;
}

int* sort(int* arr, int size) {
    int* newArr = (int*)malloc(size * sizeof(int));
    for(int i = 0; i < size; i++) {
        int smallestIdx = findSmallestIdx(arr, size);
        newArr[i] = arr[smallestIdx];
        arr[smallestIdx] = INT_MAX;
    }
    return newArr;
}

int main() {
    int numbers[] = {5, 10, 5, 2, 5, 9, 2, 6, 5, 3, 2};
    int i = 0;

    int size = sizeof(numbers)/sizeof(int);
    displayArray(numbers, size);

    int* sorted = sort(numbers, size);

    displayArray(sorted, size);

    return 0;
}
/*
**output**
[ 5  10  5  2  5  9  2  6  5  3  2 ]
[ 2  2  2  3  5  5  5  5  6  9  10 ]
*/