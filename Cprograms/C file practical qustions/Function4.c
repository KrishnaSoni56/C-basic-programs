#include<stdio.h>
int main(){
	int arr[] = {1, 2, 3, 4, 5}; 
	int length , i;
	length = sizeof(arr)/sizeof(arr[0]);
	
	printf("Given array is : \n");
	for(i=0;i<length;i++){
		printf("%d",arr[i]);
	}
	
}
