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
scanf("%d",&a[i]);
int temp;
start=clock();

for(i=0;i<n;i++)
{
for(j=1;j<n-i;j++)
{
if(a[j-1]>a[j])
{
temp=a[j-1];
a[j-1]=a[j];
a[j]=temp;
}
}
}
end=clock();

printf("sorted array is \n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
float time=(float)(end-start)/CLOCKS_PER_SEC;
printf("\n%f\n",time);


}



