#include <iostream>
#include <vector>

using namespace std;

void swapInt(int& var1, int& var2) {
    int temp = var1;
    var1 = var2;
    var2 = temp;
};

int selectionSort(vector<int>& arr) {
    int ops = 0;
    for(int i = 0; i < size(arr); ++i) {
        int index = i;

        for (int j = i + 1 ; j < size(arr); ++j){
            if (arr[index] > arr[j])
                index = j;
            ops++;
        }

        swapInt(arr[i], arr[index]);
    }

    return ops;
};

int main() {
    vector<int> arr = {5, 12, 3, 4, 7, 1, 0, 6, 19, 8, 13, 4, 2, 10, 16};

    cout << "input: ";
    for(int num: arr){
        cout << num << " ";
    }    
    cout << endl;

    int ops = selectionSort(arr);
    cout << "No of operations: " << ops << endl;

    cout << "Output: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}