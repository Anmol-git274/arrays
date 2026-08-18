#include<stdio.h>
	int main(){
		int arr1[3][3];
		int arr2[3][3];
		int arr3[3][3];
		
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf("Enter the value of arr1[%d][%d]:",i,j);
				scanf("%d",&arr1[i][j]);
			}
		}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf("Enter the value of arr2[%d][%d]:",i,j);
				scanf("%d",&arr2[i][j]);
			}
		}
		printf("\n");
		
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				arr3[i][j] = arr1[i][j]+arr2[i][j]; 
			} 
		}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf(" %d+%d = %d",arr1[i][j],arr2[i][j],arr3[i][j]);
				printf("\n");	 
			}
		}
	
	return 0;
		
	}
