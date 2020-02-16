# input  [1,2,3,4,5,6,7,8,9,10]
# rotate 3 times
# output [4,5,6,7,8,9,10,1,2,3]

# x = [1,2,3,4,5,6,7,8,9,10]
# rotdist = 3

def gcd(p, j):
    a = p
    b = j
    r = 1
    while r != 0:
        r = a%b
        if (r == 0):
            return b
        else:
            a = b
            b = r

def rotate(array, rotdist):
    n = len(array)
    if rotdist == 0 or rotdist == n:
        return array
    for i in range(gcd(n, rotdist)):
        p = i
        j = p + rotdist
        tmp = array[p]
        counter = 0
        while counter != 1:
            if j >= n:
                j -= n
            if j == i:
                counter += 1
                break
            array[p] = array[j]
            p = j
            j += rotdist
        array[p] = tmp
    return array

# rotate(x, rotdist)
# print(x)
