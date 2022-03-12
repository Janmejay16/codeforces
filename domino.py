def domino(m,n):
    if (m%2==0 and n%2==0):    
        return int(m*n/2)
    elif (m%2==0 and n%2==1):
        return int(((n-1)/2)*m + (m/2))
    elif (m%2==1 and n%2==1):
        return int(((n-1)/2)*m + ((m-1)/2))
    elif (m%2==1 and n%2==0):
        return int(((m-1)/2)*n + (n/2))
    return -1

m,n = map(int,input().split())
print(domino(m,n))