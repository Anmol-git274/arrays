//Q.write a c program to check whether 

#include<stdio.h>
	int main(){
		int matrixA[3][3];
		int I[3][3];
		I[0][0]=1,I[0][1]=0,I[0][2]=0;
		I[1][0]=0,I[1][1]=1,I[1][2]=0;
		I[2][0]=0,I[2][1]=0,I[2][2]=1;
		int matrixAT[3][3];
		int matrixB[3][3];
		int count=0;
		
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf("Enter the matrixA[%d][%d]:",i,j);
				scanf("%d",&matrixA[i][j]);
			}
		}
		
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				matrixAT[i][j] = matrixA[j][i];		 
			}
		}
		
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				matrixB[i][j] = ((matrixA[i][1])*(matrixAT[1][j]))+((matrixA[i][2])*(matrixAT[2][j]))+((matrixA[i][3])*(matrixAT[3][j]));		 
			}	
		}
		
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(matrixB[i][j] == I[i][j]){
					count++;
				}		 
			}
		}
		
		for(int i=0;i<3;i++){
			printf("[");
			for(int j=0;j<3;j++){
				printf(" %d ",matrixA[i][j]);		 
			}
				printf("]");
			printf("\n");
		}
		printf("\n");
		
		for(int i=0;i<3;i++){
			printf("[");
			for(int j=0;j<3;j++){
				printf(" %d ",matrixAT[i][j]);		 
			}
				printf("]");
			printf("\n");
		}
		
		printf("\n");
		
		for(int i=0;i<3;i++){
			printf("[");
			for(int j=0;j<3;j++){
				printf(" %d ",matrixB[i][j]);		 
			}
				printf("]");
			printf("\n");
		}
		
		printf("\n");
		
		for(int i=0;i<3;i++){
			printf("[");
			for(int j=0;j<3;j++){
				printf(" %d ",I[i][j]);		 
			}
				printf("]");
			printf("\n");
		}
		
		printf("\n");
		printf("%d",count);
		printf("\n");
		if(count==9){
			printf("the matrixA is a identical matrix.");
		}
		else{
			printf("the matrixA is not a identical matrix.");	
		}
		
	return 0;	
	}
