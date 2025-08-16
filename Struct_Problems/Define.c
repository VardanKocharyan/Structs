#include <stdio.h>

void Define(int va, float vh, int ea, float eh) {
		if ( va > ea ) {
				printf("Vladimir is older than Exishe.\n");
		}
		else if ( va == ea ) {
				printf("Their ages are equal.\n");
		}
		else {
				printf("Exishe is olde than Vladimir.\n");
		}

		if ( vh > eh ) {
				printf("Vladimir is higher than Exishe.\n");
		}
		else if ( vh == eh ) {
				printf("Their higtes are equal.\n");
		}
		else {
				printf("Exishe is higher than Vladimir.\n");
		}

}
