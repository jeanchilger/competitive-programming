while True:
    try:
        num = int(input())
        if not num:
            print("vai ter copa!")
        else:
            print("vai ter duas!")
    except:
        break
