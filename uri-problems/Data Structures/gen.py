import random

n = random.randint(10**5-1, 10**5)
q = random.randint(10**5-1, 10**5)
m = random.randint(40, 50)
print(n, q, m)
for i in range(n):
    print(random.randint(1, m), end=" ")

print()
for i in range(q):
    t = random.randint(1, 2)
    a = random.randint(1, n)
    if t == 1:
        b = random.randint(1, n)

        if a > b:
            t1 = a
            a = b
            b = t1
    else:
        b = random.randint(1, m)

    print(t, a, b)
