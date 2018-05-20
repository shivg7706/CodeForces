def main():
	n, k = (int(x) for x in input().split())
	array = [int(x) for x in input().split()]
	time = [int(x) for x in input().split()]
	s = 0
	temp = []
	for i in range(k):
		if time[i] == 0:
			s += array[i]
	temp.append(s)
	for i in range(1,n-k+1):
		if time[i+k-1] == 0:
			s += array[i+k-1]
		if time[i-1] == 0:
			s = s- array[i-1]
		temp.append(s)
	s = 0
	for i in range(n):
		if time[i] :
			s += array[i]
	print(s + max(temp))	




	
if __name__ == '__main__':
	main()