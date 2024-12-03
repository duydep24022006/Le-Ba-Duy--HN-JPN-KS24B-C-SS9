#include <stdio.h>

int main(){
	int arr[5]={1,2,3,4,5},index,value;
	int size=sizeof(arr) / sizeof(arr[0]);
	printf("moi ban nhap vi tri can sua ");
	scanf("%d",&index); 
	printf("moi ban nhap gia tri moi sau khi sua ");
	scanf("%d",&value); 
	arr[index]=value; 
	for(int i=0;i<size;i++){
		printf("%d",arr[i]); 
	}
	 return 0; 

	 
} 
