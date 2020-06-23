#include <stdio.h>
int main(){
	printf("Nhap vao 3 so nguyen");
	int a,b,c;
	float TBC;
	printf("\n Hay nhap 1 so a: ");
    scanf("%d",&a);
    printf("\n Hay nhap 1 so b: ");
    scanf("%d",&b);
    printf("\n Hay nhap 1 so c: ");
    scanf("%d",&c);
    printf("TBC cua 3 so %d,%d,%d la: %f",a,b,c, TBC=((a+b+c)/3));
  //  printf("TBC cua 3 so nguyen la: ((%d+%d+%d)/3 )= %f ",a,b,c,TBC=(a+b+c)/3;
}
