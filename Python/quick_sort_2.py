def quickSort(arr):
    if len(arr) < 2:
        return arr
    
    pivot = arr[0]

    lessThanPivot = [i for i in arr[1:] if i <= pivot]
    greaterThanPivot = [i for i in arr[1:] if i > pivot]

    return quickSort(lessThanPivot) + [pivot] + quickSort(greaterThanPivot)


A = [5, 10, 5, 2, 5, 9, 2, 6, 5, 3, 2]
print("Input:", A)
print("Output:", quickSort(A))

