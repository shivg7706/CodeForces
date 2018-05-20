def main():
	n, k = [int(x) for x in input().split()]
	l = [int(x) for x in input().split()]
	l.sort()
	if k == 0 :
		if l[0] != 1:
			print(l[0] - 1)
		else: 
			print(-1)
	elif n == 1 and k == 1:
		print(l[0])
	elif n == k:
		print(l[k-1])
	elif(l[k] > l[k-1]):
		print(l[k-1])
	else:
		print(-1)
if __name__ == '__main__':
	main()