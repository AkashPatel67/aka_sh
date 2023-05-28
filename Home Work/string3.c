#include<stdio.h>

char str[20];
int i,count=0;


 printf("enter string:");
fgets(str,20,stdin);

for(i=0;str[i]!='\0';i++) {
	count++;
}
printf("string length:%d\n",count);

