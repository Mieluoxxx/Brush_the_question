n = 20
ans = 1
L = []
for i in range(1, n+1):
    for j in L:
        if i % j == 0:
            i = i//j
    L.append(i)
print(L)
for i in L:
    ans *= i
print(ans)
