#include<stdio.h>

int main() {
	int i,j,num;
	printf("enter number:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++) {
		for(j=1;j<=num;j++) {
			
			if(i==j) {
				printf(" $ ");
			}
			
			else {
				printf(" * ");
			}
		}
		printf("\n");
	}
	return 0;
}
