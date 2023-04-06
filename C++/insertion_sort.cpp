#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr) {
    for(int idx = 1; idx <size(arr); ++idx) {
        int item = arr[idx];
        while (idx > 0 && item < arr[idx-1])
        {
            arr[idx] = arr[idx - 1];
            --idx;
        }
        arr[idx] = item;
    }
}

int main() {
    vector<int> arr = {5, 2, -3, 4, 6, -7, 1, 9, 12, 5, -6};

    cout << "input: ";
    for(int num: arr){
        cout << num << " ";
    }    
    cout << endl;

    insertionSort(arr);

    cout << "Output: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}