#include <iostream>
#include <vector>

using namespace std;

void swapInt(int* var1, int* var2) {
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
};

int sort(vector<int>& arr){
    int ops = 0;
    for(int i = 0; i < size(arr); i++){
        bool bubble_found = false;
        for(int j = 0; j < size(arr) - i - 1; j++){
            ops++;
            if(arr[j] > arr[j+1]){
                swapInt(&arr[j], &arr[j+1]);
                bubble_found = true;
            }
        }
        if (bubble_found == false)
            break;
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

    int ops = sort(arr);

    cout << "No of operations: " << ops << endl;
    cout << "Output: ";
    for(int num: arr){
        cout << num << " ";
    }    
    cout << endl;

    cout << "No of ops: " << ops << endl;
    return 0;
}