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
    int numbers[15] = {5, 12, 3, 4, 7, 1, 0, 6, 19, 8, 13, 4, 2, 10, 16};
    int i = 0;

    int size = sizeof(numbers)/sizeof(int);
    displayArray(numbers, size);


    int ops = sort(numbers, size);
    printf("No of operations: %d\n", ops);
    displayArray(numbers, size);
    
    return 0;
}