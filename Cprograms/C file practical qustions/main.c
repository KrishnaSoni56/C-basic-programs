#include<stdio.h>
int main()
{
    int s,i,j,n;
    printf("enter the row");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for( s=n-1;s>=i;s--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}


//#include <stdio.h>
//
//int main() {
//    int rows = 4;
//    int number = 1;
//
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= i; j++) {
//            printf("%d ", number);
//            number++;
//        }
//        printf("\n");
//    }
//
//    return 0;
//}



//#include <stdio.h>
//
//int main() {
//    int i,j,k=1;
//    
//
//    for (i = 1; i <= 4; i++) {
//        for (j = 1; j <= i; j++) {
//            printf("%d ", k);
//            k++;
//        }
//        printf("\n");
//    }
//
//    return 0;
//}




//#include<stdio.h>
//int main()
//{
//    int n,i,j,s;
//    printf("enter the row");
//    scanf("%d",&n);
//    for( i=1;i<=n;i++)
//    {
//        for( s=n-1;s>=i;s--)
//        {
//            printf(" ");
//        }
//        for(j=1;j<=i;j++)
//        {
//            printf(" *");
//        }
//        printf("\n");
//    }
//    return 0;
//}


//#include<stdio.h>
//
//int main(){
//	int i,j,n,s;
//	printf("Enter row");
//	scanf("%d",&n);
//	
//	for( i=1;i<=n;i++)
//	{
//		for( j=1;j<=n;j++){
//			if(i==1 || j==1 || i == n || j==n){
//			
//			printf("*");
//		}
//		else {
//			printf(" ");
//		}
//			}
//		printf("\n");
//		
//	
//	}
//}

//#include<stdio.h>
//
//int main(){
//	int i,j;
//	for( i=1;i<=3;i++)
//	{
//		for( j=1;j<=3;j++)
//		{
//			if(j >= i )
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//}




//#include<stdio.h>
//
//int main (){
//	int i,j;
//	for (i=1;i<=3;i++)
//	{
//		for (j=1;j<=6;j++){
//			if( j <= i  )
//				printf("*");
//			else 
//			printf(" ");
//		}
//		printf("\n");
//	}
//}




//#include<stdio.h>
//int main (){
//	int i,j;
//	for (i=1;i<=5;i++)
//	{
//		for (j=1;j<=5;j++){
//				printf("%d",j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//
//#include<stdio.h>
//
//int main (){
//	int i,j;
//	for (i=1;i<=4;i++)
//	{
//		for (j=1;j<=4;j++){
//			if(j<=5-i)
//				printf("*");
//			else 
//			printf(" ");
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//
//int main (){
//	int i,j;
//	for (i=1;i<=4;i++)
//	{
//		for (j=1;j<=4;j++){
//			if(j<=i)
//				printf("*");
//			else 
//			printf(" ");
//		}
//		printf("\n");
//	}
//}



//#include<stdio.h>
//
//int main (){
//	int i,j;
//	for (i=1;i<=4;i++)
//	{
//		for (j=1;j<=4;j++){
//				printf("*");
//		}
//		printf("\n");
//	}
//}


















//#include<stdio.h>
//int main(){
//	char  alp ;
//	printf("Enter a alphabet \n");
//	scanf("%c",&alp);
//	switch(alp){
//		case 'a' :
//			{
//			
//		printf("Vowel");
//		break;
//	}
//		case 'e' :
//			{
//			
//		printf("Vowel");
//		break;
//	}
//		case 'i' :
//			{
//			
//		printf("Vowel");
//		break;
//	}
//		case 'o':
//			{
//			
//		printf("Vowel");
//		break;
//	}
//		case 'u' :
//			{
//			
//		printf("Vowel");
//		break;
//	}
//	default : {
//		printf("Consonent");
//		break;
//	}
//}
//	
//}
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
////// 1 to 10
////
////int main(){
////	int i,n,m;
////	printf("Enter two number. ");
////	scanf("%d %d",&n,&m);
////	for(i=100;i>=1;i--)
////	{
////		if(i%n==0 && i%m==0){
////			printf("%d ",i);
////		}
////	}
////	return 0;
////}
////

