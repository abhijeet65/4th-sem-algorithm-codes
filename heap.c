#include<stdio.h>

void heapify(int h[],int n)
{
int k,i,j,heap,v,n1;
n1=n;
for(i=n1/2;i>=1;i--)
{
k=i;
v=h[k];
heap=0;
while(!(heap) && 2*k<=n)
{
j=2*k;
if(j<n1)
if(h[j]<h[j+1])
j+=1;
if(v>=h[j])
heap=1;
else
{
h[k]=h[j];
k=j;
}
}
h[k]=v;
}
}







