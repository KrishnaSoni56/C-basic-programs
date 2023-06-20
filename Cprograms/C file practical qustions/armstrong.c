#include<stdio.h>
int main(){
	int num = 15, rem, sum=0,test;
	test = num;
	while(num != 0){
		rem = num%10;
		sum = sum+rem*rem*rem;
		num=num/10;
	}
	if(test == sum){
		printf("yes");
	}
	else{
		printf("no");
	}
}
