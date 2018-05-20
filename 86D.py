from math import sqrt
from collections import Counter 

def get_value(temp):
	cal = dict(Counter(temp))
	sum_b = 0
	for i in cal:
		sum_b += i*cal[i]*cal[i]

	return sum_b
def get_decomposed(a, n):

	decomposed = []
	blk_size = int(sqrt(n))

	for i in range(0, n, blk_size):
		if(i+blk_size <= n):
			decomposed.append(get_value(a[i:i+blk_size]))
		else :
			decomposed.append(get_value(a[i:n]))

	return decomposed

def get_query(l, r, decomposed, a):
	sum_q = 0
	blk_size = int(sqrt(len(a)))
	while l < r and l%blk_size!=0 and l!=0:
		sum_q += a[l]
	while l + blk_size <= r:
		sum_q += decomposed[l//blk_size]
		l += blk_size
	while l<=r:
		sum_q = a[l]
	return sum_q

def main():
	n, t = (int(x) for x in input().split())
	a = [int(x) for x in input().split()]
	decomposed = get_decomposed(a, n)
	print (decomposed)
	for i in range(t):
		l, r = [int(x) for x in input().split()]
		print(get_query(l, r, decomposed, a))
if __name__ == '__main__':
	main()