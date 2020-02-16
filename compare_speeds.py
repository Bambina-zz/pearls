import time
import csv
import juggling_algorithm
import block_swap_algorithm
import reversal_algorithm

# N: size of test data(array)
N = 1000000
# rotdist: rotation distance
MAX_ROTDIST = 100
test_data = range(N)
libs = [juggling_algorithm, block_swap_algorithm, reversal_algorithm]
header = ["juggling", "block_swap", "reversal"]
results = [header]

rotdist = 1
while rotdist <= MAX_ROTDIST:
    row = []
    for lib in libs:
        t1 = time.time()
        y = lib.rotate(test_data, rotdist)
        row.append(time.time() - t1)
    rotdist += 1
    results.append(row)

with open('compare_speeds.csv', 'w') as f:
    writer = csv.writer(f)
    writer.writerows(results)