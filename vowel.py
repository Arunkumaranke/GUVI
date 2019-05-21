a=str(input())
LIST=['a','e','i','o','u','A','E','I','O','U']
if a in LIST:
    print("Vowel")
elif(a.isalpha()):
    print("Consonant")
else:
    print("Invalid")
