A = [5, 2, -3, 4, 6, -7, 1, 9, 12, 5, -6]
print(A)

for k in range(1, len(A)):
    item = A[k]
    i = k

    while i > 0 and item < A[i - 1]:
        A[i] = A[i-1]
        i -= 1
    A[i] = item
    print(A)