cases = 0
while True:
    try:
        v = float(input())
        d = float(input())

        area = 3.14 * (d / 2) ** 2
        height = v / area

        print("ALTURA = {:.2f}".format(height))
        print("AREA = {:.2f}".format(area))

    except:
        break
