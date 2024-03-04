#include <stdio.h>
int main(){
	int a,b,c,d,max;
	printf("Nhap a:"); scanf("%d",&a);
	printf("Nhap b:"); scanf("%d",&b);
	printf("Nhap c:"); scanf("%d",&c);
	printf("Nhap d:"); scanf("%d",&d);
	if (a>b  && a>c && a>d) {
	max=a;
	}
	else if (b>a && b>c && b>d){
	max=b;
	}
	 else if (c>a && c>b && c>d){
	max=c;
	}
    else if (d>a && d>b && d>c){
	max=d;
	}
	printf("Max la %d",max);
return 0;
}

