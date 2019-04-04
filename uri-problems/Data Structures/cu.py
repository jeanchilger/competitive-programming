import random

n = random.randint(100, 1000)
k = random.randint(100, 1000)
print(n, k)
c = ['C', 'P']

l = []
for i in range(n-1):
    print(random.randint(-100, 100), end=' ')
print(random.randint(-100, 100))



for i in range(k):
    a = random.choice(c)
    print(a, end=" ")
    if a == 'C':
        print(random.randint(1, 10**5), random.randint(-100, 100))
    else:
        f = random.randint(1, 10**5)
        g = random.randint(1, 10**5)
        if g > f:
            t = f
            f = g
            g = t
        print(f, g)



