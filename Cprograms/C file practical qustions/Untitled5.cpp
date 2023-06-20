#include<stdio.h>
#include<conio.h>

int main (){
	int arr[10],i,sum;
	float avg;
	printf("Enter 10 no.");
	for(i=0;i<=9;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<=9;i++) 
	{
	sum = sum + arr[i];
	}
	
	avg = sum/10.0;
	printf("Average of 10 no. is %f",avg);
	
	return 0;
	
	
	
}
