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

void swapInt(int* var1, int* var2) {
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
};

int partition(int* arr, int start, int end){
    int pivot = arr[end];
    int i = start - 1;
    for(int j = start; j < end; j++){
        if(arr[j] <= pivot){
            i++;
            swapInt(&arr[i], &arr[j]);
        }
    }
    swapInt(&arr[end], &arr[i + 1]);
    return i + 1;
};

void sort(int* arr, int start, int end) {
    if(start < end){
        int pivot_inedx = partition(arr, start, end);
        sort(arr, start, pivot_inedx - 1);
        sort(arr, pivot_inedx + 1, end);
    }
};

int main() {
    int numbers[] = {5, 10, 5, 2, 5, 9, 2, 6, 5, 3, 2};
    int size = sizeof(numbers)/sizeof(int);

    displayArray(numbers, size);

    sort(numbers, 0, size - 1);
    
    displayArray(numbers, size);
    
    return 0;
}
/*
**output**
[ 5  10  5  2  5  9  2  6  5  3  2 ]
[ 2  2  2  3  5  5  5  5  6  9  10 ]
*/