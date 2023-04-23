import random

def quickSort(arr, start, end):
    if start == end:
        return

    i = start
    j = end
    pivot_idx = random.randint(i, j)
    pivot = arr[pivot_idx]

    while i < j:
        while arr[i] < pivot:
            i += 1
        while arr[j] > pivot:
            j -= 1

        if i <= j:
            arr[i], arr[j] = arr[j], arr[i]
            i += 1
            j -= 1

    if start < j:
        quickSort(arr, start, j)

    if end > i:
        quickSort(arr, i, end)
    
    return arr

A=[5, -1, 3, 2, -4, 2, 8, 1, 0, -7, 9, 6, 1, 4]

print(A)
A = quickSort(A, 0, len(A)-1)
print(A)