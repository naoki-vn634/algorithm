def bubblesort(x):
    for i in range(len(x)):
        for j in range(len(x)-i):
            if x[i]>x[i+j]:
                tmp = x[i]
                x[i] = x[i+j]
                x[i+j] = tmp
    return x

def randix_sort(x,m):
    #m:最大m桁
    bucket = list()
    for i in range(10):
        bucket.append(list())
    for d in range(1,m+1,1):
        r = 10**(d-1)
        for target in x:
            key = int(int(target)/r) % 10
            bucket[key].append(target)
        
        i = 0
        for values in bucket:
            for val in values:
                x[i] = val
                i = i+1
        
        for j in range(len(bucket)):
            bucket[j]=list()
    return x