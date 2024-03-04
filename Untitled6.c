//Count even number letters in an integer number
#include <stdio.h>
#include <math.h>

int main() {
	int n, so;
	printf("Nhap so nguyen ");
	scanf("%d",&n);
	  n = abs(n);
	  int sochan = 0;


    while (n > 0) {
        int so = n % 10;
        
        if ( so % 2 == 0) {
            sochan++;
        }

        n /= 10;
    }

    printf("So chu so chan: %d\n", sochan);
    return 0;
}
