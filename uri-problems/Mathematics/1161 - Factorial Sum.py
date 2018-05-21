def fat(n):
    f = 1;
    while n > 1:
        f *= n;
        n -= 1
    return f



while True:
    try:
        num = list(input().split(" "))
        m = int(num[0])
        n = int(num[1])
        print(fat(m) + fat(n))


    except:
        break
