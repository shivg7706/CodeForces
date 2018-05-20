def main():
	neck = input()
	count1 = neck.count('-')
	count2 = neck.count('o')
	if count1 == 0 or count2 ==0:
		print('YES')
	elif count1 % count2 == 0:
		print('YES')
	else :
		print('NO')
if __name__ == '__main__':
	main()