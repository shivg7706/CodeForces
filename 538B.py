def main():
	num = [int(x) for x in list(input())]
	quasi_binary = []
	s = ''
	for i in range(max(num)):
		for j in range(len(num)):
			if num[j] > 0:
				s += '1'
				num[j] -= 1
			else:
				s += '0'
		quasi_binary.append(str(int(s)))
		s = ''
	print(len(quasi_binary))
	print(" ".join(quasi_binary))
if __name__ == '__main__':
	main()