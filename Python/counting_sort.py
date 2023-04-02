A = [5, 1, 4, 3, 4, 2, 0, 4, 5, 4, 3, 3, 1, 0, 1, 5, 5, 6]
m = max(A)
count = [0] * (m + 1)

n = len(A)
print("Len: ", n)
print("Input: ", A)

# print(count)
ops = 0;
for n in A:
    count[n] += 1
    ops += 1

# print(count)

A =[]
for i in range(m + 1):
    A += [i] * count[i]
    ops += 1

print("No of Operations: ", ops)
print("Output: ",A)
