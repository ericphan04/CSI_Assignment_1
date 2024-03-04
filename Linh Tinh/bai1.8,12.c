#include <stdio.h>
int main(){
float gio,tien,luonggoc,luonglamthem ;
printf("Nhap so gio lam: ");scanf("%f",&gio);
printf("Nhap luong gio lam: ");scanf("%f",&tien);
if( gio <= 40)
{printf("Tien luong tong cong = gio * tien=%f", gio*tien);}
else
{luonglamthem = (tien * 1.5 )*( gio - 40 );
  luonggoc= gio * tien;
  printf ("Luong tong cong= %f ",luonglamthem + luonggoc);}




}

