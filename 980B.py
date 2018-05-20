def main():
	n, k = [int(x) for x in input().split()]
	if 2*(n-2) < k:
		print('NO')
	else:
		print('YES')
		mat = [['.']*n for x in range(4)]
		if k % 2 == 0:
			for i in range(1,k//2+1):
				mat[1][i] = '#'
				mat[2][i] = '#'
			for i in range(4):
				print(''.join(mat[i]))
		else:
			c = k
			print('.'*n)
			for i in range(1,3):
				if c >= n-2:
					print(('#' * (n-2)).center(n,'.'))
					c -= n-2
				elif c>0:
					if c % 2 == 1:
						print(('#' * c).center(n, '.'))
					else:
						print('.'+('.' * (n-c-2)).center(n-2, '#')+'.') 
					c -= n-2
				else:print('.'*n)
			print('.'*n)
if __name__ == '__main__':
	main()