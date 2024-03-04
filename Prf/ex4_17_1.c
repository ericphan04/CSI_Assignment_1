/*Write a program to convert the US Dollar into different currencies: 
a.	Euro.
b.	Japanese Yen.
c.	British Pound.
d.	Vietnamese Dong.*/
#include<stdio.h>
int main(){
    float US_Dollar ;
    int opt;
    printf("Select the dollar you want to exchange:\n");
    printf(" 1.Euro.\n ");
    printf("2.Japanese Yen.\n ");
    printf("3.British Pound.\n ");
    printf("4.Vietnamese Dong\n ");
    printf("5.Exit.\n ");
    printf("Your choice: ");
        scanf("%d",&opt);
    switch (opt){
        case 1:
                printf("Enter your Dollar: "); scanf("%f",&US_Dollar);
                float Euro=US_Dollar * 0.92 ;
                printf("Euro: %.2f\n",Euro); break;
        case 2:
                printf("Enter your Dollar: "); scanf("%f",&US_Dollar);
                float Japanese_Yen=US_Dollar * 148.40 ;
                printf("Japanese Yen: %.2f\n",Japanese_Yen); break;
        case 3:
                printf("Enter your Dollar: "); scanf("%f",&US_Dollar);
                float British_Pound=US_Dollar * 0.79 ;
                printf("British Pound: %.2f\n",British_Pound); break;
        case 4:
                printf("Enter your Dollar: "); scanf("%f",&US_Dollar);
                 float Vietnamese_Dong = US_Dollar * 24.54;
                printf("Vietnamese Dong: %.2f\n",Vietnamese_Dong); break;
        case 5:     
                printf("out!!\n");break;
    }
    /*float Euro=US_Dollar * 0.92 ;
    float Japanese_Yen=US_Dollar * 148.40 ;
    float British_Pound=US_Dollar * 0.79 ;
    float Vietnamese_Dong = US_Dollar * 24.54;
    printf("Convert the US Dollar: \n");
    printf("Euro: %.2f\n",Euro);
    printf("Japanese Yen: %.2f\n",Japanese_Yen);
    printf("British Pound: %.2f\n",British_Pound);
    printf("Vietnamese Dong: %.2f",Vietnamese_Dong);*/
    return 0;

    


}