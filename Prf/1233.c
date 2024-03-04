#include<stdio.h>
#include<math.h>

int main() {
    int menu;
    int number, orgnumber, remainder, result = 0;
    int n, count = 0;

    printf("    Menu\n");
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
            result = 0; // Initialize result to zero
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
            scanf("%d", &n);
            if(n < 2){
                printf("%d is not a prime number.\n", n);
                return 0;
            }
            for( i = 2; i <= sqrt(n); i++){
                if(n % i == 0){
                    count++;
                    break; // If we find any divisor, it's not a prime number, so we can stop checking further.
                }
            }
            if(count == 0){
                printf("%d is a prime number.\n", n);
            }else{
                printf("%d is not a prime number.\n", n);
            }
            break;
        case 3:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice! Please choose again.\n");
            break;
    }
    
    return 0;
}

