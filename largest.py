
[qu, ru, su] = list(map(int, input().split(" ")))
if(qu>=ru) and (qu>=su):
    print(qu)
elif(ru>=qu) and (ru>=su):
    print(ru)
else:
    print(su)
