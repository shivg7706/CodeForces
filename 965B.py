def main():
	n , k = [int (x) for x in input().split()]
	s = []
	for x in range(n):
		s.append(list(input()))

	temp = [[0]*n for x in range(n)]

	#print(s)
	for i in range(n):
		for j in range(n-k+1):
			count = 0
			for m in range(j, j+k):
				if s[i][m] == ".":
					count += 1
			if(count == k):
				for m in range(j, j+k):
					temp[i][m] += 1
	
	for i in range(n):
		for j in range(n-k+1):
			count = 0
			for m in range(j, j+k):
				if s[m][i] == ".":
					count += 1
			if(count == k):
				for m in range(j, j+k):
					temp[m][i]+= 1

	x = y =1
	maxi = 0
	for i in range(n):
		for j in range(n):
			if maxi < temp[i][j]:
				maxi, x, y = temp[i][j], i+1, j+1


	print(x, y)




if __name__ == '__main__':
	main()