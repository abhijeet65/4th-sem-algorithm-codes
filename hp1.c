#include<stdio.h>
#include<string.h>

int table[128];
void shifttable(char pat[])
{
int i,j,m;
m=strlen(pat);
for(i=0;i<128;i++)
table[i]=m;
for(j=0;j<m-1;j++)
table[pat[j]]=m-j-1;
}



int horspool(char pat[],char text[]){

int i,k,m,n;
shifttable(pat);
m=strlen(pat);
n=strlen(text);
i=m-1;
while(i<n){
k=0;
while(k<m && text[i-k]==pat[m-1-k])
k++;
if(k==m)
return(i-m+1);
else
i=i+table[text[i]];
}
return -1;
}

void main(){
char text[100],pat[100];

printf("enetre the string\n");
gets(text);
printf("enetr ethe pattern\n");
gets(pat);
int h=horspool(pat,text);
if(h)
printf("found at pos %d",h+1);
else
printf("not found\n");
}


