while True:
    try:
        n = int(input())
        if n == "": break
        n = int(n)
        arr = []
        for i in range(n):
            lines = []
            for j in range(n):
                if i + j == n - 1:
                    lines.append(2)
                elif i == j:
                    lines.append(1)
                else:
                    lines.append(3)
            arr.append(lines)

        for i in range(n):
            for j in range(n-1):
                print(arr[i][j], end="")
            print(arr[i][n-1])
    except:
        break
