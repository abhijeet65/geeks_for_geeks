

a=[]
str=input()
a=str.split(".")
print(a[2])
b=[]
n=len(a)
for i in range(0,n):
 s=a[i]
 b.append(s[::-1])
z=''
for i in b:
 z+=i+'.'
z=z[:-1]
print(z)