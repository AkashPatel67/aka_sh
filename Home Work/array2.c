#include<stdio.h>

int main() {
	int i;
	int arr[10];
	
	for(i=0;i<10;i++) {
		
		printf("element-%d:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++) {
		if(arr[i]%2==0) {
			
			printf("%d is even\n",arr[i]);
		}
		else {
			
			printf("%d is odd\n",arr[i]);
		}
	}
	return 0;
}
