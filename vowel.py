VoWel=str(input())
LIST=['a','e','i','o','u','A','E','I','O','U']
if VoWel in LIST:
    print("Vowel")
elif(VoWel.isalpha()):
    print("Consonant")
else:
    print("invalid")
