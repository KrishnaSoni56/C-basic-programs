#include<stdio.h>
int main() {
    int a=23,b=2;
    int sum, sub, mul,divi,mod;
    sum = a+b;
    sub = a-b;
    mul = a*b;
    divi = a/b;
    mod = a%b;
    
    printf("Sum is %d \n",sum);
    printf("Subtraction is %d \n",sub);
    printf("Multiple is %d \n",mul);
    printf("Division is %d \n",divi);
    printf("Modulus is %d \n",mod);
    return 0;
    
}
