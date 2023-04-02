#include <iostream>
using namespace std;

void swap(int arr[], int i , int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int sort(int arr[], int size){
    int ops = 0;
    for(int i = 0; i < size; i++){
        bool bubble_found = false;
        for(int j = 0; j < size - i - 1; j++){
            ops++;
            if(arr[j] > arr[j+1]){
                swap(arr, j, j+1);
                bubble_found = true;
            }
        }
        if (bubble_found == false)
            break;
    }

    return ops;
}

int main() {
    int numbers[15] = {5, 12, 3, 4, 7, 1, 0, 6, 19, 8, 13, 4, 2, 10, 16};
    
    cout << "input: ";
    for(int num: numbers){
        cout << num << " ";
    }    
    cout << endl;

    int ops = sort(numbers, size(numbers));

    cout << "No of operations: " << ops << endl;
    cout << "Output: ";
    for(int num: numbers){
        cout << num << " ";
    }    
    cout << endl;


    return 0;
}