#include<stdio.h>
#include<time.h>


void main(){
int n;
clock_t start,end;


printf("entre the number of elets in array\n");
scanf("%d",&n);
int a[n],i,j;
printf("enter rhe array elembst\n");
for(i=0;i<n;i++)
a[i]=rand()/1000000;
int temp,temp1;

start=clock();

for(i=0;i<n-1;i++)
{
temp=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[temp])
temp=j;
}
if(temp!=i)
{
temp1=a[temp];
a[temp]=a[i];
a[i]=temp1;
}
}
end=clock();


printf("sorted array is \n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
float time=(float)(end-start)/CLOCKS_PER_SEC;
printf("\n%f\n ",time);

}




