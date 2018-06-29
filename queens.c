#include<stdio.h>

#include<math.h>
int place(int pos);
void printsol(int k);
void queens(int n);

int count=0,n;
int a[100];
void main()
{
printf("Enter the number of queens\n");
scanf("%d",&n);
queens(n);
}


void queens(int n)
{


int k=1;
a[k]=0;

while(k!=0)
{
do{
a[k]++;
}while(a[k]<=n && !(place(k)));
if(a[k]<=n)
{
if(k==n)
printsol(k);
else
{
k++;
a[k]=0;
}
}
else
k--;
}
}


int place(int pos)
{
int i;

for(i=1;i<pos;i++)
{
if((a[i]==a[pos]) || (abs(a[i]-a[pos])==abs(i-pos)))
{
return 0;
}
}
return 1;
}

void printsol(int k)
{
int i,j;

count++;
printf("Solution=%d\n\n",count);

for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(a[i]==j)
{
printf("Q\t");
}
else
printf("*\t");
}
printf("\n");
}
}

















