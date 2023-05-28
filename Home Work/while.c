#include<stdio.h>

int main() {
	
	int num,status=1;
	char choice;
	
	while(status) {
		
		printf("enter number:");
		scanf("%d",&num);
		
		fflush(stdin);
		printf("do you want to continue:[y\n]:");
		scanf("%c",&choice);
		
		if(choice=='y') {
			status=1;
		}
		else {
			status=0;
		}
	}
	return 0;
}
