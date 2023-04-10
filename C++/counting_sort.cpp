#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countingSort(vector<int>& arr) {

    int maxVal = *max_element(arr.begin(), arr.end());
    int minVal = *min_element(arr.begin(), arr.end());
    int arr_size = size(arr);
    int range = maxVal - minVal + 1;
    int ops = 0;
    vector<int> count(range, 0);

    for (int i = 0; i < arr_size; ++i) {
        count[arr[i] - minVal]++;
        ops++;
    }

    int cntr = 0;
    for(int i = minVal; i <= maxVal; i++){
        for (int j = 0; j < count[i - minVal] ; j++) {
            arr[cntr] = i ;
            cntr++;
            ops++;
        }
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

    int ops = countingSort(arr);
    cout << "No of operations: " << ops << endl;

    cout << "Output: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
