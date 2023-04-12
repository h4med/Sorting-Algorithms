A = [5, 10, 5, 2, 5, 9, 2, 6, 5, 3, 2]
m = max(A)
count = [0] * (m + 1)

n = len(A)
# print("Len: ", n)
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
