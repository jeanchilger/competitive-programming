proj = 0
while True:
    try:
        inp = list(input().split(" "))
        x = float(inp[0])
        y = float(inp[1])

        proj += 1

        p = (y / x - 1) * 100

        print("Projeto {}:".format(proj))
        print("Percentual dos juros da aplicacao: {0:.2f} %".format(p))
        print()

    except:
        break;
