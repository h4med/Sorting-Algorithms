A = [5, 12, 3, 4, 7, 1, 0, 6, 19, 8, 13, 4, 2, 10, 16]

n = len(A)
print("Len: ", n)
print("Input: ", A)

ops = 0
for i in range(n - 1):
    bubble_found = False
    for j in range(n-1, i, -1):
        ops += 1
        if A[j] < A[j-1]:
            A[j], A[j-1] = A[j-1], A[j]
            bubble_found = True
    if not bubble_found:
        break
            
    # print(f"i: {i+1}, j:{j}, A[j]: {A[j]}, {A}")

print("No of Operations: ", ops)
print("Output: ",A)