#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "taylor_sine.h"

#define pi 3.14159265358979323846

int main (void){
  double angle1 = pi/2;
  double test1 = sin(angle1);
  printf("Taylor of sin(pi/2) is: %f", test1);

    double vores_sin = taylor_sine(pi/2, 9);
    printf("\nVores funktion af sin(pi/2) is: %f", vores_sin);

  double angle2 = pi/4;
  double test2 = sin(test2);
  printf("\nTaylor of sin(pi/4) is: %f", test2);

    double vores_sin2 = taylor_sine(pi/4, 9);
    printf("\nVores funktion af sin(pi/4) is: %f", vores_sin2);

  double angle3 = pi;
  double test3 = sin(test3);
  printf("\nTaylor of sin(pi) is: %f", test3);

    double vores_sin3 = taylor_sine(pi, 9);
    printf("\nVores funktion af sin(pi) is: %f", vores_sin3);

 return 0;
}