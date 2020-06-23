#include <stdio.h>
#include <conio.h>
 main(){
	int a;
	printf("Nhap vao mot thang cua nam: ",a);
	scanf("%d",&a);
	
	while(a>12 || a<1){
		printf("Vui long nhap lai thang: ");
		scanf("%d",&a);
	}
	switch (a){
		case 1:
		case 2:
		case 3:
		printf("\n %d Mua xuan",a); break;
		case 4:
		case 5:
		case 6:
		printf("\n %d Mua ha",a); break;
		case 7:
		case 8:
		case 9:
		printf("\n %d Mua thu",a); break;
		case 10:
		case 11:
		case 12:
		printf("\n %d Mua dong",a); break;
		default :
			printf("\n %d Khong phai thang trong nam",a);
			break;
	}
	getch();
}
