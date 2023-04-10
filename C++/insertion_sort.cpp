#include <iostream>
#include <vector>

using namespace std;

int insertionSort(vector<int>& arr) {
    int ops = 0;
    for(int idx = 1; idx <size(arr); ++idx) {
        int item = arr[idx];
        while (idx > 0 && item < arr[idx-1])
        {
            arr[idx] = arr[idx - 1];
            --idx;
            ++ops;
        }
        arr[idx] = item;
    }

    return ops;
}

int main() {
    vector<int> arr = {5, 12, 3, 4, 7, 1, 0, 6, 19, 8, 13, 4, 2, 10, 16};

    cout << "input: ";
    for(int num: arr){
        cout << num << " ";
    }    
    cout << endl;

    int ops = insertionSort(arr);
    cout << "No of operations: " << ops << endl;

    cout << "Output: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}