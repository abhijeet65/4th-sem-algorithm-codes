#include<stdio.h>

int visited[10],count=0;

void bfs(int a[10][10],int n,int x)
{
int f=0,r=-1,que[10];
count++;
visited[x]=count;
que[++r]=x;
while(f<=r)
{
int u,i;
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




void main()
{
int n,i,j,source,visitedorder[10],a[10][10];
printf("Enter the vertices\n");
scanf("%d",&n);
printf("Entre the adjacency matrix\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);

printf("Enter the source\n");
scanf("%d",&source);

bfs(a,n,source);
for(i=1;i<=n;i++)
{
if(visited[i]==0)
bfs(a,n,i);
}
for(i=1;i<=n;i++)
visitedorder[visited[i]]=i;
for(i=1;i<=n;i++)
printf("%c\t",64+visitedorder[i]);


}























