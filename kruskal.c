#include<stdio.h>



void main(){
int n;
printf("Enter the number of vertices\n");
scanf("%d",&n);
int cost[n][n],parent[n],v,u,a,b,sum=0,i,j,min;
for(i=1;i<=n;i++)
parent[i]=0;


printf("entre the cost matrix\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&cost[i][j]);
int ne=1;
while(ne<n)
{
min=999;
for(i=1;i<=n;i++){
for(j=1;j<=n;j++)
{
if(cost[i][j]<min)
{
min=cost[i][j];
u=a=i;
v=b=j;
}
}
}

while(parent[u])
u=parent[u];
while(parent[v])
v=parent[v];

if(u!=v)
{
sum=sum+min;
printf("path %d from %d to %d is=%d\n",ne++,a,b,min);
parent[v]=u;
}
cost[a][b]=cost[b][a]=999;
}
printf("\nminimum sum is =%d",sum);
}




