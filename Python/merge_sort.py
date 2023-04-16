# Implementation of MergeSort
def mergeSort(arr, s, e):
    if e - s + 1 <= 1:
        return arr

    m = (s + e) // 2

    mergeSort(arr, s, m)
    mergeSort(arr, m + 1, e)

    merge(arr, s, m, e)
    
    return arr

def merge(arr, s, m, e):
    L = arr[s: m + 1]
    R = arr[m + 1: e + 1]

    i = 0 # index for L
    j = 0 # index for R
    k = s # index for arr

    while i < len(L) and j < len(R):
        if L[i] <= R[j]:
            arr[k] = L[i]
            i += 1
        else:
            arr[k] = R[j]
            j += 1
        k += 1

    while i < len(L):
        arr[k] = L[i]
        i += 1
        k += 1
    while j < len(R):
        arr[k] = R[j]
        j += 1
        k += 1

A=[5, -1, 3, 2, -4, 2, 8, 1, 0, -7, 9, 6, 1, 4]

print(A)
A = mergeSort(A, 0, len(A)-1)
print(A)