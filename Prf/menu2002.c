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
                printf("Enter a number to check if it's Armstrong: ");
                scanf("%d", &number);
                orgnumber = number;
                while (orgnumber != 0) {
                    remainder = orgnumber % 10;
                    result += remainder * remainder * remainder;
                    orgnumber /= 10;
                }
                if(result == number)
                    printf("%d is an Armstrong number.\n", number);
                else
                    printf("%d is not an Armstrong number.\n", number);
                break;
            case 2:
                printf("Enter a number to check if it's prime: ");
                scanf("%d", &number);
                int isPrime = 1;
                for(int i = 2; i <= number / 2; i++) {
                    if(number % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
                if(isPrime == 1 && number != 1)
                    printf("%d is a prime number.\n", number);
                else
                    printf("%d is not a prime number.\n", number);
                break;
            case 3:
                printf("Do you want to finish (c/k)? ");
                scanf(" %c", &choice);
                if(choice == 'c' || choice == 'C')
                    return 0;
                break;
            default:
                printf("Invalid choice! Please choose again.\n");
        }
    } while(menu != 3 || (choice != 'c' && choice != 'C'));

    return 0;
}

