#include <iostream>
#include <vector>

using namespace std;

template <typename T>
vector<T> quickSort(const vector<T>& arr) {
    if(arr.size() < 2)
        return arr;
    
    const T* pivot = &arr.front() + arr.size() / 2 - 1;
    vector<T> lessTP;
    vector<T> greaterTP;

    for(const T* item = &arr.front(); item <= &arr.back(); item++){
        if(item == pivot) continue;
        if(*item <= *pivot) lessTP.push_back(*item);
        else greaterTP.push_back(*item);
    }

    vector<T> sorted_lessTP = quickSort(lessTP);
    vector<T> sorted_greaterTP = quickSort(greaterTP);

    sorted_lessTP.push_back(*pivot);
    sorted_lessTP.insert(sorted_lessTP.end(), sorted_greaterTP.begin(), sorted_greaterTP.end());

    return sorted_lessTP;
}

int main() {
    vector<int> arr = {5, 12, 3, 4, 7, 1, 0, 6, 19, 8, 13, 4, 2, 10, 16};
   
    cout << "input: ";
    for(int num: arr){
        cout << num << " ";
    }    
    cout << endl;

    vector<int> sorted = quickSort(arr);

    cout << "Output: ";
    for(int num: sorted){
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