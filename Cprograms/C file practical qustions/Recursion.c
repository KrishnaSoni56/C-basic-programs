#include<stdio.h>

int main(){
	int a,K;
	printf("Enter a no.\n");
	scanf("%d",&a);
	K=f1(a);
	printf("%d",K);	
}

int f1(int n){
	int S;
	if(n==1)
		return 1;
	S= n+ f1(n-1);
	return(S);		
}
