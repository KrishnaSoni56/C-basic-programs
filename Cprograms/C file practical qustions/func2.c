#include<stdio.h>
#include<string.h>
int main(){
	char s[100],c;
	
	printf("Enter the string");
	gets(s);
	printf("Enter character to be searched\n");
	c=getchar();
	
	check(s,c);
	
	return 0;
}

void check(char *s,char c)
{
	int i;
	for(i=0;i<=s[i];i++){
		if ( s[i]==c){
			printf("character %c found at location: %d\n",c,i);
		}
	}
	
}
