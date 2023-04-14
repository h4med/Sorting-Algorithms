#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayArray(const int* arr, int size) {
    int i = 0;
    printf("[");
    for(i = 0; i < size; ++i) {
        printf(" %d ", arr[i]);
    }
    printf("]\n");
};

void merge(const int* arr1, int sz1, const int* arr2, int sz2, int* out) {
    int i1, i2, iout;
    i1 = i2 = iout = 0;

    while((i1 < sz1) && (i2 < sz2) ) {
        if(arr1[i1] < arr2[i2])
            out[iout++] = arr1[i1++];
        else
            out[iout++] = arr2[i2++];
    }

    // One of the halfs will have elements remaining
    while(i1 < sz1)
        out[iout++] = arr1[i1++];

    while(i2 < sz2)
        out[iout++] = arr2[i2++];
};

void sort(const int* arr, int size, int* out) {
    int* arrLeft;
    int* arrRight;
    int mid;

    if(size < 2){
        memcpy(out, arr, size * sizeof(int));
    } 
    else{
        mid = size / 2;
        arrLeft = (int*) malloc(sizeof(int) * mid);
        arrRight = (int*) malloc(sizeof(int) * (size - mid));

        sort(arr, mid, arrLeft);
        sort(arr + mid, size - mid, arrRight);

        merge(arrLeft, mid, arrRight, size - mid, out);

        free(arrLeft);
        free(arrRight);
    }
};

int main() {
    int numbers[] = {5, 10, 5, 2, 5, 9, 2, 6, 5, 3, 2};

    int size = sizeof(numbers)/sizeof(int);
    int out[size];

    displayArray(numbers, size);

    sort(numbers, size, out);
    // printf("No of operations: %d\n", ops);
    displayArray(out, size);

    return 0;
}
/*
**output**
[ 5  10  5  2  5  9  2  6  5  3  2 ]
[ 2  2  2  3  5  5  5  5  6  9  10 ]
*/