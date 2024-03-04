#include<stdio.h>
void Nhap_float(int m, float b[]) {
    printf("Nhap cac so trong mang: ");
    float i;
    for( i = 0; i < m; i++) {
        scanf("%f", &b[i]);
    }
}

void Xuat_float(int m, float b[]) {
    float i;
	for(i = 0; i < m; i++) {
        printf("%.2f ", b[i]);
    }
    printf("\n");
}
void Nhap_int(int n, int a[]) {
    printf("Nhap cac so trong mang: ");
    int i;
    for( i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void Xuat_int(int n, int a[]) {
    int i;
	for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[5];
    int n = sizeof(a) / sizeof(a[0]);
    Nhap_int(n, a); 
    Xuat_int(n, a);
    float b[5];
    int m = sizeof(b) / sizeof(b[0]);
    Nhap_float(m, b);
    Xuat_float(m, b);
    return 0;
}



