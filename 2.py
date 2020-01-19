# input  [1,2,3,4,5,6,7,8,9,10]
# rotate 3 times
# output [4,5,6,7,8,9,10,1,2,3]
x = [1,2,3,4,5,6,7,8,9,10]
rotdist = 3

def rotate():
    n = len(x)
    if rotdist == 0 or rotdist == n:
        return x

    i = p = rotdist
    j = n - p

    while i != j:
        if i > j:
            swap(p-i, p, j)
            i -= j
        else:
            swap(p-i, p+j-i, i)
            j -= i
    swap(p-i, p, i)

def swap(a, b, m):
    i = 0
    while i < m:
        tmp = x[a+i]
        x[a+i] = x[b+i]
        x[b+i] = tmp
        i+=1

rotate()
print(x)
