#include<stdio.h>
int main()
{
int i,count=0;
char a[200];
printf("\n enter the sentence:");
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
count++;
}
}
printf("\n no. of space: %d",count);
return 0;
}
