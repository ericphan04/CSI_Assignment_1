/*3.	Write a program to print the positive number entered by the user. If the user enters a negative number, it is skipped.*/
#include<stdio.h>
int main(){
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    if (a > 0){
    printf("You entered a positive number:%d \n",a);
    }
    
     return 0;

}