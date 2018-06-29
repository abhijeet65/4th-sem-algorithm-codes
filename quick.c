#include<stdio.h>



int partition(int a[],int l,int r)
{
int pivot,i,j,t,temp;
i=l;
j=r;
pivot=a[l];

while(i<j)
{
while(pivot>=a[i] && i<=r)
i++;
while(pivot<a[j] && j>l)
j--;
if(i<j)
{
t=a[j];
a[j]=a[i];
a[i]=t;
}
}
temp=a[j];
a[j]=a[l];
a[l]=temp;

return j;
}


void quicksort(int a[],int l,int r)
{
int p;
if(l<r)
{
p=partition(a,l,r);
quicksort(a,l,p-1);
quicksort(a,p+1,r);
}
}







void main(){
int n;
printf("enter the array size\n");
scanf("%d",&n);
int a[n],i,j;
printf("enter the array elemts\n");
for(i=0;i<n;i++)
a[n-i-1]=i;
for(i=0;i<n;i++)
printf("%d ",a[i]);
quicksort(a,0,n-1);

printf("sorted array is\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
}




























