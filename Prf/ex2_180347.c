#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int* random(int m, int n, int k) {
    int* arr = (int*)malloc(k * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < k; i++) {
        arr[i] = rand() % (n - m + 1) + m;
    }
    return arr;
}

float trungbinh(int* arr, int k) {
    float sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }
    return sum / k;
}

int demso(int* arr, int k, int number) {
    int count = 0;
    for (int i = 0; i < k; i++) {
        if (arr[i] == number) {
            count++;
        }
    }
    return count;
}

int main() {
    int m, n, k;
    printf("Nhap gia tri m: ");
    scanf("%d", &m);
    printf("Nhap gia tri n: ");
    scanf("%d", &n);
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &k);

    if (m > n) {
        printf("Gia tri m phai nho hon hoac bang gia tri n.\n");
        return 1;
    }

    int* arr = random(m, n, k);

    printf("Cac phan tu cua mang:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    float average = trungbinh(arr, k);
    printf("Trung binh cong cua mang: %.2f\n", average);

    int number;
    printf("Nhap so can dem so lan xuat hien trong mang: ");
    scanf("%d", &number);
    int occurrences = demso(arr, k, number);
    printf("So lan xuat hien cua %d trong mang: %d\n", number, occurrences);

    free(arr); 
    return 0;
}