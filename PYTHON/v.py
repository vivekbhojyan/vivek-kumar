n=int(input("enter size :"))
for i in range(0,n+1):
  for j in range(0,i):
      print("",end=" ")
  
  for k in range(i,n+1):
      print("* ",end="")
  print()