while True:
    try:
        inp_data = list(input().split(" "))
        n = int(inp_data[0])
        m = int(inp_data[1])
        num = abs(abs(n) - abs(m))
        print(num)
    except:
        break
