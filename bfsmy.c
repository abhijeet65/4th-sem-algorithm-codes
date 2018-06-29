#include<stdio.h>

int count=0,visited[10],a[10][10],n;



void bfs(int x)
{
int f=0,r=-1,que[10];
count++;
visited[x]=count;
que[++r]=x;
while(f<=r)
{
int i,u;
u=que[f++];
for(i=1;i<=n;i++)
{
if(visited[i]==0 && a[u][i]==1)
{
que[++r]=i;
count++;
visited[i]=count;
}
}
}
}

void main(){
int source,i,visitedorder[10],j;

printf("Enter the number of nodes\n");
scanf("%d",&n);
printf("Enter the adjacency matrix\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);

printf("Enter the source node\n");
scanf("%d",&source);

bfs(source);
for(i=1;i<=n;i++)
{
if(visited[i]==0)
bfs(i);
}

for(i=1;i<=n;i++)
visitedorder[visited[i]]=i;
for(i=1;i<=n;i++)
printf("%c\t",visitedorder[i]+64);


}
















