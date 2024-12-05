#include<stdio.h>
int main() {
	int rows,cols;
	int choice; 
	int arr[100] [100];
	do{
		printf("--MENU--\n") ;
		printf("1. nhap so phan tu va gia tri cho mang\n") ;
		printf("2. in ra gia tri cac phan tu trong mang theo dang (arr[0] = 1,arr[1]= 5...)\n");
		printf("3. dem so luong cac so hoan hao co trong mang. biet so hoan hao la so co tong cac uoc bang chinh no\n");
		printf("4. tim gia tri nho thu 2 trong mang,khong duoc sap xep mang") ;
		printf("5. them 1 phan tu vao vi tri dau tien trong mang, phan tu moi them vao mang phai do nguoi dung nhap vao\n");
		printf("6. xoa 1 phan tu tai mot vi tri cu the(nguoi dung nhap vi tri)\n");
		printf("7. sap xep mang theo thu tu giam dan(selection sort)\n");
		printf("8. tim kiem phan tu trong mang,phan tu tim kiem do nguoi dung nhap vao, su dung thuat toan binary search\n");
		printf("9. sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so le dung truoc,so chan dung sau\n");
		printf("10. dao nguoc thu tu cua cac phan tu co trong mang va hien thi ra toan bo phan tu co trong mang theo dang (arr[0]=1 - le,arr[1]=2 - chan\n");
		printf("moi ban nhap lua chon\n") ;
		scanf("%d",&choice);
		  switch(choice){
		  	case 1:
			  printf("moi ban nhap so hang");
			  scanf("%d",&rows);
			  printf("moi ban nhap so cot");
			  scanf("%d",&cols);
			  printf("moi ban nhap cac phan tu cho mang");
			  for(int i = 0;i <rows; i++) {
			  	for(int j= 0; j <cols; j++) {
			  		printf("phan tu vi tri [%d][%d]",i,j);
			  		scanf("%d",&arr[i][j]);
				  }
			  }
			  break;
			  case 2:
			  	for(int i = 0;i <rows;i++){
			  		for(int j = 0;j <cols;j++) {
			  			printf("%d \t",arr[i][j]);
					  }
				  } break;
				  case 3:
				   	if(rows>0 && cols>0){
					long long result =1;
					for(int i=0;i<rows;i++){
						for(int j=0; j<cols; j++){
							if(i==0||i==rows-1||j==0||j==cols-1){
								printf("%d\t", arr[i][j]);
								result= result * arr[i][j];
							}else{
								printf("\t");
							}
						}
						printf("\n");
					}
					printf("cac so hoan hao co trong mang la: %lld\n", result);
				}else{
					printf("Vui long nhap lai kich co cua mang\n");
				}
			break;
			
			
				
			 
				   
		}
			   
		
	}while(choice!=10);
	
	
	
	
	
	return 0; 
}
