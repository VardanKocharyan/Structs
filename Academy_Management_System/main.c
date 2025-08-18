#include <stdio.h>
#include "Student.h"

int main(void) {
			
	Student n1;
	
	addStudent( &n1 );
	inputMonthlyExam( &n1 );
	calculateTotal( &n1 );
	checkPassed( &n1 );
	printStudentReport( &n1);
	
	printf("You need to get a minimum score of %.2f in the third month’s exam in order to pass to the next level.\n", minScoreForThirdMonth( n1.monthExams[0], n1.monthExams[1]));

	return 0;
}
