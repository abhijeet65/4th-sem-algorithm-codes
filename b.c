#include<stdio.h>



void main()
{
int n;
printf("Enter array sizze\n");
scanf("%d",&n);
int a[n],pos,t,i,j;

printf("Entre the array elemnts\n");
for(i=0;i<n;i++)
//scanf("%d",&a[i]);
a[i]=rand()/10000000;

for(i=0;i<n-1;i++)
{for(j=1;j<n-i;j++)
{
if(a[j]<a[j-1])
{
t=a[j];
a[j]=a[j-1];
a[j-1]=t;
}
}
}
printf("sorted array is\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
 


