

//#include <stdio.h>
//int main()
//{
//    
//    int a=50;
//    while(a<=1000){
//    if(a%2==0){
//    printf("%d \t",a);
//    }
//    a++;
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int x1,x2;
//    printf("Enter range of number you want to print :");
//    scanf("%d %d",&x1,&x2);
//    while (x1<=x2)
//    {
//      printf("%d ",x1);
//      x1++;
//    }
//    return 0;
//	}

//#include <stdio.h>
//int main()
//{
//    int a,b;
//    printf("enter range of number you want to print :");
//    scanf("%d %d",&a,&b);
//    while (a<=b)
//    {
//    if(a%2 != 0){
//      printf("%d ",a);
//    }
//    a++;
//    }
//    return 0;
//}


// table betee
//#include <stdio.h>
//int main()
//{
//    int a = 2;
//    while (a <= 10)
//    {
//    int b =1;
//        while (b <= 10)
//        {
//            printf("%d \t", a * b);
//            b++;
//        }
//        printf("\n");
//        a++;
//    }
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//     int a=50;
//     while (a<=500)
//     {
//       printf(" %d",a);
//       a++;
//     }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a=1,b,c;
//    printf("Enter two numbers :");
//    scanf("%d %d",&b,&c);
//    while(a<=100){
//    if(a%b==0 && a%c ==0){
//    printf(" %d",a);
//    }
//    a++;
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int pie;
//	char x;
//	float dis,tp;
//	printf("If you are a retailer then enter r or if you are a customer then enter c \n");
//	scanf(" %c",&x);
//	if(x== 'c'){
//		printf("No. of pieces you bought \n");
//		scanf("%d", &pie);
//		
//		if( pie>=1 &&  pie <=15 ){
//			
//			printf("Pieces : %d \n",pie);
//			printf("Discount : 15%% \n");
//			printf("Total Amount : %f",pie*0.85);
//		}
//		else if(16 <= pie && pie <= 30){
//			
//			printf("Pieces : %d \n",pie);
//			printf("Discount : 30%% \n");
//			printf("Total Amount : %f",pie*0.70);
//		}
//		else if( pie >= 31){
//			
//			printf("Pieces : %d \n",pie);
//			printf("Discount : 50 %% \n");
//			printf("Total Amount : %f",pie*0.50);
//		}
//		
//	}
//	else if(x =='r'){
//		printf("No. of pieces you bought \n");
//		scanf("%d", &pie);
//		
//		if( pie >=100  && pie <=999){
//			
//			printf("Pieces : %d \n",pie);
//			printf("Discount : 5%% \n");
//			printf("Total Amount : %f",pie*0.95);
//		}
//		else if( pie >=1000 && pie <= 1999){
//			
//			printf("Pieces : %d \n",pie);
//			printf("Discount : 10%% \n");
//			printf("Total Amount : %f",pie*0.90);
//		}
//		else if( 2000 <= pie && pie <= 2999){
//			
//			printf("Pieces : %d \n",pie);
//			printf("Discount : 20 %% \n");
//			printf("Total Amount : %f",pie*0.85);
//		}
//		
//	}
//	return 0;
//}
//
//
////#include <stdio.h>
////int main()
////{
////     int piece;
////     char A;
////     printf("You are retailer or customer (R/C) ??   :");
////     scanf("%c", &A);
////     if (A =='c')
////     {
////         printf("Enter the no. of piece you purchase ?  :");
////         scanf("%d", &piece);
////         if (1 <= piece && piece <= 15)
////         {
////             printf("no. of piece : %d \nDiscount : 15%% \nTotal payable amount : %0.1f", piece, piece * 0.85);
////         }
////         else if (16 <= piece && piece <= 30)
////         {
////             printf("no. of piece : %d \nDiscount : 30%% \nTotal payable amount : %0.1f", piece, piece * 0.70);
////         }
////         else if (31 <= piece)
////         {
////             printf("no. of piece : %d \nDiscount : 50%% \nTotal payable amount : %0.1f", piece, piece * 0.50);
////         }
////     }
////     else if (A =='r')
////     {
////         printf("Enter the no. of piece you purchase ?  :");
////         scanf("%d", &piece);
////         if (100 <= piece && piece <= 999)
////         {
////             printf("no. of piece : %d \nDiscount : 5%% \nTotal payable amount : %0.1f", piece, piece*0.95);
////         }
////         else if (1000 <= piece && piece <= 1999)
////         {
////             printf("no. of piece : %d \nDiscount : 10%% \nTotal payable amount : %0.1f", piece, piece*0.90);
////         }
////         else if (2000 <= piece && piece <= 2999)
////         {
////             printf("no. of piece : %d \nDiscount : 15%% \nTotal payable amount : %0.1f", piece, piece * 0.85);
////         }
////         else if (3000 <= piece)
////         {
////             printf("no. of piece : %d \nDiscount : 30%% \nTotal payable amount : %0.1f", piece, piece * 0.70);
////         }
////     }
////     else
////     {
////         printf("INVALID ENTRY!!");
////     }
////
////    return 0;
////}
//
//
//
//
//
//
//
//
//
////#include<stdio.h>
////
////int main(){
////	int roll;
////	int n1,n2,n3;
////	float tm,per,divi;
////	printf("Enter your roll no.\n");
////	scanf("%d",&roll);
////	
////	printf("Enter marks for physics , chemistry and computer apppication \n");
////	scanf("%d %d %d",&n1,&n2,&n3);
////	tm = n1+n2+n3;
////	per = (tm/300.0)*100;
////	printf("Your total marks : %f \n",tm);
////	printf("You scored %f %% \n",per);
////	if(per > 60)
////	printf("You scored 1st division");
////	else if (per<=60 && per>50)
////	{
////		printf("You scored 2nd division");
////	}
////	else if(per <= 50 && per > 40)
////	printf("You scored 3rd division");
////	else 
////	printf("Fail");
////	
////}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////
////#include <stdio.h>
////
////int main() {
////    int height;
////
////    printf("Enter the height in centimeters: ");
////    scanf("%d", &height);
////
////    if (height < 100) {
////        printf("Low\n");
////    } else if (height >= 100 && height <= 200) {
////        printf("Mid\n");
////    } else {
////        printf("High\n");
////    }
////
////    return 0;
////}
//
//
////#include<stdio.h>
////int main(){
////	int s1,s2,s3,s4,s5;
////	float tm,per,avg;
////	printf("Enter marks of 5 sunjects\n");
////	scanf(" %d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);	
////	tm = s1+s2+s3+s4+s5;
////	avg = tm/5;
////	
////	if (avg > 40){
////		if(avg > 40 && avg <=50){
////			printf("Your grade is D");
////		}
////		else if(avg > 50 && avg <=60){
////			printf("Your grade is C");
////		}
////		else if(avg > 60 && avg <=80){
////			printf("Your grade is B");
////		}
////		else if(avg > 80){
////			printf("Your grade is A");
////		}
////		
////	}
////	else 
////	printf("You Failed \n");
////	
////	return 0;
////}
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
////	if(per > 80 ){
////		printf("Your grade is A");
////	}
////	else 	if(per > 60 && per <= 80 ){
////		printf("Your grade is B");
////	}
////	else 	if(per > 50 && per <= 60 ){
////		printf("Your grade is C");
////	}
////	else 	if(per > 45 && per <= 50 ){
////		printf("Your grade is D");
////	}
////	else if(per >= 25 && per <= 45  ){
////		printf("Your grade is E");
////	}
////	else if(per < 25 ){
////		printf("Fail");
////	}
//	
//
//
//
//
//
//
////#include <stdio.h>
////int main() {
////    char x;
////    printf("Enter a character: ");
////    scanf("%c", &x);
////
////    if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
////        printf("%c is an alphabet.", x);
////    else
////        printf("%c is not an alphabet.", x);
////
////    return 0;
////}
//
//
////#include<stdio.h>
////// user : 1234 , o/p : 2345
////int main(){
////	int a=1234,i;
//////	printf("Enter a no. \n");
//////	scanf("%d",&a);
////	while(a!=0){
////		++a;
////		printf("%d ",a);
////	}
////	return 0;
////}
//
////#include <stdio.h>
////int main(){
////	int num=121,rem=0,temp,sum;
////	temp=rem;
////	
////	while(num!=0)
////	{
////		rem = num%10;
////		sum = sum*10 + rem;
////		rem = sum/10;
////		 
////		
////	}
////}
//
//// armstrong
//
//
//
//
////#include <stdio.h>
////
////int main() {
////    int a = 2;
////    int b;
////
////    while (a < 100) {
////        b = 2;
////
////        while (b < a) {
////            if (a % b == 0)
////                break;
////
////            b++;
////        }
////
////        if (b == a) {
////            printf("%d\n", a);
////        }
////
////        a++;
////    }
////}
//
//
//
//
//
//
//
//
//
//
//
//
//
////#include <stdio.h>
////
////int main() {
////    int num;
////
////    printf("Enter a positive integer: ");
////    scanf("%d", &num);
////
////    if (num <= 1) {
////        printf("%d is not a prime number.\n", num);
////    } else {
////        int i = 2;
////        int isPrime = 1;
////
////        while (i * i <= num) {
////            if (num % i == 0) {
////                isPrime = 0;  // Not a prime number
////                break;
////            }
////            i++;
////        }
////
////        if (isPrime) {
////            printf("%d is a prime number.\n", num);
////        } else {
////            printf("%d is not a prime number.\n", num);
////        }
////    }
////
////    return 0;
////}
//
//
//
//
//
//
////#include<stdio.h>
////int main(){
////	int a=10;
////	while(a>=2){
////		if(a%2 == 0){
////			printf("%d \n",a);
////			
////		}
////		a--;
////		
////	}
////	return 0;
//// }
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////#include<stdio.h>
////int main(){
////	char a,b1,b2;
////	//int q=1;
////    //printf("%d\n",q);
////	printf("Enter a alphabet between A and V , A for area and V for volume\n");
////	scanf(" %c",&a);
////	//q=2;
//////	 	printf("Enter a alphabet between t,s and r , t for triangle s for square and r for rectangle\n");
//////	 	
//////		scanf(" %c",&b1);
//////		//printf("%d\n",q);
////			float area,vol,x1,x2,x3;
////	if (a=='A'){
////	   // char b1;
////		printf("Enter a alphabet between t,s and r , t for triangle s for square and r for rectangle\n");
////	 	
////		scanf(" %c",&b1);
////		//printf("%d\n",q);
////	   
////		if (b1 == 't')
////		{
////		    
////			printf("Enter base and height of triangle\n");
////			scanf("%f %f",&x1,&x2);
////			area=0.5*x1*x2;
////			
////			printf("Area of Triangle is %f",area);
////		}
////		else if (b1 == 's'){
////			printf("Enter value of side of square\n");
////			scanf("%f",&x1);
////			area = x1*x1;
////			printf("Area of Square is %f",area);
////			
////		}
////		else if(b1 =='r'){
////			printf("Enter length , height and breadth of rectangle\n");
////			scanf("%f%f%f",&x1,&x2,&x3);
////			area = x1*x2*x3;
////			printf("Area of Rectangle is %f",area);
////		}
////	}
////	
////	if (a=='V'){
////		printf("Enter a alphabet between c & d , c for cube and d for cuboid "); // d = v = w*h*l  c = a^3
////		scanf(" %c",&b2);
////		if (b2 =='c')
////		{
////			printf("Enter side of cube\n");
////			scanf("%f",&x1);
////			vol = x1*x1*x1;
////			printf("Volume of cuboid is %f",vol);
////			
////		}
////		else if (b2 =='d'){
////			printf("Enter weidth, height, length of cuboid\n");
////			scanf("%f%f%f",&x1,&x2,&x3);
////			vol = x1*x2*x3;
////			printf("Volume of cuboid is %f",vol);
////		}
////		
////	}
////	return 0;
////}
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
//////#include<stdio.h>
//////int main(){
//////	int year;
//////	printf("Enter a year\n");
//////	scanf("%d",&year);
//////	if(year%4 == 0)
//////	printf("%d is a leap year",year);
//////	else
//////	printf("%d is not a leap year",year);
//////	
//////	return 0;
//////}
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
//////// °C = [(°F-32)×5]/9
//////// (°C) * 9/5) + 32.
//////#include<stdio.h>
//////
//////int main(){
//////	char a;
//////	float fr,cl,ftc,ctf;
//////	printf("Enter a letter between f and c \n");
//////	scanf("%c",&a);
//////	
//////	if (a =='c'){
//////		printf("Enter temperature in fahrenheit\n");
//////		scanf("%f",&fr);
//////		ftc= ((fr - 32)*5)/9;
//////		printf("Temperature is %f celcius",ftc);
//////	}
//////	else if(a=='f'){
//////		printf("Enter temperature in celcius\n");
//////		scanf("%f",&cl);
//////		ctf = (cl *9/5)+32;
//////		printf("Temperature is %f fahrenheit",ctf);
//////	}
//////}
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
//////#include<stdio.h>
//////
//////int main(){
//////	char a;
//////	printf("Enter an alphabet");
//////	scanf("%c",&a);
//////	
//////	if(a == 'A' || a == 'B'|| a=='C' || a== 'D' || a=='E'|| a=='F'|| a=='G' || a=='H'|| a=='I'|| a=='J' || a=='K' || a=='L' || a=='M' || a=='N' || a=='O' || a=='P' || a=='Q'|| a=='R' || a=='S' || a=='T' || a=='U' || a=='V' || a=='W' || a=='X' || a=='Y' || a=='Z')
//////	{
//////		printf("%c is Uppercase letter",a);
//////	}
//////	
//////	else 
//////	printf("%c is lowercase letter",a);
//////	
//////	return 0;
//////}
////
////
////
////
////
//////#include<stdio.h>
//////
//////int main(){
//////	int a;
//////	printf("Enter a number\n");
//////	scanf("%d",&a);
//////	
//////	if(a>0)
//////	{
//////		printf("%d is positive",a);
//////	}
//////	else{
//////		if(a<0){
//////			printf("%d is negative \n",a);
//////		}
//////		else if(a==0){
//////			printf("%d is zero",a);
//////		}
//////	}
//////	return 0;
//////}
////
////
////
////
////
////
////
////
////
////
////
//////#include<stdio.h>
//////
//////int main(){
//////	char alpha;
//////	printf("Enter an alphabet \n");
//////	scanf("%c",&alpha);
//////	
//////	if (alpha == 'a'|| alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u') {
//////	
//////	printf("Given alphabet is a vowel");
//////}
//////
//////	else
//////	printf("Given alphabet is a consonent");
//////	return 0;
//////}
////
////
////
////
////
////
////
////
////
////
//////#include<stdio.h>
//////int main(){
//////	int a;
//////	printf("Enter a number\n");
////// 	scanf("%d",&a);
////// 	if (a % 5 ==0 && a%11 == 0)
////// 	printf("No. is divisible by 5 and 11");
////// 	else
////// 	printf("No. is not divisible by 5 and 11");
//////}
////
////
////
////
////
////
////
//////#include<stdio.h>
////// 
////// int main(){
////// 	int a;
////// 	printf("Enter a number\n");
////// 	scanf("%d",&a);
////// 	if (a%2==0)
////// 	printf("No. is even");
////// 	else 
//////	 printf("No. is not even");
////// }
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
//////#include<stdio.h>
//////	int main(){
//////		int a,b,c;
//////		printf("Enter three value \n");
//////		scanf("%d%d%d",&a,&b,&c);
//////		if (a>b){
//////			if (a>c)
//////				printf("A is greater");
//////			else 
//////				printf("C is greater");
//////			}
//////		else {
//////			if (b>c)
//////				printf("B is greater");
//////			else 
//////				printf("C is greater");
//////			
//////			}
//////		return 0;
//////	}
////	
////	// even no.
////	// 
////
////
////
////
////
////
////
////
////
//////			#include<stdio.h>
//////			
//////			int main (){
//////				int a;
//////				printf("Enter your age\n");
//////				scanf("%d",&a);
//////				if (a >=18)
//////					printf("You can vote");
//////				else		
//////				printf("You cannot vote");	
//////				return 0;
//////			}
////		

