#include<stdio.h>


void warshalls(int a[10][10],int n)
{
int i,j,k;
for(k=1;k<=n;k++)
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
a[i][j]=(a[i][j] || a[i][k] && a[k][j]);
}
 


void main(){
int n,i,j;
printf("entre the dimention\n");
scanf("%d",&n);
int a[10][10];
printf("Enter the adjacency matrix\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);

warshalls(a,n);
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
printf("%d ",a[i][j]);
}
printf("\n");
}

}


