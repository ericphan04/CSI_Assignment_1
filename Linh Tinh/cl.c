#include <stdio.h>
int main(){
int a;
printf("Nhap so nguyen: ");
scanf("%d",&a);
if(a % 2==0 && a > 0) 
printf("La so duong chan ");
else
printf(" La so duong le");

if(a % 2 == 0 && a < 0)
	printf("La so am chan");
else
	printf("La so am le ");
return 0;
}

