#include <stdio.h>
int main(){
  float diem;
  printf("Nhao vao diem so: ");
  scanf("%f",&diem);
  if(diem >=0 && diem <= 10){
  	if(diem >=9){
  		printf("hoc sinh xuat sac");
	  }
  	}else if(diem>=8){
  		printf("hoc sinh gioi");
  	}
  	else if(diem>=7){
  		printf("hoc sinh kha");
  	}
  	else if(diem>=6){
  		printf("hoc sinh TBkha");
  	}	
	else if(diem>=5){
  		printf("hoc sinh trung binh");
  	}else{
  		printf("hoc sinh yeu");
	}
  	
return 0;
}

