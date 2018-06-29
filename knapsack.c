#include<stdio.h>
int n;


int max(int x,int y){
return((x>y)?x:y);
}








void knapsack(int w[],int p[],int c)
{
int v[10][10],i,j,x[10];

for(i=0;i<=c;i++)
v[0][i]=0;
for(j=0;j<=n;j++)
v[j][0]=0;

for(i=1;i<=n;i++)
{
for(j=1;j<=c;j++)
{
if(j>=w[i])
v[i][j]=max(v[i-1][j],v[i-1][j-w[i]]+p[i]);
else
v[i][j]=v[i-1][j];
}
}

for(i=0;i<=n;i++)
x[i]=0;

i=n;
j=c;
while(i>0 && j>0)
{
if(v[i-1][j]!=v[i][j])
{
x[i]=1;
j=j-w[i];
}
i--;
}
int sum=0;
for(i=1;i<=n;i++)
{
if(x[i]==1)
{
sum=sum+p[i];
printf("%d ->",i);
}
}
printf("max profit is=\n%d",sum);
}
void main()
{
int i,j,p[10],w[10],c;
printf("enter the number of items\n");
scanf("%d",&n);
printf("Enter the weight of each items\n");
for(i=1;i<=n;i++)
scanf("%d",&w[i]);
printf("Enter the profit value of each item\n");
for(i=1;i<=n;i++)
scanf("%d",&p[i]);
printf("Entre the capacity\n");
scanf("%d",&c);
knapsack(w,p,c);

}





















