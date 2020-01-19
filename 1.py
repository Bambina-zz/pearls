# input  [1,2,3,4,5,6,7,8,9,10]
# rotate 3 times
# output [4,5,6,7,8,9,10,1,2,3]
x = [1,2,3,4,5,6,7,8,9,10]
times = 3

def rotate(input_list, times):
    counter = 0
    start = 0
    pos_to = start
    pos_from = (pos_to + times) % len(input_list)
    tmp = input_list[start]

    while counter < len(input_list):
        input_list[pos_to] = input_list[pos_from]
        counter+=1
        pos_to = pos_from
        pos_from = (pos_to + times) % len(input_list)
        if pos_from == start:
            input_list[pos_to] = tmp
            counter+=1
            start+=1
            pos_to = start
            pos_from = (pos_to + times) % len(input_list)
            tmp = input_list[start]

    return input_list


result = rotate(x, times)
print(result)
