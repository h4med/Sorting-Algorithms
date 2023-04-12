A = [5, 10, 5, 2, 5, 9, 2, 6, 5, 3, 2]
print("Input:", A)
ops = 0
for k in range(1, len(A)):
    item = A[k]
    i = k

    while i > 0 and item < A[i - 1]:
        A[i] = A[i-1]
        i -= 1
        ops += 1
    A[i] = item
    # print(A)

print("No of Operations: ", ops)
print("Output:", A)