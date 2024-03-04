/*Write a program to input a positive integer n from the keyboard, then calculate and display to the screen the value of the following expression:
(1 * 1) + (2 * 2) + (3 * 3) + (4 * 4) + (5 * 5) + ... + (n * n).*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter value:");
    scanf("%d",&n);
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result += i * i;
    }
    printf("Result: %d\n", result);
    return 0;
}