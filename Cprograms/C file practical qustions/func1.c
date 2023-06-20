#include<stdio.h>
int main(){
	int i,ele,key,n,arr[10];
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter element to search\n");
	scanf("%d",&key);
	search_element(arr,n,key);
	return 0;
//	printf(" element found");
//	
//	else
//	printf("Element not found.");
}

int search_element(int *arr, int n,int key){
	int i;
	int flag=1;
	for(i=0;i<=n;i++)
	{
//		printf("%d",key);
//		printf("%d",arr[0]);
		if(arr[i] == key){
		printf(" Element '%d'found on %d position",key,i+1);
		flag=2;
		break;
		}
//		else {
//		printf("Element Not Found");
//		break;
//		}
		
	}
		
	if(flag==1){
	printf("Element not found");
	}
	return 0;
}

//#include<stdio.h>
//int main(){
//	
//	int n,arr[10];
//	int i,el;
//	printf("Enter size of array\n");
//	scanf("%d",&n);
//	printf("Enter array elements\n");
//	for(i=1;i<=n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	printf("Enter element to search\n");
//	scanf("%d",&el);
//	
//	for(i=1;i<=n;i++){
//		if(arr[i]==el){
//			printf("%d found on position %d",el,i);
//			return 0;
//		}
//	}
//	printf("Element not found");
//	
//}
