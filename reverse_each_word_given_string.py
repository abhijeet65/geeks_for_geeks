#code

t=int(input())
while(t>0):
    

 a=[]
 str=input()
 a=str.split(".")
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
 t=t-1