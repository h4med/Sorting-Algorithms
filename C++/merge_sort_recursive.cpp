#include <iostream>
#include <vector>

using namespace std;


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