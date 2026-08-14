#include<stdio.h>
	int main(){
		int array[10];
		int search;
		int c=0;
		
		for(int i =0;i<10;i++){
			printf("Enter the value of array[%d]:",i);
			scanf("%d",&array[i]);	
		}
		printf("\n");
		
		printf("Enter search value:");
		scanf("%d",&search);
		 
		for(int i =0;i<10;i++){
			if(search == array[i]){
				printf("%d is in the array.",search);	
				c++;
				break;
				
		}
		}
		
		if(c==0){
			printf("%d is not in array.",search);
			
		}
	
	return 0;	
	}
