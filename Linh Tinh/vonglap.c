#include <stdio.h>

int main() {
  int n,i,dau = 1;
  float S= 0;
  //Nhap n den khi n>=0

  do
  {
    printf("Nhap n:");
    scanf("%d",&n);
  } while (n<0);
  //thuc hien tinh S= 1 - 1/2 + 1/3 +...+1/n
  for (i=1; i<=n;i++)
  {   printf("S=%f",S);
      S = S + (1.0+);
    /* code */
  }
  
  /*int n,i ;
  double S = 1.0;

  printf("Nhap gia tri: ");
  scanf("%d",&n);
  if(n>0){
    int i;
    for (i=1; i <= n; i++){
        if(i % 2==0){
            S -= 1.0/i;
        }else {
            S += 1.0/i;
        }
    }
    printf("Gia tri cua bieu thuc S la: %lf\n", S);
}
else {
    printf("Nhap n >= 0");
}

/*  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      S -= 1.0 / i;
    } else {
      S += 1.0 / i;
    }
  }

  printf("The value of S is: %.2lf\n", S);

*/
  return 0;
}
