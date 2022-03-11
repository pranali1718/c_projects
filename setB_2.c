#include<string.h>
#include<stdio.h>
#include<stdio.h>
char a[10][100],b[10][100],str[100];
int main()
{
FILE *fp;
fp=fopen("file.txt","r");
int num=5,k;
scanf("%s",str);

for(int i=0;i<num;i++)
{
fscanf(fp,"%s",a[i]);
fscanf(fp,"%s",b[i]);
if(strcmp(str,b[i]) == 0)
k = i;
}


int count = 0;
for(int i=0;i<num;i++)
{
if(strcmp(a[k],b[i]) == 0)
count++;
}
printf("%d\n",count);
fclose(fp);
return 0;
}