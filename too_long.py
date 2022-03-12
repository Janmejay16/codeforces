def too_long(word):
    if len(word)<=10:
        return word
    else:
        return word[0] + str(len(word)-2) +  word[-1]
        
for i in range(int(input())):
    print(too_long(input()))
