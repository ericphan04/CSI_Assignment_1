#include<stdio.h>
#include<string.h>
void Nhap_float(int n, float b[]) {
    printf("Nhap cac so trong mang: ");
    int i;
    for( i = 0; i < n	; i++) {
        scanf("%f", &b[i]);
    }
}

void Xuat_float(int n, float b[]) {
    int i;
	for(i = 0; i < n; i++) {
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
void Nhap_char(char* s){
	printf("Nhap ki tu : ");
	int i;
	for (i=0;i<5;i++) 
	scanf("%c",&s[i]);
}
void Xuat_char(char s[]){
	int i;
	for (i=0;i<5;i++) 
	printf("%c",s[i]);
}
int main() {
	int i;
    int a[5];
    int n = sizeof(a) / sizeof(a[0]);
    Nhap_int(n, a); 
    Xuat_int(n, a);
    float b[5];
    int m = sizeof(b) / sizeof(b[0]);
    Nhap_float(n, b);
    Xuat_float(n, b);
	char s[5];
	Nhap_char(s);
	Xuat_char(s);
    return 0;
}


