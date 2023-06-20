#include<stdio.h>
#include<string.h>

int main(){
	char str[10];
	printf("Enter String:");
	gets(str);
	printf("Length of String : %d",strlen(str));
	return 0;
}

