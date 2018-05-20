def main():
	n, k = [int(x) for x in input().split()]
	inp = [int(x) for x in input().split()]
	for i in range(n):
		inp[i] = (inp[i]//k) * k
	print(*inp)
if __name__ == '__main__':
	main()