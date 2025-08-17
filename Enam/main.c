#include <stdio.h>
#include "enum.h"
#define SIZE 4

int main (void) {

	//Enum for Seasons
/*	Season s;
	int m = 0;
	do{
		printf("Enter which season the month belongs to (1 - 12):");
		scanf( "%d", &m );
	}while( (m < 1) || (m > 12) );

	if ( (m > 2) && (m < 6) ) {
		s = SPRING;
		printf("%d\n", (int)s);
	}
	else if ( ( m > 5) && ( m < 9)){
			s = SUMMER;
			printf("%d\n", (int)s);
	}

	else if( (m  > 8) && (m < 12) ) {
			s = FALL;
			printf("%d\n", (int)s);
	}
	else {
			s = WINTER;
			printf("%d\n", (int)s);
	}
*/

	//Enum and Switch
/*	Signal s;

	int sign = 0;
	do{
			printf( "Enter the signel (0-2):" );
			scanf( "%d", &sign );
	}while( (sign < 0) || (sign > 2) );

	switch (sign) {
		case RED:
			printf(" STOP\n");
			break;

		case YELLOW:
			printf(" READY\n");
			break;

		default:
			printf("Go\n");
			break;
	}
*/

	//Enum with Loop and Array
/*	int arr[SIZE] = { 400, 1000, 1800, 2400 };
	int name = 0;

	do{
			printf("Enter pizza: (0 = SMALL, 1 = MEDIUM, 2 = LARGE, 3 = EXTRA_LARGE.)");
			scanf( "%d", &name );
	}while( (name < 0) || (name > 3) );
	
	switch (name) {
			case SMALL:
				printf("SMALL pizza");
				break;
			case(MEDIUM):
				printf("MEDIUM pizza");
				break;
			case(LARGE):
				printf("LARGE pizza");
				break;
			default:
				printf("EXTRA_LARGE pizza");
				break;
	}
	printf(" %d\n\n", arr[name]);
*/

	//Enum with Flags (Bitmask)
	int num = 0;
	do{
		printf("Enter the num:");
		scanf( "%d", &num );
	}while(num < 0);
	
	while(num){
			if ( num / EXECUTE ) {
					printf(" EXECUTE ");
					num -= EXECUTE;
			}
			else if ( num / WRITE ) {
					printf(" WRITE ");
					num -= WRITE;
			}
			else if ( num ) {
					printf(" READ ");
					num -= READ;
			}
			
			if ( num ) {
					printf("+");
			}
	}

	return 0;
}
