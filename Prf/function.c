#include<stdio.h>
#include<stdbool.h>

int sum (int n){
	int i, S=0;
	for (i=1;i<=n;i++)
		S = S + i;
		return S;
}
void sum1 (int n){
	int i, S=0;
	for (i=1;i<=n;i++)
		S = S + i;
			printf("Tong = %d ",S);


}
void main(){
	int m = 0;
	int tong = sum(m);
	printf(" Tong = %d",tong);
	sum1 (m);
	getch();
} 

