#include <stdio.h>
int main(){
	float Tb;
	printf("Diem TB cua hoc sinh la: ");
	scanf("%f",&Tb);
	if(10>=Tb && Tb>=9)
	    printf("\nHoc sinh xuat sac: %f",Tb);
	if(9 >Tb && Tb>= 8)
        printf("\nHoc sinh gioi: %f",Tb);
    if(8 >Tb && Tb>=6.5)
        printf("\nHoc sinh kha: %f",Tb);
    if(6.5 >Tb && Tb>=5)
        printf("\nHoc sinh trung binh: %f",Tb);
    if(5>Tb && Tb>=0)
        printf("\nHoc sinh yeu: %f",Tb);
}
