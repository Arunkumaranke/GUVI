[g,h]=list(map(int,input().split(" ")))
flag = False
for i in range(g+1,h):
    if(i%2!=0):
        if(flag):
            print(end=" ")
        print(i, end="")
        flag = True
