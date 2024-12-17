#include<stdio.h>
void nhapham ( int *x , int *arr ){
	printf("\nhay nhap so luong phan tu: ");
		scanf("%d",x);
		for(int i = 0 ;i < *x ;i++){
			printf("[%d] = ",i);
			scanf("%d",&arr[i]);
		}
}

void hienthi (int x , int *arr ){
	printf("cac phan tu trong mang la: ");
		for(int i = 0 ;i < x ;i++){
			printf("%d",*(arr +i));
		}
}

void tinhtong (int x , int *ptr ){
	int sum=0;
	for(int i = 0;i < x ;i++){
		sum = sum + *(ptr +i);
	}
	printf("tong: %d",sum);
}

void phantulonnhat ( int x , int *ptr){
	
	int max = *ptr;
    for (int i = 1; i < x; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf(" Phan tu lon nhat la: %d\n", max);
}


int main(){
 	int x;
 	int arr[100];
	int *ptr = arr;
	int chon; 
	do{	
	printf("\n1. nhap vao so luong phan tu vaf tung phan tu");
	printf("\n2. hen thi cac phan tu trong mang ");
	printf("\n3. tinh do dai mang");
	printf("\n4. tinh tong cac phan tu trong mang ");	
	printf("\n5. hien thi phan tu lown nhat");
	printf("\n6 . thoat");
	printf("\nlua chon cua ban : ");
	scanf("%d",&chon);
	
	switch(chon){
		case 1:
 		nhapham (&x , arr );
		break;
		case 2: // hien thi cac phan tu 
		hienthi( x , arr );
		break;	
		
		case 3 : //tinh do dai cua mang 
		printf("do dai mang la: %d",x);
		break;
			
		case 4:
		tinhtong (x , arr );	
		break;	
		
		case 5:
		phantulonnhat ( x , arr);	
		break;	
		
			
			
			
	}// switch
	
	
	
	
	
	
	
	
}while(chon!= 6);
	return 0;
}
