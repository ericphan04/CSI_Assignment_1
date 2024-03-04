#include <stdio.h>
#include <math.h>
int main(){
int  m, n, opt, a, cvdt;
float x,y,z,p, S ;
printf("|                                                  MENU                                                     |\n");
printf("------------------------------------------------------------------------------------------------------------|\n");
printf("---1. Nhap vao thang va nam\n");
printf("---2. Nhap vao 1 so nguyen, chia het cho 2\n");
printf("---3. Nhap vao 3 so, kiem tra 3 so do co 3 canh cua 1 tam giac khong. Neu phai thi tinh chu vi tam giac\n");
printf("---4. Thoat\n");
printf("Moi ban lua chon:");
scanf("%d",&opt);
switch(opt){
case 1:
	printf("Nhap vao thang: "); scanf("%d",&m);
	printf("Nhap vao nam: "); scanf("%d",&y);
	switch(m){
	
		case 1:
		case 2:
		case 3:
			printf("Quy 1, co 90 ngay "); break;
		case 4:
		case 5:
		case 6:
			printf("Quy 2, co 91 ngay"); break;
		case 7:
		case 8:
		case 9:
			printf("Quy 3, co 92 ngay"); break;
		case 10:
		case 11:
		case 12:
			printf("Quy 4, co 92 ngay"); break;
		default:
			printf("Nhap sai roi");  break;}
	break;	
case 2:
	printf("Nhap vao so nguyen:"); scanf("%d",&a);
	if ( a % 2 == 0) 	{ printf("%d chia het cho 2",a);}
	else printf(" %d khong chia het cho 2",a);
	break;
case 3:
	printf("Nhap 3 so:"); scanf("%f %f %f",&x,&y,&z);
	p = x + y + z ;
	S = sqrt(p * (p-x) * (p-y) *(p-z));
	if( x+y>z && x+z>y && y+z>x)
 		{ printf ("Ba so la 3 canh cua tam giac\n");}
 	else
	    { printf("3 canh khong the tao thanh 1 hinh tam giac\n");  }
	
printf("---------------------------------------|\n");
printf("-1.Tinh chu vi\n");
printf("-2.Tinh dien tich\n");
printf("-3. Thoat\n");
printf("Moi ban lua chon:\n");
scanf("%d",&cvdt);
switch(cvdt){

	case 1:
	  	printf ("Chu vi cua tam giac nay la: %f",p);
		break;
	case 2:
	printf("Dien tich hinh tam giac la: %.2f", S);}
    break;
case 4:
	printf("ngu");
}
}

	




