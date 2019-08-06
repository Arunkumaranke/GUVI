Prime = int(input())
if Prime > 1:
    for i in range(2, Prime):
        if (Prime % i) == 0:
            print("no")
            break
    else:
        print("yes")
else:
    print("no")
