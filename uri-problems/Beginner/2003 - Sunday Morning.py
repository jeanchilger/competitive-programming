while True:
    try:
        l = list(input().split(":"))
        h = int(l[0]) + 1
        m = int(l[1])

        delay_h = h - 8
        delay_m = m

        if h < 8:
            print("Atraso maximo: 0")
        elif h == 8:
            print("Atraso maximo:", delay_m)
        else:
            print("Atraso maximo:",delay_h * 60 + delay_m)

    except:
        break
