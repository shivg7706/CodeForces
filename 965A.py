from math import ceil
def main():
	k, n, s, p = [int(x) for x in input().split()]

	ans = ceil((ceil(n/s)*k )/p)

	print(ans)
if __name__ == '__main__':
	main()