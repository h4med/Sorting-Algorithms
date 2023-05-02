#include <iostream>
#include <vector>

using namespace std;

template <typename T>
int findSmallestIdx(vector<T>&arr) {
    T smallest = arr[0];
    int smallestIdx = 0;
    for(int i = 1; i < size(arr); i++) {
        if(arr[i] < smallest){
            smallest = arr[i];
            smallestIdx = i;
        }
    }
    return smallestIdx;
}

template <typename T>
vector<T> selectionSort(vector<T> arr) {
    vector<T> sorted;
    while(!arr.empty()){
        int smallestIndex = findSmallestIdx(arr);
        sorted.push_back(arr[smallestIndex]);
        arr.erase(arr.begin() + smallestIndex);
    }
    return sorted;
}

int main() {
    vector<int> arr = {5, 12, 3, 4, 7, 1, 0, 6, 19, 8, 13, 4, 2, 10, 16};

    cout << "input: ";
    for(auto num: arr){
        cout << num << " ";
    }    
    cout << endl;

    vector<int> sorted = selectionSort(arr);

    cout << "Output: ";
    for(auto num: sorted){
        cout << num << " ";
    }    
    cout << endl;

    return 0;
}