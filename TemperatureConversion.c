#include <stdio.h>
/**
 * File: Temperature Conversion, converts 
 * By: Joshua Corrales
 */

int main() {
    float centigrade, fahrenheit;

    printf("Enter a number in Centigrade to convert: ");

    //reads input from user
    scanf("%f", &centigrade);

    //temperature conversion
    fahrenheit = ((centigrade * 9 / 5) + 32);

    //prints conversion
    printf("%.6f degrees Test.", fahrenheit);

    return 0; //terminates program
}
