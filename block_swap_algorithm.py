# input  [1,2,3,4,5,6,7,8,9,10]
# rotate 3 times
# output [4,5,6,7,8,9,10,1,2,3]

# x = [1,2,3,4,5,6,7,8,9,10]
# rotdist = 3

def rotate(array, rotdist):
    n = len(array)
    if rotdist == 0 or rotdist == n:
        return array

    i = p = rotdist
    j = n - p

    while i != j:
        if i > j:
            swap(array, p-i, p, j)
            i -= j
        else:
            swap(array, p-i, p+j-i, i)
            j -= i
    swap(array, p-i, p, i)
    return array

def swap(array, a, b, m):
    i = 0
    while i < m:
        tmp = array[a+i]
        array[a+i] = array[b+i]
        array[b+i] = tmp
        i+=1

# rotate(x, rotdist)
# print(x)
