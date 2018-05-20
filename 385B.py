def main():
	s = input()
	jagah = []
	for i in range(len(s) - 3):
		if s[i:i+4] == 'bear':
			jagah.append(i)
	k = -1
	total = 0
	for i in range(len(jagah)):
		total += (jagah[i] - k)*(len(s) - jagah[i] -3)
		k = jagah[i]
	print(total)
if __name__ == '__main__':
	main()