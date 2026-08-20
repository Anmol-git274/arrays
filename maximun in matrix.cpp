//Q.write a c program to find a maximum number in 3x3 matrix.

#include<stdio.h>
	int main(){
		int matrix[3][3];
		int max;
		
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf("Enter the value of matrix[%d][%d]:",i,j);
				scanf("%d",&matrix[i][j]);
			}
		}
		max = matrix[0][0];
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				  if(matrix[i][j]>max){
				  	max = matrix[i][j];
				  }
				 
			}
		}
		printf("%d is maximum in matrix.",max);
		
	return 0;
		
		
	}
