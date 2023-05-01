#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void displayArray(const int* arr, int size) {
    int i = 0;
    printf("[");
    for(i = 0; i < size; ++i) {
        printf(" %d ", arr[i]);
    }
    printf("]\n");
};

void swapInt(int& var1, int& var2) {
    int temp = var1;
    var1 = var2;
    var2 = temp;
};

void quickSort(vector<int>& arr, int size) {
    if(size < 2)
        return;
    
    int pivot = arr[rand() % size];
    // cout << "pivot: " << pivot << endl;
    // cout << "rand: " << rand() << endl;
    int lower = 0;
    int upper = size - 1;

    while(lower < upper){

        while(arr[lower] < pivot)
            lower++;

        while(arr[upper] > pivot)
            upper--;
        


    }
}

int main() {
    // int numbers[] = {5, 10, 5, 2, 5, 9, 2, 6, 5, 3, 2};

    // int size = sizeof(numbers)/sizeof(int);
    // int out[size];
    vector<int> arr = {5, 12, 3, 4, 7, 1, 0, 6, 19, 8, 13, 4, 2, 10, 16};
    int n = arr.size();

    cout << "input: ";
    for(int num: arr){
        cout << num << " ";
    }    
    cout << endl;

    srand((unsigned int)time(0));
    quickSort(arr, n);
    // printf("No of operations: %d\n", ops);

    cout << "input: ";
    for(int num: arr){
        cout << num << " ";
    }    
    cout << endl;

    return 0;
}
/*
**output**
[ 5  10  5  2  5  9  2  6  5  3  2 ]
[ 2  2  2  3  5  5  5  5  6  9  10 ]
*/