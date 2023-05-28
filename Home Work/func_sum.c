#include<stdio.h>
int addnum(int a,int b);
int main() {
	
	int a,b,sum;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	
	sum=addnum(a,b);
	printf("sum is:%d",sum);
	return 0;
}
int addnum(int a,int b) {
	return a+b;
}
