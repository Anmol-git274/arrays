//Q.write a c program to calculate frequancy of element in array.

//file name:frequenay of element
//auther:anmol shahu


#include<stdio.h>
	int main(){
		int arr[10];
		
		for(int i=0;i<10;i++){
			printf("Enter the value arr[%d]:",i);
			scanf("%d",&arr[i]);
		}
		int n;
		printf("Enter the number to find:");
		scanf("%d",&n);
		
		int count=0;
		for(int i=0;i<10;i++){
			if(arr[i]==n){
				count++;
			}
		}
		
		if(count>0){
			printf("%d is %d times in the array.",n,count);
		}
		else{
			printf("%d is not in array.",n);
		}
		
	return 0;
	}
