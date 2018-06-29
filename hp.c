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




int horspool(char text[],char pat[]){


int n,m,i,k;
shifttable(pat);
n=strlen(text);
m=strlen(pat);


n=m-1;
while(i<n)
{
k=0;
while(k<m && text[i-k]==pat[m-k-1])
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
scanf("%s",text);
printf("enetr ethe pattern\n");
scanf("%s",pat);
int h=horspool(pat,text);
if(h)
printf("found at pos %d",h+1);
else
printf("not found\n");

}


