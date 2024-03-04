#include <stdio.h>
#include <string.h>

int main(){
  char text1[100];
  char text2[100];
fgets (text1, sizeof(text1), stdin);
fgets (text2, sizeof(text2), stdin);
int length1 = 0;

  // lặp đến khi xuất hiện ký tự '\0'
  while (text1[length1] != '\0') {
    ++length1;
  }
  printf("%d\n", length1);
  int length2 = 0;

  // lặp đến khi xuất hiện ký tự '\0'
  while (text2[length2] != '\0') {
    ++length2;
  }
  printf("%d\n", length2);
  length1 > length2 ? printf("text1 dai hon ") : printf("text2 dai hon ");

}