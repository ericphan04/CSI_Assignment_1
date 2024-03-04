#include <stdio.h>
int main(){
    int o, x, y;

    char a='Z';
    char b= 90;
    char c= 0132;
    char d= 0x5A ;
printf(" %c , %c, %c, %c \n ", a,b ,c,d);
printf("What's your name?\n");
scanf("%s",&o);
printf("How old are you?\n");
scanf("%d",&x);
printf("What is your score in English?\n");
scanf("%f",&y);
return 0; 
}