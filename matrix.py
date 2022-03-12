matrix = []
x = 0
y = 0

for i in range(5):
    row = list(map(int, input().split()))
    if row.count(1) == 1:
        j = row.index(1)
        x = i
        y = j
    matrix.append(row)
print(abs(x-2) + abs(y-2))