#include <stdio.h>
int main(){
	int a;
 		printf("Nhap so: ");
 		scanf("%d",&a);
 	if(a>0){
 		switch(a%2) {
 			case 0:
 				printf("so %d la so chan",a);
 				break;
 				case 1:
 				printf("so %d la so le",a);
 				break;
		 }
}
return 0;
}

