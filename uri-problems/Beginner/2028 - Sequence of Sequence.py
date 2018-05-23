cases = 0
while True:
    try:
        n = int(input())
        n2 = n
        count = 1
        while n2 >= 1:
            count += n2
            n2 -= 1

        cases += 1

        if not n:
            print("Caso %d: 1 numero" % (cases))
            print(0)
        else:
            print("Caso %d: %d numeros" % (cases, count))
            print(0, end=" ")

        for i in range(1, n+1):
            for j in range(i):
                if i != n or j != i-1:
                    print(i, end=" ")
                else:
                    print(i)

        print()

    except:
        break
