#include <stdio.h>
#include <math.h>
int main(){
    int a;
    int i,j;
    printf ("Nhap a vao: ");
    scanf("%d",&a);
if (a<2){
    printf("Day khong co so nguyen to");
}else if (a == 2){
    printf ("So do chi co 1 so nguyen to la 2");
}else if (a > 2){
    printf ("\nDay cac so nguyen to la 2");
    for (i=5;i<=a;i++){
        if (i % j==0){
            break;
        }else if (j +1>sqrt(i)){
            printf ("%d",i);
                }
            }
        }      
       -   
    return 0;
}