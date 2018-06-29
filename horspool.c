#include<stdio.h>
#include<string.h>


int table[128];


void shiftable(char pat[])
{
int i,m;
m=strlen(pat);
for(i=0;i<128;i++)
table[i]=m;

for(i=0;i<m-1;i++)
table[pat[i]]=m-i-1;
}

int horspool(char text[],char pat[])
{
int i,k,m,n;
shiftable(pat);
n=strlen(text);
m=strlen(pat);
i=m-1;
while(i<n)
{
k=0;
while(k<n && text[i-k]==pat[m-k-1])
k++;
if(k==m)
return(i-m+1);
else
i=i+table[text[i]];

}
return -1;

}
void main(){

char pat[100],text[100];

int i,k,m,n;


printf("enter the text\n");
gets(text);
printf("enter the pattern to search\n");
gets(pat);
int h=horspool(text,pat);
if(h)
printf("found at=%d",h);
else
printf("not found\n");

}






















