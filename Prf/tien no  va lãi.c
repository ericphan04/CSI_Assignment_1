#include <stdio.h>

int main() {
    double soTienConNo, laiSuatHangNam, giaTriThanhToan;
    printf("Nhap so tien con no: ");
    scanf("%lf", &soTienConNo);

    printf("Nhap lai suat hang nam (phan tram): ");
    scanf("%lf", &laiSuatHangNam);

    printf("Nhap gia tri thanh toan hang thang: ");
    scanf("%lf", &giaTriThanhToan);

    double laiSuatHangThang = laiSuatHangNam / 12.0 / 100.0;

    if (giaTriThanhToan <= laiSuatHangThang * soTienConNo) {
        printf("Khoan thanh toan hang thang qua nho de tra het no.\n");
        return 1;
    }

    printf("Thang\tThanh toan($)\tCon no($)\n");

    int thang = 1;
    while (soTienConNo > giaTriThanhToan) {
        double tienLai = soTienConNo * laiSuatHangThang;
        double tienGoc = giaTriThanhToan - tienLai;

        soTienConNo -= tienGoc;

        printf("%d\t%.2lf\t\t%.2lf\n", thang, giaTriThanhToan, soTienConNo);
        thang++;
    }

    double tienLaiCuoiCung = soTienConNo * laiSuatHangThang;
    giaTriThanhToan = soTienConNo + tienLaiCuoiCung;
    soTienConNo = 0;
    printf("%d\t%.2lf\t\t%.2lf\n", thang, giaTriThanhToan, soTienConNo);

    return 0;
}