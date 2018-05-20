from collections import Counter
def main():
	n = int(input())
	inp = input()
	k = []
	for i in range(n-1):
		k.append(inp[i]+inp[i+1])
	l = Counter(k)
	print(max(l, key = l.get))
if __name__ == '__main__':
	main()