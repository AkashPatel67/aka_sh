#include<stdio.h>

int main() {

char str[50];
int i,count1=0,count2=0;

printf("enter string:");
gets(str);

for(i=0;str[i]!='\0';i++) {
	if(str[i]==' ') {
		count1++;
	}
	else {
		count2++;
	}
}
printf("Spaces in string are:%d\n",count1);
printf("characters in string are:%d\n",count2);
return 0;
}
