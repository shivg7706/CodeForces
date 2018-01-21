def main():
	s=input()
	l=s.split("WUB")
	i=[]
	for k in l:
		if k!='':
			i.append(k)
	print(" ".join(i)) 
if __name__ == '__main__':
	main()