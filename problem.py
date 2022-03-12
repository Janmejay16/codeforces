a = []
for i in range(int(input())):
    a.append(list(map(int, input().split())))
count = 0
for i in a:
    if sum(i) > 1:
        count+=1
print(count)
