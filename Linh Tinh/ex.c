#include <stdio.h>
int main(){
	int a;
	printf("Nhap a: ");
	scanf("d",&a);
	switch(a){
		case 1:
			printf("TH1");
			break;
		case 2:
			printf("TH2");
			break;
		case 9:
			printf("TH9");
			break;
		default:
			printf(" khong co");
	}
return 0;
}

