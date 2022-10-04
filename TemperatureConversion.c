#include <stdio.h>
/**
 * File: Temperature Conversion, converts 
 */

int main() {
    float centigrade, fahrenheit;

    printf("Enter a number in Centigrade to convert: ");

    //reads input from user
    scanf("%d", &centigrade);

    //temperature conversion
    fahrenheit = (centigrade * 9 / 5) + 32;

    //prints conversion
    printf("%2f degrees Fahrenheit.", fahrenheit);

    return 0; //terminates program
}
