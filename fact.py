au=int(input())
f=1;  
if au<0:
   print("Invalid input");
else:
    while(au>0):
        f=f*au
        au=au-1
    print(f)
