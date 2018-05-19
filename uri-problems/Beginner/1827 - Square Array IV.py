while True:
    try:
        n = int(input())
        arr = []
        for i in range(n):
            line = []
            for j in range(n):
                if i == j and i + j == n - 1:
                    line.append(4)
                elif (i >= n // 3 and j >= n // 3) and (i <= n - 1 - n // 3 and j <= n - 1 - n // 3):
                    line.append(1)
                elif i == j:
                    line.append(2)
                elif i + j == n - 1:
                    line.append(3)
                else:
                    line.append(0)
            arr.append(line)

        for i in arr:
            for j in i:
                print(j, end="")
            print()
        print()

    except:
        break
