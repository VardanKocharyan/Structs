#include <stdio.h>
#define CF 1.8

float Celsius_to_Fahrenheit( float c ) {
		return (c * CF) + 32;
}

float Fahrenheit_to_Celsius( float f ) {
		return (f - 32)/CF;
}
