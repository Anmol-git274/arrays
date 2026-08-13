#include<stdio.h>
	int main(){
		int ele[5];
		int largest = 0;
		
		for(int i = 0;i<5;i++){
			printf("Enter the value of ele[%d]:",i);
			scanf("%d",&ele[i]);
		}
		printf("\n");
		for(int i =0;i<5;i++){
			if(largest<ele[i]){
				largest = ele[i];
			}
		}
		printf("the greatest number in ele array is %d.",largest);
		
	return 0;
		
	}
