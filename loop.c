#include <stdio.h>

int main (void) {
  // 一度処理してから条件に従う
  int n = 5;

  for(int i = 0; i <= n;i++) {
    for (int j = 0; j <= i ; j++) {
      printf("*");
    };
    printf("\n");
  };
  
  return 0;
};