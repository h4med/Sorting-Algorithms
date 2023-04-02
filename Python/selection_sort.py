A = [5, 12, 3, 4, 7, 1, 0, 6, 19, 8, 13, 4, 2, 10, 16]
#A = [0, 1, 2, 3, 4, 4, 5, 6, 7, 8, 10, 12, 13, 16, 19]
A = A[-1::-1]
n = len(A)
print(A)

ops = 0
for i in range(n):
    index = i
    for j in range(i+1, n):
        ops += 1
        if A[index] > A[j]:
            index = j
    A[i], A[index] = A[index], A[i]

print(A)
print(ops)