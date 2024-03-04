#include<stdio.h>
int main(){
    int opt;
printf("Thang 1\n");
printf("Thang 2\n");
printf("Thang 3\n");
printf("Thang 4\n");
printf("Thang 5\n");
printf("Thang 6\n");
printf("Thang 7\n");
printf("Thang 8\n");
printf("Thang 9\n");
printf("Thang 10\n");
printf("Thang 11\n");
printf("Thang 12\n");
printf("Nhap thang ban muon biet:"); scanf("%d",&opt);

return 1;
switch(opt){
    case 1:
    case 2:
    case 3:
    printf("Thang nay la mua xuan"); break;
    case 4:
    case 5:
    case 6:
    printf("Thang nay la mua ha"); break;
    case 7:
    case 8:
    case 9:
    printf("Thang nay la mua thu"); break;
    case 10:
    case 11:
    case 12:
    prinft("Thang nay la mua dong"); break;   
    default:
    printf("Khong co thang nay");
    break;
    }   
return 0;
}
