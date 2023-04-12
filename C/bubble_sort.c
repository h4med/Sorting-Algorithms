#include <stdio.h>

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

int sort(int* arr, int size){
    int ops = 0, i= 0, j = 0, k = 0;
    int bubble_found;

    for(i = 0; i < size; ++i){
        bubble_found = 0;
        for(j = 0; j < size - i - 1; ++j){
            ops++;
            if(arr[j] > arr[j+1]){
                swapInt(&arr[j], &arr[j+1]);
                bubble_found = 1;
            }
        }
        if (bubble_found == 0)
            break;
    }
    return ops;
}

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
No of operations: 54
[ 2  2  2  3  5  5  5  5  6  9  10 ]
*/