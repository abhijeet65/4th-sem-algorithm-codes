#include<stdio.h>



void main()
{
int n;
printf("Enter the number of vertices in graph\n");
scanf("%d",&n);
int cost[n][n],i,j,k,d[10],u,v,min,source,w,visited[10];

printf("Enter the cost matrix\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&cost[i][j]);

printf("Enter the source\n");
scanf("%d",&source);
for(i=1;i<=n;i++){
d[i]=cost[source][i];
visited[i]=0;
}

d[source]=0;
visited[source]=0;

for(j=2;j<=n;j++)
{
min=999;
for(i=1;i<=n;i++)
{
if(d[i]<min)
if(visited[i]==0)
{
min=d[i];
u=i;
}
}

visited[u]=1;
for(w=1;w<=n;w++)
{
if(cost[u][w]!=999 && visited[w]==0)
if(d[w]>cost[u][w]+min)
d[w]=cost[u][w]+min;
}
}
for(i=1;i<=n;i++)
{
if(i!=source)
printf("shortest path from %d to %d is %d",source,i,d[i]);
}
}
