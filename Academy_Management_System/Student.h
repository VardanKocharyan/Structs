#ifndef STUDENT_H
#define STUDENT_H

#define SIZE 50
#define ARRSIZE 3

	typedef enum {
		Cpp, Web, AI, DevHack
	} Language;

	typedef enum {
		Computer_Science, Core_Language, Specialties
	} Phase;

	typedef struct {
			char name[SIZE];
			int id;
			Language l;
			Phase p;
			float monthExams[ARRSIZE];
			float totalScore;
			int passed;
	}Student;

	void addStudent(Student* s);
	void inputMonthlyExam(Student*s );
	void calculateTotal(Student*s );
	void checkPassed(Student* s);
	void printStudentReport(Student *s);
	float minScoreForThirdMonth(float , float );
	void passedStudents(Student academy[]);

#endif
