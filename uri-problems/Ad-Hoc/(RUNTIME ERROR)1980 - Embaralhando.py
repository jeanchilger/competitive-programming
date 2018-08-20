while True:
    words = list(str(input()).split(" "))
    if words[0] == "0": break

    for s in words:
        f = 1
        n = len(s)
        while n > 1:
            f *= n;
            n -= 1

        print (f)
