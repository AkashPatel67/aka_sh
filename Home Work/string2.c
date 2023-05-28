#include<stdio.h>

int main() {
	char str1[20];
	
	printf("enter string:");
	scanf("%s",&str1);
	fgets(str1,20,stdin);
	
	printf("string is:%s\n",str1);
	puts(str1);
	return 0;
}
