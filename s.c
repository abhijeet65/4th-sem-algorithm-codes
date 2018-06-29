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
{
pos=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[pos])
pos=j;
}
if(i!=pos)
{
t=a[pos];
a[pos]=a[i];
a[i]=t;
}
}

printf("Sorted array is \n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}

