#include <stdio.h>

int main() {
    int menu;
    int number, orgnumber, remainder, result = 0;
    char choice;

    do {
        printf("\n    Menu\n");
        printf("1. Armstrong\n");
        printf("2. Prime \n");
        printf("3. Finish \n");
        printf("Choose(1, 2, 3): ");
        scanf("%d", &menu);

        switch(menu) {
            case 1:
                printf("Nhap so Amstrong: ");
                scanf("%d", &number);
                orgnumber = number;
                while (orgnumber != 0) {
                    remainder = orgnumber % 10;
                    result += remainder * remainder * remainder;
                    orgnumber /= 10;
                }
                if(result == number)
                    printf("%d la so Armstrong.\n", number);
                else
                    printf("%d khong phai la so Amstrong.\n", number);
                break;
            case 2:
                printf("Nhap so nguyen to: ");
                scanf("%d", &number);
                int nguyento = 1;
                for(int i = 2; i <= number / 2; i++) {
                    if(number % i == 0) {
                        nguyento = 0;
                        break;
                    }
                }
                if(nguyento == 1 && number != 1)
                    printf("%d la so nguyen to.\n", number);
                else
                    printf("%d khong phai so nguyen to.\n", number);
                break;
            case 3:
                printf("Ban da hoan thanh chua (Y/N)? ");
                scanf(" %c", &choice);
                if(choice == 'y' || choice == 'y')
                    return 0;
                break;
            default:
                printf("Hay nhap lai.\n");
        }
    } while(menu != 3 || (choice != 'c' && choice != 'C'));

    return 0;
}
