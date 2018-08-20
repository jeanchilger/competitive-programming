proj = 0
while True:
    try:
        inp = list(input().split(" "))
        s = int(inp[0])
        va = int(inp[1])
        vb = int(inp[2])

        seconds = 0

        if vb >= va:
            print("impossivel")
        else :
            st = s / (va - vb)

            print("{0:.2f}".format(st))

    except:
        break;
