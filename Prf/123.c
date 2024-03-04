/*Building a program menu
Write a program to build a menu as follows and perform the corresponding functions as shown below.
If the user selects menu 1: Ask to enter a number and check whether the number is a Armstrong's number or not.
If the user selects menu 2: Ask to enter a number and check whether the number is a prime number or not.
If the user selects menu 3: Display the question “Do you want to finish (c/k)?”. If the user enters “c”, exit the program; If the user enters “k”, allow to reselect the menu.*/
#include<stdio.h>

int main() {
    int menu;
    int number, orgnumber, remainder, result = 0;
    int n,  count = 0;;
    printf("    Menu\n");
    printf("1. Armstrong\n");
    printf("2. Prime \n");
    printf("3. Finish \n");
    printf("Choose(1, 2, 3): ");
    scanf("%d", &menu);
    
    switch(menu) {
        case 1:
            printf("Nhap so Armstrong: ");
            scanf("%d", &number);
            orgnumber = number;
            while (orgnumber != 0) {
                remainder = orgnumber % 10;
                result += remainder * remainder * remainder;
                orgnumber /= 10;
            }
            if(result == number)
                printf("%d la so Amstrong.\n", number);
            else
                printf("%d Khong Armstrong number.\n", number); 
            break;
        case 2:
	    printf("\nNhap n = ");
	    scanf("%d", &n);
	    if(n < 2){
	        printf("\n%d khong phai so nguyen to", n);
	        return 0;
	    }
	    for(i = 2; i <= sqrt(n); i++){
	        if(n % i == 0){
	            count++;
	            break;
	        }
	    }
	    if(count == 0){
	        printf("\n%d la so nguyen to", n);
	    }else{
	        printf("\n%d khong phai so nguyen to", n);
	    }
}            break;
        case 3:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice! Please choose again.\n");
            break;
    }
    
    return 0;
}

