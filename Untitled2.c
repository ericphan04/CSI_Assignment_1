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
