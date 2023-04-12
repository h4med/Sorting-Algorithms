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

int sort(int* arr, int size) {
    int i, j, item;
    int ops = 0;

    for(i = 1; i < size ; i++){
        item = arr[i];

        while(i > 0 && item < arr[i - 1]){
            arr[i] = arr[i - 1];
            i--;
            ops++;
        }
        arr[i] = item;
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