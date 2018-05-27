total = 0
friends = 0
while True:
    try:
        name = input()
        if not name: break
        dist = int(input())
        if not dist: break

        total += dist
        friends += 1

    except:
        break

print("%.1f" % (total/friends))
