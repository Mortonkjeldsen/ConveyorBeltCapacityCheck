#include <stdio.h>

int motorcount;
double packageweight;
const double maxmotorload = 5.6;

int main(void) {
  printf("How many motors are carrying the packages? ");
  scanf("%d", &motorcount);
  printf("How many kg of packages do we expect? ");
  scanf("%lf", &packageweight);

  if (motorcount * maxmotorload >= packageweight)
    printf("The conveyor belt can carry the packages.");
  else
    printf("The conveyor belt cannot carry the packages.");
}