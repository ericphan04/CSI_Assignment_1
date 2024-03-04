#include <stdio.h>
int main(){
int a;
int b;
printf("Nhap a:");
scanf("%d", &a);
printf("Nhap b:");
scanf("%d", &b);

printf("Tong cua %d va %d la %d\n,a,b,a+b");
printf("Hieu cua %d va %d la %d\n,a,b,a-b");
printf("Tich cua %d va %d la %d\n,a,b,a*b");
printf("Thuong cua %d va %d la %.2f\n,a,b,(float)a/b");

return 0;
}

