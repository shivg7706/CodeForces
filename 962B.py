def main():
	n, a, b = (int(x) for x in input().split())
	total = a + b
	string = input().split("*")
	for i in string:
		if a > b:
			a, b = b, a
		a -= min(a, len(i)//2)
		b -= min(b, len(i)-len(i)//2)
	print(total - a - b)


if __name__ == '__main__':
	main()