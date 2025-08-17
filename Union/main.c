#include <stdio.h>
#include "union.h"
#include <limits.h>

int main(void) {
		
	//Number Representation
/*	union Representation N1;
	N1.inValue = 12;
	printf("inValue = %d\nfValue = %.2f\n", N1.inValue , N1.fValue);
*/

	//Integer–Char Overlap
/*	union Data D1;
	D1.intValue = -1;
	printf("D1.charValue = %c\n", D1.charValue );
*/
	
	//Float–Int Reinterpretation
/*	union Value V1;
	V1.floatValue = 3.14;
	printf("V1.intValue = %d:\n", V1.intValue );
*/

	//Single Storage for Two Types
/*	union Measurement M1;
	char p = '\0';
	do{
		puts("Witch parameter would u Enter:(l to length/w to weight)" );
		scanf( " %c", &p);
	}while( (p != 'l') && (p != 'w') );

	if ( p == 'l' ) {
			printf("M1.length = ");
			scanf( "%d", &M1.length );
			printf("\nM1.length = %d\n", M1.length );
	}
	else {
		printf("M1.weight = ");
		scanf( "%f", &M1.weight );
		printf("\nM1.weight = %.2f\n", M1.weight );
	}
*/

	//Boolean–Integer Test
/*	union Flag F1;
	F1.number = INT_MAX;
	printf("F1.flag = %c\n", F1.flag );
*/

	//Overlapping Time Representation
/*	union Time t1;
	t1.First.hours = 12;
	t1.First.minutes = 30;
	printf( " hours = %d minutes = %d\n", t1.First.hours, t1.First.minutes );
	printf( "totalHours = %f\n", t1.Second.totalHours );

	t1.Second.totalHours = 3.75;
	printf( "totalHours = %f\n", t1.Second.totalHours );
	printf( " hours = %d minutes = %d\n", t1.First.hours, t1.First.minutes );

*/

	//Currency Reuse
	union Currency c;
	printf("Enter usdt: ");
	scanf("%f", &c.usd);

	printf("usdt = %.2f  eur = %.2f\n\n", c.usd, c.eur );

	printf("Enter eur: ");
	scanf("%f", &c.eur);

	printf("usdt = %.2f  eur = %.2f\n\n", c.usd, c.eur );

	return 0;
}
