def findSmallestIdx(arr):
    smallest = arr[0]
    smallestIndex = 0
    for i in range(1, len(arr)):
        if smallest > arr[i]:
            smallest = arr[i]
            smallestIndex = i

    return smallestIndex

def selectionSort(arr):
    newArr = [0] * len(arr)
    for i in range(len(arr)):
        smallestIdx = findSmallestIdx(arr)
        newArr[i] = arr.pop(smallestIdx)
    
    return newArr

A = [5, 10, 5, 2, 5, 9, 2, 6, 5, 3, 2]
print("Input:", A)
print("Output:", selectionSort(A))