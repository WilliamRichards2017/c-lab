#include <stdio.h> // required for printf

int main() {
    float fahr;
    float celc;
    printf("What is the temperature in degrees Fahrenheit?\n");
    if (scanf("%f", &fahr) != 1) {                                  //returns error if input is not number
        printf("Invalid input - please input a float\n");
        return 0;
    }
    else {
        celc = (fahr - 32) * 5/9;                            
        printf("%.1f degrees Fahrenheit is %.3f degrees celcius\n", fahr, celc);
        
    }
}

