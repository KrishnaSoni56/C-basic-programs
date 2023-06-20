#include<stdio.h>
int main(){
	int num = 15,rem,sum=0,temp;
//	printf("Enter a number \n");
//	scanf(" %d ",num);
	temp = num;
	
	while(num != 0)
	{
		rem = num % 10;
		sum = sum + rem*rem*rem;
		num = num/10;
		
}
	if( temp == sum){
		printf("%d is a armstrong no .",temp);
	}
	else {
	
		printf("%d is not a armstrong ",temp);
}
	return 0;
}

//#include<stdio.h>
//int main(){
//	int a,rem,sum=0;
//	printf("Enter a number \n");
//	scanf("%d",&a);
//	while(a!=0){
//		rem = a%10;
//		sum = sum*10 + rem;
//		a = a/10;
//	}
//	while(sum%10 !=0){
//		printf("%d",(sum%10)+1);
//		sum = sum/10;
//	}
//}



//#include<stdio.h>
//int main() {
//	int a,rem =0 ,num;
//	printf("Enter a number");
//	scanf("%d",&a);
//	while( a != 0) {
//		num = a%10;
//		printf("%d",num + 1);
//		a = a/10;
//	}
//}


