case = 0
while True:
    n1 = input()
    if not n1: break
    n2 = input()
    if not n2: break

    case += 1
    i = 0
    pos = 0
    sequences = 0
    while i <= len(n2)-len(n1):
        if n2[i:i+len(n1)] == n1:
            sequences += 1
            pos = i+1

        i += 1


    print("Caso #%d:" % case)
    if sequences > 0:
        print("Qtd.Subsequencias:", sequences)
        print("Pos:", pos)
    else:
        print("Nao existe subsequencia")
    print()
