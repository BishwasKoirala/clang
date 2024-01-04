#include <stdio.h>

int main (void) {
int num;
  scanf("%d",&num);
  switch (num) {
    case 1 :
      printf("Harry");
      break;
    case 2 :
      printf("ron");
      break;
    case 3 :
      printf("hermiony");
        break;
    case 4 :
      printf("milfy");
        break;

    // else statement
    default:
      printf("input correct num from 1 to 4");
      break;
  };

  return 0 ;
};