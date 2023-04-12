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

int sort(int* arr, int size) {
    int i, j, index;
    int ops = 0;
    for(i = 0; i < size; i++) {
        index = i;
        for ( j = i + 1; j < size; j++)
        {
            if(arr[index] > arr[j])
                index = j;
            ops++;
        }
        swapInt(&arr[index], &arr[i]);
    }
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
No of operations: 55
[ 2  2  2  3  5  5  5  5  6  9  10 ]
*/