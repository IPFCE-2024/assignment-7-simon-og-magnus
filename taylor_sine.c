#include "taylor_sine.h"
#include <math.h>



long long factorial(int n)
{
    if (n == 0) {
        return 1;  // Base case: 0! = 1
    }
    return n * factorial(n - 1);  // Recursive call
}
double power(double base, int exponent){
  double result = 1.0;
  for (int i = 0; i < exponent; i++){
    result *= base;
  } return result;
}

double taylor_sine(double x, int n) {
  // implement your function here
 
  double result = 0.0; 

  for (int i = 0; i < n; i++){

    int exponent = 2 * i + 1;
    // double term = power (x, exponent) / factorial(exponent);

    if (i % 2 == 0)
      result += power (x, exponent) / factorial(exponent);
    else 
      result -= power (x, exponent) / factorial(exponent);
    
  } return result;
}



