#include <stdio.h>

int navigation = 1;
int motorcount;
double packageweight;
const double maxmotorload = 5.6;

int main(void) {
  while (navigation != 0) {
    printf("How many motors are carrying the packages? ");
    scanf("%d", &motorcount);
    printf("How many kg of packages do we expect? ");
    scanf("%lf", &packageweight);

    if (motorcount * maxmotorload >= packageweight)
      printf("The conveyor belt can carry the packages. \n");
    else
      printf("The conveyor belt cannot carry the packages. \n");

    printf("To exit type 0, to repeat type 1: ");
    scanf("%d", &navigation);
  }
}