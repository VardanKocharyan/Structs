#include <stdio.h>
#include "Student.h"

void addStudent(Student* s){
		puts("Enter student name: ");
		fgets( s->name, SIZE, stdin );

		printf("student id. ");
		scanf( "%d", &s->id );

		int num = 0;

		do{
			printf("lenguage (0-C++, 1-Web, 2-AI, 3-DevHack):");
			scanf("%d", &num);

		} while(num < 0 || num > 3 );

		switch(num) {
			case Cpp: 
				s->l = Cpp;
				break;
			case Web:
				s->l = Web;
				break;
			case AI:
				s->l = AI;
				break;
			default:
				s->l = DevHack;
				break;
		}
	
		num = 0;

		do{
			printf("phase (0-Computer_Science, 1-Core_Language, 2-Specialties):");
			scanf("%d", &num);
		}while(num < 0 || num > 2);

		switch (num) {
				case Computer_Science:
					s->p = Computer_Science;
					break;
				case Core_Language:
					s->p =  Core_Language;
					break;
				default:
					s->p = Specialties;
					break;
		}
}

void inputMonthlyExam(Student* s){
		printf("	input Monthly Exam\n");
		for (int i = 0; i < ARRSIZE; ++i) {
				do{
						printf("Month%d . ", i + 1);
						scanf("%f", &(s->monthExams[i]) );
				}while( (s->monthExams[i] < 0 ) || (s->monthExams[i] > 100) );
		}
}

void calculateTotal(Student* s){
	s->totalScore  = ( (s->monthExams[0] + s->monthExams[1] ) * 0.1) + (s->monthExams[2] * 0.8);
}


void checkPassed(Student* s){
	s->passed = ( s->totalScore >= 80 ); 
}

void printStudentReport(Student *s){
		printf("	Student name ");
		puts(s->name );
		printf("id = %d\n", s->id);
		
		printf("Academy phase . ");
		switch ( s->l ) {
				case Cpp:
					printf("C++\n");
					break;
				case Web:
					printf("Web\n");
					break;
				case AI:
					printf("AI\n");
					break;
				default:
					printf("DevHack\n");
					break;
		}
		printf("Academy phase . ");
		switch (s->p) {
				case Computer_Science:
					printf("Computer_Science\n");
					break;
				case Core_Language:
						printf("Core_Language\n");
						break;
				default:
						printf("Specialties\n");
						break;
		}

		printf("exam scores  %.2f, %.2f, %.2f\n", s->monthExams[0], s->monthExams[1], s->monthExams[2] );
		printf("total score  %.2f\n", s->totalScore );
		(s->passed == 1) ? printf("	pass\n") : printf("		fail\n");
}

float minScoreForThirdMonth(float month1, float month2) {
		return (80 - ( month1 + month2 ) * 0.1 )/ 0.8;
}

