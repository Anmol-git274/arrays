//Q.write a c program to print determinet of 3x3 matrix.

#include<stdio.h>
	int main(){
		int m[3][3];
		int D;
		
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf("Enter the matrix[%d][%d]:",i,j);
				scanf("%d",&m[i][j]);	
			}
		}
		
		int d1 = m[0][0]*((m[1][1]*m[2][2])-(m[1][2]*m[2][1]));
		int d2 = -(m[0][1]*((m[1][0]*m[2][2])-(m[1][2]*m[2][0])));
		int d3 = m[0][2]*((m[1][0]*m[2][1])-(m[1][1]*m[2][0]));
		
		D = d1+d2+d3;
		
		printf("D(matrix)=%d",D);
		
	return 0;
	
	}
