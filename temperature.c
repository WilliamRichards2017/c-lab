#include <stdio.h> // required for printf

int main() {
   float fahr;
   printf("What is the temperature in degrees Fahrenheit?\n");
   scanf("%f", &fahr);
   float cels = (fahr - 32) * 5/9;
   printf("%.1f degrees Fahrenheit is %.3f degrees Celcius.\n", fahr,cels);


}
