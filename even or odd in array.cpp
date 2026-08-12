#include<stdio.h>
	int main(){
		int arr[10];
		int even=0,odd=0;
		for(int n = 0;n<=11;n++){
			printf("Enter the value of arr[%d]:",n);
			scanf("%d",&arr[n]);
		}
		for(int i = 0;i<=11;i++){
			if(arr[i]%2 == 0){
				even++;
			}	
			else{
				odd++;
			}
		}
		printf("\n");
		printf("%d even numbers in array.\n",even);
		printf("%d odd number in array.\n",odd);
	
	return 0;	
	}
