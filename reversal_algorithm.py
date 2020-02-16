# input  [1,2,3,4,5,6,7,8,9,10]
# rotate 3 times
# output [4,5,6,7,8,9,10,1,2,3]

# AB -> BA
# (ArBr)r -> BA

# x = [1,2,3,4,5,6,7,8,9,10]
# rotdist = 3

def rotate(array, rotdist):
    n = len(array)
    if rotdist == 0 or rotdist == n:
        return array
    # A: 0..rotdist-1
    reverse(array, 0, rotdist-1)
    # B: rotdist..n-1
    reverse(array, rotdist, n-1)
    # (ArBr)r
    reverse(array, 0, n-1)
    return array

def reverse(array, start, end):
    i = 0
    length = end - start + 1
    while i < length/2:
        tmp = array[i+start]
        array[i+start] = array[end-i]
        array[end-i] = tmp
        i += 1
    return array

# rotate(x, rotdist)
# print(x)
