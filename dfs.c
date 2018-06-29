#include<stdio.h>

int visited[10],a[10][10],n;

void dfs(int x){
printf("%c->",x+64);
visited[x]=1;
int i;
for(i=1;i<=n;i++)
{
if(visited[i]==0 && a[x][i]==1)
dfs(i);
}
}

void main()
{
int source,i,j;
printf("Enter the numner of nodes\n");
scanf("%d",&n);
printf("Enter the adjacency matrix\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
for(i=1;i<=n;i++)
visited[i]=0;
printf("Entr the source\n");
scanf("%d",&source);
dfs(source);
}



