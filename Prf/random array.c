/*1.	Generate an array of integer has k elements with random value between m and n */
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void nhap_random( int *array,int k,int m,int n){
	srand(time(NULL));
	printf("Nhap phan tu k:"); scanf("%d",&k);
	printf("Nhap m: "); scanf("%d",&m);
	printf("Nhap n: ");	scanf("%d",&n);
	if(m>n){
		int temp = m;
        m = n;
        n = temp;
	}
	
	printf("Mang ngau nhien: [");
	int i;
	for(i=0; i <k ;i++){
		array[i] = rand() % (n - m + 1) + m;
		printf("%d  ",array[i]);
		 if (i < k - 1) {
            printf(", ");
	}
	printf("]\n");
	}
void Tinh_trung_binh(float trung_binh,int *array ,float sum, int k){
	sum += array[i];
	float trung_binh = sum / k;
	prinft("Trung binh cua mang la: %.2f",trung_binh);

}
int main(){
	int i,m,n,k;
	float sum, trung_binh;
	nhaprandom	(i,m,n,k);
	Tinh_trung_binh(trung_binh,sum);
	return 0;
	
}
