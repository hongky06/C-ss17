#include<stdio.h>
#include<string.h>


void demsoluongchucai( char *ptr , int length  ){
int a = 0;
for (int i = 0 ;i < length	  ;i++){
		if(*(ptr + i ) >= 'A' && *(ptr + i ) <= 'Z' || *(ptr + i ) >= 'a' && *(ptr + i ) <= 'z' ){
			a++;
		}
	}
	printf(" so luong chu cai la: %d ",a);	
}

void demsoluongso ( char *ptr , int length ){
int b =0; 
	for (int i = 0 ;i < length	  ;i++){
		if(*(ptr + i ) >= '0' && *(ptr + i ) <= '9' ){
			b++;
		}
	}
	printf(" so luong so la: %d ",b);		
}

void demsoluongkitu (char *ptr ,int  length){	
int c=0;
for (int i = 0 ;i < length ;i++){
		if(*(ptr + i ) >= '0' && *(ptr + i ) <= '9' ){
		}else{
			if (*(ptr + i )>= 'a' && *(ptr + i )<= 'z'){
			}
			else{
				c++;
			}
		}
	}
	c = c-1; 
	
for (int i = 0 ;i < length ;i++){	
	if( *(ptr+i ) == ' ' ){
		c--;
	} 
}
printf(" so luong ki tu la: %d ",c);			
}


int main(){
 	char string[100];
 	char *ptr = string;
	int chon; 
	int length;
	do{	
	printf("\n1. nhap ");
	printf("\n2.in");
	printf("\n3.chu cai ");
	printf("\n4. so ");	
	printf("\n5. ki tu ");	
	printf("\n6 . thoat");
	printf("\nlua chon cua ban : ");
	scanf("%d",&chon);
	getchar();	
	switch(chon){
		case 1:
 		printf("nhap ham: ");	
 		fgets(string , sizeof(string), stdin);
 	//	string[strcspn(string ,"\n")] = '\0';
 		length = strlen(string);
		break;
		case 2: // hien thi cac phan tu 
		printf("cac phan tu la : %s",string);
		break;
		case 3 :// dem so luong chu cai  
		demsoluongchucai( ptr , length  );
		break;
			
		case 4:
		demsoluongso ( ptr , length );	
		break;	
		
		case 5:
			demsoluongkitu (ptr , length);
		break;	
		
		
					
	}// switch
	
	
	
	
	
	
	
	
}while(chon!= 6);
	return 0;
}
