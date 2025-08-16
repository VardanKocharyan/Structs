#include <stdio.h>

void transfer( float* p1, float* p2 ){
		*p2 += ( *p1 / 5);
		*p1 = ( *p1 / 5 ) * 4;
}
