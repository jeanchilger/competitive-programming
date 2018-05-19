while True:
    try:
        slugs = int(input())
        slugs_speed = list(input().split(" "))
        for i in range(slugs):
            slugs_speed[i] = int(slugs_speed[i])

        max_speed = max(slugs_speed)
        if max_speed < 10:
            print(1)
        elif max_speed >= 10 and max_speed < 20:
            print(2)
        else:
            print(3)

    except:
        break
