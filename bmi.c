#include <stdio.h>

double bmi (double taijyu , double sinchou) {
  return taijyu / (sinchou * sinchou);
};


int main (void) {

  double myTaijyu = 54;
  // 身長はメートルで入力
  double mySintyou = 1.625;

  double result = bmi(myTaijyu , mySintyou);

  printf("BMIは%f",result);
  return 0;
};
