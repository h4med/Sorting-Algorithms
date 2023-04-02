#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void countingSort(vector<int>& arr) {

    int maxVal = *max_element(arr.begin(), arr.end());
    int minVal = *min_element(arr.begin(), arr.end());
    int arr_size = size(arr);
    int range = maxVal - minVal + 1;

    vector<int> count(range, 0);

    for (int i = 0; i < arr_size; ++i) {
        count[arr[i] - minVal]++;
    }

    vector<int> output(arr.size());

    int cntr = 0;
    for(int i = minVal; i <= maxVal; i++){
        for (int j = 0; j < count[i - minVal] ; j++) {
            output[cntr] = i ;
            cntr++;
        }
    } 

    for (int i = 0; i < arr.size(); ++i) {
        arr[i] = output[i];
    }
}

int main() {
    vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    cout << "input: ";
    for(int num: arr){
        cout << num << " ";
    }    
    cout << endl;

    countingSort(arr);

    cout << "Output: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
