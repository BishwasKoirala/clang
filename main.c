#include <stdio.h>

int main (void) {
  // 一度処理してから条件に従う
  int i = 10;
  do {
    printf("do while statement");
  }while (i < 5);
  
  return 0;
};