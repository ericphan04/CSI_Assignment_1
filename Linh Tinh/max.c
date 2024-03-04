#include <stdio.h>
int main(){
	int a;
	int b;
	int c,max;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	printf("Nhap c: ");
	scanf("%d",&c);
	if(a > b && a > c){
		max=a;
	}
	else if(a < b && b > c ){
			max=b;
	}
	else if (c > b && c > a ){
			max=c;
}
printf(" Max la %d",max);
return 0;
}

