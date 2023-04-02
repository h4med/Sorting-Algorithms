def mergesort(A):
    # print(f"A: {A}")
    if len(A) < 2: 
        return A
    mid = len(A) // 2
    print(f"mid: {mid}, len(A): {len(A)}")
    B = A[:mid]
    C = A[mid:]
    print(f"B: {B}, C: {C}") # Remove comment to see running of algorithm
    B = mergesort(B)
    print(f"Here! B={B}")
    C = mergesort(C)
    print(f"Here! C={C}")
    i = j = 0
    A = []
    while i < len(B) and j < len(C):
        # print(f"i: {i}, j: {j}")
        if B[i] <= C[j]:
            A += [B[i]]
            i += 1
        else:
            A += [C[j]]
            j += 1
    A += B[i:] + C[j:]
    print(f"A: {A}") # Remove comment to see running of algorithm

    return A

A=[5, -1, 3, 2, -4, 2, 8, 1, 0, -7, 9, 6, 1, 4]

# print(A)
A = mergesort(A)
# print(A)