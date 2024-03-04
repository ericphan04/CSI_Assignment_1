#include <stdio.h>
#include <math.h>

void nhapmangnguyen(int n , int x[])
{
    int i ;
    printf ("Nhap vao so luong phan tu cua mang : ");
    scanf ("%d",&n);
    
    printf ("\nNhap vao cac phan tu cua mang : \n");
    for (i = 0 ; i < n ; i++)
    {
        printf ("a[%d] = ",i);
        scanf ("%d",&x[i]);
    }
}

void xuatmangnguyen(int n , int x[])
{
    int i ; 
    printf ("Tat ca cac phan tu vua nhap la : \n");
    for (i = 0 ; i < n ; i++)
    {
        printf ("a[%d] = %d\n",i,x[i]);
    }
}

void nhapmangfloat(int n , float x[])
{
    int i ;
    printf ("Nhap vao so luong phan tu cua mang : ");
    scanf ("%d",&n);
    
    printf ("\nNhap vao cac phan tu cua mang : \n");
    for (i = 0 ; i < n ; i++)
    {
        printf ("a[%d] = ",i);
        scanf ("%f",&x[i]);
    }
}

void xuatmangfloat(int n , float x[])
{
    int i ; 
    printf ("Tat ca cac phan tu vua nhap la : \n");
    for (i = 0 ; i < n ; i++)
    {
        printf ("a[%d] = %f\n",i,x[i]);
    }
}


void nhapmangchar(int n , char x[])
{
    int i ;
    printf ("Nhap vao so luong phan tu cua mang : ");
    scanf ("%d",&n);
    
    printf ("\nNhap vao cac phan tu cua mang : \n");
    for (i = 0 ; i < n ; i++)
    {
        printf ("a[%d] = ",i);
        scanf ("%c",&x[i]);
    }
}


void xuatmangchar(int n , char x[])
{
    int i ; 
    printf ("Tat ca cac phan tu vua nhap la : \n");
    for (i = 0 ; i < n ; i++)
    {
        printf ("a[%d] = %c\n",i,x[i]);
    }
}

int main ()
{
    int x[100];
    float a[100];
    char c[100];
    int n;
    nhapmangnguyen(n,x);
    xuatmangnguyen(n,x);
    nhapmangfloat(n,a);
    xuatmangfloat(n,a);
    nhapmangchar(n,c);
    xuatmangchar(n,c);
}
