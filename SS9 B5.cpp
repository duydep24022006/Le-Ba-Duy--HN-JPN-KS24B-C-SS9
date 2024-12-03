#include <stdio.h>
#include <math.h>
#define MAX_SIZE 100 

int main(){
	do{
	int n,currentLength=0,j,sum=0,cnt=0;
	printf("\n     MENU\n");
	printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2. In ra gia tri cac phan tu dang quan ly\n");
	printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
	printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
	printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
	printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
	printf("7. Them mot phan tu vao vi tri chi dinh\n");
	printf("8. Thoat\n");
	printf("Lua chon cua ban:\n");
	scanf("%d",&j);
	int arr[MAX_SIZE];
	int max=arr[0],min=arr[0];
	int Value, Index;
	switch(j){
		case 1 :
			do {
				printf("Nhap so phan tu can nhap (tu 1 den 99): ");
				scanf("%d", &n);
				if (n <= 0 || n > 99) {
			        printf("So phan tu khong hop le! Moi nhap lai.\n");
			        }
			} while (n <= 0 || n > 99);
			for (int i = 0; i < n; i++) {
			        printf("Nhap phan tu thu %d: ", i);
			        scanf("%d", &arr[i]);
    			}
    			currentLength = n;
    		
			break;
		case 2 :
			printf("gia tri cac phan tu dang quan ly\n ");
			for(int i;i<n;i++){
				printf("%d ",arr[i]);
			}
			break;
		case 3 :
			sum=0;
			printf("phan tu chan cua mang la"); 
			 for(int i=0;i<currentLength;i++){
			 	if(arr[i]%2==0){
			 		printf("%d",arr[i]);
					sum += arr[i];
				}
			}
			printf("tong cua phan tu chan la %d",sum);
			break;
		
		case 4:
			for(int i=0;i<currentLength;i++){
				if(arr[i]>max){
					max = arr[i];
				}
				if(arr[i]<min){
					min = arr[i];
				}
			}
			printf("gia tri lon nhat trong mang la : %d \ngia tri nho nhat trong mang la %d",max,min); 
			break;
		case 5 :
			sum=0;
			printf("day la cac so nguyen to trong mang : ");
			for(int i=0;i<currentLength-1;i++){
			if(arr[i]>=2){
				if(i<=sqrt(arr[i])){
					if(arr[i]%i != 0){
						printf("%d",arr[i]);
						sum+=arr[i];
					}
				}
			}	
			}
			printf("tong cua cac so nguyen to co trong mang la %d",sum);
			break;
		case 6 :

			printf("moi ban nhap vao so can thong ke trong mang ");
			scanf("%d",&j);
			for(int i=0;i<currentLength;i++){
				if(arr[i]==j){
					cnt++;	
				}	
			}
			printf("trong mang co %d xuat hien so lan la :%d",j,cnt);
			break;
		case 7 :
			printf("moi ban them  gia tri phan tu ");
			scanf("%d",&Value);
			do{
			printf("moi ban them thu tu cua phan tu ");
			scanf("%d",&Index);
			
			if (Index < 0 || Index > MAX_SIZE - 1) {
			printf("Vi tri khong hop le!\n");
			}
			}while(Index < 0 || Index > MAX_SIZE - 1);
			if(Index > 0 && Index >= currentLength) {
			        arr[Index] = Value;
			        currentLength = Index + 1;
			} else {
			        for (int i = currentLength; i > Index; i--) {
			            arr[i] = arr[i - 1];
			        }
			        arr[Index] = Value;
			        currentLength++;
			   }
			printf("Mang sau khi them: ");
			for (int i = 0; i < currentLength; i++) {
				printf("%d ", arr[i]);
			}
			break;	
		case 8  :
			printf("ban da thoat thanh cong ");
			return 0; 	 
		default:
			printf("cu phap khong hop  le"); 
			break;
		}	
			printf("\n----------------------------------------------------------------");
	}while(1);	
	
	}
								

