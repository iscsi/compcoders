import sys
import random

n = int(sys.argv[1])
random.seed(n)
arr = []
queries = []
for i in range(n):
	r = random.randint(0, 1000000000000000000)
	arr.append(r)
	rq = random.randint(0, 1000000000000000000)
	queries.append(rq)

arr.sort()
queries.sort()


print("{}".format(n))

for a in arr:
	print("{}".format(a), end = " ")
print("")

for q in queries:
	print("{}".format(q), end = " ")
print("")
