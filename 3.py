# input  [1,2,3,4,5,6,7,8,9,10]
# rotate 3 times
# output [4,5,6,7,8,9,10,1,2,3]

x = [1,2,3,4,5,6,7,8,9,10]
rotdist = 7
length = len(x)

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

def rotate():
    for i in range(gcd(length, rotdist)):
        p = i
        j = p + rotdist
        tmp = x[p]
        counter = 0
        while counter != 1:
            if j >= length:
                j -= length
            if j == i:
                counter += 1
                break
            x[p] = x[j]
            p = j
            j += rotdist
        x[p] = tmp

rotate()
print(x)
