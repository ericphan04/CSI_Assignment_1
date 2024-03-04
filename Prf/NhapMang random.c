#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void nhap_random(int *array, int k, int m, int n, int i) {
    srand(time(NULL));
    printf("Nhap phan tu k: ");
    scanf("%d", &k);
    printf("Nhap m: ");
    scanf("%d", &m);
    printf("Nhap n: ");
    scanf("%d", &n);

    if (m > n) {
        int temp = m;
        m = n;
        n = temp;
    }

    printf("Mang ngau nhien: [");
    for (i = 0; i < k; i++) {
        array[i] = rand() % (n - m + 1) + m;
        printf("%d  ", array[i]);
        if (i < k - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

float tinh_trung_binh(int *array, int k) {
    float sum = 0.0;
    int i;
    for ( i = 0; i < k; i++) {
        sum += array[i];
    }
        float trung_binh = (float) sum / k;
    printf("Trung binh cua mang la: %f\n", trung_binh);
   
}

int main() {
    int i, m, n, k;
    float trung_binh;
	int array[100];  

    nhap_random(array, k, m, n,i);
    trung_binh = tinh_trung_binh(array, k);
    return 0;
}

