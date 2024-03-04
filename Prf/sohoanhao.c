#include <stdio.h>
int find_perfect_num(int n){
    // flag = 1 => s? hoàn h?o
    // flag = 0 => không ph?i s? hoàn h?o

    int flag = 0, total=0;
    
    //Tìm t?ng u?c s?   
    for (int i=1;i<n; i++){
         if (n % i == 0) total+=i;//N?u là u?c s? thì c?ng vào t?ng
    }
    //So sánh
    if (total == n & n!=0) flag = 1;

    return flag;
}

int main(void){
    int n;
 
    printf(">> nhap mot so n: ");
    scanf("%d",&n);
    int i = 0, check;
    while ( i < n){
        check = find_perfect_num(i);
        if( check == 1 ) printf("%d ", i);
        ++i;
    }
    return 0;

/*#include<stdio.h>
#include<stdbool.h>

	int tim_so_hoanhao(int n){
	
		int flag=0, total=0;
		for( int i=1;i<n; i++){
			if (n % i == 0) total+=i;//neu la uoc so thi cong vao tong
		}
		//so sanh
		if(total == n & n!=0) flag = 1;
		return flag;
		}
		int main(void){
			int n;
			printf("nhap so: "); scanf("%d",&n);
			int i=0, check;
			while( i<n){
				check = tim_so_hoanhao(i);
				if( check == 1)
			
			printf("%d la so hoan hao",i); ++i;}
 
			return 0;
	}
