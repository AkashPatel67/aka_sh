#include<stdio.h>

int main() {
	int i,j,num;
	
	printf("enter number:");
	scanf("%d",&num);
	
	for(i=0;i<num;i++) {
		for(j=0;j<num;j++) {
			
			if(i==j || i+j==num-1) {
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
