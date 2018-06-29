from random import *
a=[]
n=int(input("Entre the valure of n"))
for i in range(0,n):
 a+=[randrange(1,1000)]

print(a)

for i in range(0,n):
 pivot=a[i]
 j=i-1
 
 while j>=0 and pivot < a[j]:
   a[j+1]=a[j]
   j=j-1
 a[j+1]=pivot
print(a) 
