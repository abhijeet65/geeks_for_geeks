def word_frequency(s,n):
  dict={}
  for i in list(s):
      if(i!=" "):
          dict[i]=dict.get(i,0)+1
  p={}
  rict=sorted(dict.items(), key=lambda x: x[1],reverse=True)
  print(rict)
  for w in rict:
    if(n==0):
      break
    p[k]=w[0]
    n=n-1
  return p

dict=word_frequency("the the the quick quick brown brown brown brown fox jumps jumps over",5)
print(dict)
