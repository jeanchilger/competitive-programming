while True:
    try:
        l = list(input().split(" "))
        n = int(l[0])
        r = int(l[1])
        returned = list(input().split(" "))

        if n == r:
            print("*")
        else:
            not_returned = [i for i in range(1, n+1) if str(i) not in returned]

            for p in not_returned:
                print(p, end=" ")
            print()

    except:
        break
