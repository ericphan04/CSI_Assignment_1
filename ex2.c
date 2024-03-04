#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    double delta, x1, x2;

    printf("Nhap so a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if(delta > 0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("Nghiem x1 = %lf\n", x1);
        printf("Nghiem x2 = %lf\n", x2);
        
    } else if(delta == 0) {
        double nghiemkep = -b / (2 * a);
        printf("Nghiem kep = %.2lf\n", nghiemkep);
    } else {
        double phanThuc = -b / (2 * a);
        double phanAo = sqrt(-delta) / (2 * a);

        printf("Nghiem 1 = %.2lf + %.2lfi\n", phanThuc, phanAo);
        printf("Nghiem 2 = %.2lf - %.2lfi\n", phanThuc, phanAo);
    }

    return 0;
}
