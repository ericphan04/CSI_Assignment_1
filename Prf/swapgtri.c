#include<stdio.h>
void swap(int*a, int*b){
	int t;
	t = *a ;
	*a = *b;
	*b = t;
}
int main(){

	int a,b;
	printf("Nhap a,b: "); scanf("%d%d",&a,&b);
	printf(" truoc khi thay doi: a = %d, b = %d\n",a,b);
	swap(&a,&b);
	printf(" sau khi thay doi: a = %d, b = %d\n",a,b);

}
	
