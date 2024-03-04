#include<stdio.h>
#include<conio.h>
int main(){
   int i, s, n;
   printf("Nhap gia tri: ");
   scanf("%d",&n);
    for(i=1;i<=n;i++);{
if(i%2!=0)
    {s= s+i*i;
    }
}
printf("Tong binh phuong cac so le la: %d ",s );
getch();
}