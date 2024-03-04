#include <stdio.h>
int main(){
int a;
int b;
printf("Nhap so km:");
scanf("%d",&a);
printf("Nhap fuel:");
scanf("%d",&b);
printf("Ket qua tieu thu trung binh %d va %d la %f" ,a,b,(float) (a%b)*100);
return 0;
}

