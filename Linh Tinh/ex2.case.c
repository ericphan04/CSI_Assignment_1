#include <stdio.h>
int main(){
	int a,b;
	char operator;
	printf("Moi ban nhap vao phep tinh");
	scanf("%d %d", &a, &b);
	
	printf("MOi ban nhap vao 2 so a va b");
	scanf("%d %d", &a, &b);
	
	switch (operator){
		case '+':
			printf("%d + %d = %d", a, b, a +b);
			break;
		case '-':
			printf("%d - %d = %d", a, b, a -b);
			break;
		case '*':
			printf("%d * %d = %d", a, b, a*b);
			break;
		case '/':
			printf("%d / %d = %d", a, b, a/b);
			break;
		default:
			printf("Input invalid!");
	} 
return 0;
}

