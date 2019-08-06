[st,ep]=list(map(int,input().split(" ")))
arr=[]
for num in range(st,ep):
    if num > 1:
        for i in range(2, num):
            if (num % i) == 0:
                
                break
        else:
            arr=num;
            
            print(arr, end=" ")
         
