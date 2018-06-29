#include<stdio.h>


void main(){
int n;
printf("Enter the number of vertices\n");
scanf("%d",&n);
int cost[n][n],visited[n],v,u,a,b,sum=0,i,j,min;
for(i=1;i<=n;i++)
visited[i]=0;


printf("entre the cost matrix\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&cost[i][j]);


int ne=1;
visited[1]=1;
while(ne<n)
{
min=999;

for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(cost[i][j]<min && visited[i]!=0)
{
min=cost[i][j];
u=a=i;
v=b=j;
}
}
}

if(visited[u]==0 || visited[v]==0)
{
sum=sum+min;
printf("path %d from %d to %d=%d",ne++,a,b,min);
visited[b]=1;

}
cost[a][b]=cost[b][a]=999;

}
printf("minimum path length=\n%d",sum);

}

