#include<stdio.h>
	int main(){
		int first[5];
		int second[5];
		int product[5];
		for(int i =0;i<5;i++){
			printf("Enter the value of first[%d]:",i);
			scanf("%d",&first[i]);	
		} 
		printf("\n");
		for(int i =0;i<5;i++){
			printf("Enter the value of second[%d]:",i);
			scanf("%d",&second[i]);	
		}
		printf("\n");
		for(int i =0;i<5;i++){
			product[i] = first[i]*second[i];
			printf("%d*%d=%d",first[i],second[i],product[i]);
			printf("\n");
		}
	
	return 0;
	}
