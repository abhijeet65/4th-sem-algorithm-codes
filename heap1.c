#include<stdio.h>
#include<time.h>


void heapify(int h[],int n)
{
int v,k,i,heap,n1=n,j;
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
j=j+1;
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



void main()
{
int n,h[100000],size,i,t;

clock_t start,end,start1,end1;

printf("ENtre the size of nodes \n");
scanf("%d",&n);
printf("Enter rhe values of heap\n");
for(i=1;i<=n;i++)
//scanf("%d",&h[i]);
h[i]=rand()/1000000;

start1=clock();

heapify(h,n);
end1=clock();

printf("HEapified heap\n");
for(i=1;i<=n;i++)
printf("%d ",h[i]);
start=clock();

for(i=n;i>=1;i--)
{
t=h[1];
h[1]=h[i];
h[i]=t;
size=i-1;
heapify(h,size);
}

end=clock();

printf("Sorted heap is\n");
for(i=1;i<=n;i++)
printf("%d ",h[i]);

printf("time taken\n");
float time=(float)((end-start)+(end1-start1))/CLOCKS_PER_SEC;
printf("\n%f\n",time);

}






















