while True:

    s = input()
    if s == "*": break

    c = s[0].lower()
    res = "Y"

    for w in s.split(" "):
        if w[0].lower() != c:
            res = "N"
            break
    print(res)
