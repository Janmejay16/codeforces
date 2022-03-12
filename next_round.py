def next_round(n,k,arr):
    count=0
    for i in arr:
        if i>=arr[k-1] and i>0:
            count+=1
    print(count)

n,k = input().split()
next_round(int(n),int(k),list(map(int,input().split())))