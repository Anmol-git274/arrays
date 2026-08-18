#include<stdio.h>
	int main(){
		int num[10];
		int sum =0;
		for(int i =0;i<10;i++){
			printf("Enter the value of num[%d]:",i);
			scanf("%d",&num[i]);
		}
		printf("\n");
		for(int i =0;i<10;i++){
			sum = sum+num[i];
			printf("%d+",num[i]);
		}
		printf("=%d",sum);
		
	return 0;
	}
