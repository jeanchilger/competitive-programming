while True:
    try:
        inp = input().split(" ")
        m = int(inp[0])
        d = int(inp[1])
        list_of_days = [0, 0, 1, 1, 2, 3, 3, 4, 4, 5, 4, 5]

        delta_m = 12 - m
        delta_d = 25 - d
        total = delta_d + (delta_m * 30) + list_of_days[delta_m]

        if total == 1:
            print("E vespera de natal!")
        elif total == 0:
            print("E natal!")
        elif total < 0:
            print("Ja passou!")
        else:
            print("Faltam %d dias para o natal!" % total)

    except:
        break
