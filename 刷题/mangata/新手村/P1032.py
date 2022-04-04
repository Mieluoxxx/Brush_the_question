while True:
    try:
        n = input()
        sum = 0
        for i in range(n+1):
            sum += i
        print(sum)
    except:
        break
