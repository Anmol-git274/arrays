//q.write a c program to find second largest element in array.

#include<stdio.h>
	int main(){
		int arr[10];
		int l;
		for(int i=0;i<10;i++){
			printf("Enter arr[%d]:",i);
			scanf("%d",&arr[i]);
		}
		
	for(int i=0;i<10;i++){
			for(int j=i+1;j<10;j++){
				if(arr[i]>arr[j]){
					l = arr[i];
					arr[i] = arr[j];
					arr[j] = l;
				}
			}
		}
		
		
		
		printf("largest element in array:%d\n",arr[9]);
		printf("second largest element in array:%d",arr[8]);
	}
