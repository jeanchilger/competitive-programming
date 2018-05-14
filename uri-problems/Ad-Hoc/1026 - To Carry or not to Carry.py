while True:
    try:
        n1, n2 = input().split(" ")
        print(int(n1) ^ int(n2))
    except:
        break
