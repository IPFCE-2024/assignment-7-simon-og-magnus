#include "taylor_sine.h"
#include <math.h>


//Definerer funtionen
long long factorial(int n)
{
    if (n == 0) { //Hvis n er lig med 0, så retunerer vi fejl
        return 1;
    }
    return n * factorial(n - 1);  // basen n ganger vi med funktionen igen ift n-1 
}
//Definerer funktionen for power (potens)
double power(double base, int exponent){ //vi har en base og en eksponent
  double result = 1.0; 
  for (int i = 0; i < exponent; i++){
    result *= base; //result = result * base indtil i er lige så stor som eksponenten
  } return result;
}
//definerer taylor funktionen ift. sinus
double taylor_sine(double x, int n) {
 
  double result = 0.0; 

  for (int i = 0; i < n; i++){ //looper over n terms for funktionen

    int exponent = 2 * i + 1; //beregner eksponenten for sinus funktionen
    
    //Beregner eksponeten i funktionen. Hvis 'i' er lige, så tilføjer den termet
    if (i % 2 == 0)
      result += power (x, exponent) / factorial(exponent);
    else //hvis 'i' er ulige, træk termet fra 
      result -= power (x, exponent) / factorial(exponent);
    
  } return result;
}



