#include <stdio.h>
int main(){
	int a,b,h;
	printf("Nhap vao hai canh a,b:");
	scanf("%d%d",&a,&b);
	printf("\n Nhap vao duong cao h:");
	scanf("%d", &h);
	printf("dien tich hinh binh hanh la: ((%d+%d)*%d/2)= %f",a,b,h,((a+b)*h/2));
	
}
