#include <stdio.h>
#include <conio.h>
int main(){
    int i,S=0,n;
    printf("Nhap N:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        if(n % 2!= 0){
            S = S + i*i;
    }
    }
    printf("Tong binh phuong cac so le la: %d",S);
    }




