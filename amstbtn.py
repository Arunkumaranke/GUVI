[au,bu]=list(map(int,input().split()))

 
for num in range(au,bu):
   sum = 0
 

   c = num
   while c > 0:
       digit = c % 10
       sum += digit ** 3
       c//= 10
 
   if num == sum:
       print(num,end=" ")
