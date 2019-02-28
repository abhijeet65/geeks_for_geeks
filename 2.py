t=int(input("test cases"))

for _ in range(0,t):
	a=input("Enter 1st")
	b=input("Enter 2nd")
	maxcount=9999
	flag=0
	for j in range(0,len(a)):
		if b[0]==a[j]:
			p=j
			q=0
			k=0
			count=0
			while(q < len(b)):
				if(a[p]==b[q]):
					k+=1
					p+=1
					q+=1
				else:
					count=count+1
					p+=1
				if (p >= len(a)):
					break
				
			if(k==len(b)):
				if(count < maxcount):
					maxcount=count
					flag=1
	if(flag==0):
		print("Not possible")
	print(maxcount)
					
