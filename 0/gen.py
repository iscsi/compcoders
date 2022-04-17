import sys
import random

n = int(sys.argv[1])
random.seed(n)
print("{}".format(n))
for i in range(n):
	r = random.randint(0, 1000000000)
	print("{}".format(r), end = " ")
print("")

for i in range(n):
	r = random.randint(0, 1000000000)
	print("{}".format(r), end = " ")
print("")
