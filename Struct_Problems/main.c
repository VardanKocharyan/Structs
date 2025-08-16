#include <stdio.h>
#include "struct_header.h"

	
	typedef struct {
		int lenght;
		int width;
	}Rectangle;

	typedef struct {
		float mathGrade;
		float physicsGrade;
		float chemistryGrade;
	}Student;

	typedef struct {
		int ownId;
		float balance;
	}Balance;

	typedef struct {
		float x;
		float y;
	}Euclidean;

	typedef struct {
		int age;
		float weight;
		float hight;
	}Person;

	typedef struct {
			float r;
	}Circle;

	typedef struct {
			float Celsius;
			float Fahrenheit;
	}Temperature;

	typedef struct {
			int a;
			int b;
	}Pair;

int main(void) {

		// Rectangle Area & Perimeter
	/*
	Rectangle A;
	printf("Enter A Rectangel's lenght");
	scanf("%d" , &A.lenght);
	printf("Enter A Rectangel's width");
	scanf("%d" , &A.width);
	
	int area = Rectangle_Area(A.lenght, A.width);
	int perimeter = Rectangle_Perimeter(A.lenght, A.width);
	printf("Area = %d\n" ,  area);
	printf("Perimeter = %d\n" , perimeter);
*/

		//Student Average
/*
	Student Aramik;
	printf("	Aramik's points(0-100):\n");

	printf("Enter Aramik's mathGrade: ");
	scanf("%f", &Aramik.mathGrade);

	printf("Enter Aramik's physicsGrade: ");
	scanf("%f", &Aramik.physicsGrade);

	printf("Aramik’s father has paid $2000 for the chemistry class tuition. It needs to be raised.\n");
	printf("Enter Aramik's chemistryGrade: ");
	scanf("%f", &Aramik.chemistryGrade);
	
	printf("\nAramik's average point is %.2f:\n", Average(Aramik.mathGrade, Aramik.physicsGrade, Aramik.chemistryGrade));
*/

		//Bank Transfer
/*	Balance Karine;
	Balance Ashot;

	Karine.ownId = 1123;
	Ashot.ownId = 2341;
	Karine.balance = 2000;//$
	Ashot.balance = 12030;//$

	printf("Ashot\nId = %d\nbalance = %.2f($)\n\n", Ashot.ownId, Ashot.balance);
	printf("Karine\nId = %d\nbalance = %.2f($)\n\n", Karine.ownId, Karine.balance);

	printf("Ashot transfered 20%% of the money to Karine.\n");

	transfer( &Ashot.balance, &Karine.balance );
	printf("Ashot\nId = %d\nbalance = %.2f($)\n\n", Ashot.ownId, Ashot.balance);
	printf("Karine\nId = %d\nbalance = %.2f($)\n\n", Karine.ownId, Karine.balance);
*/

		//Euclidean distance
/*	Euclidean p1;
	Euclidean p2;

	printf("p1.x = ");
	scanf("%f", &p1.x);
	printf("p1.y = ");
	scanf("%f", &p1.y);

	printf("p2.x = ");
	scanf("%f", &p2.x);
	printf("p2.y = ");
	scanf("%f", &p2.y);
	
	printf("\nEuclidean distance is %.2f\n", Euclidean_distance( p1.x, p1.y, p2.x, p2.y ));
*/
		//Compare Two People’s Age
/*	Person Valod;
	Person Exishe;

	do {
		printf("Enter Valod's age(0-110): ");
		scanf("%d", &Valod.age);
	}while(Valod.age < 0 || Valod.age > 110);

	do {
		printf("Enter Valod's hight(0.3-2.74): ");
		scanf("%f", &Valod.hight);
	}while(Valod.hight < 0.3 || Valod.hight > 2.74);

	printf("\n");
	do {
		printf("Enter Exishe's age(0-110): ");
		scanf("%d", &Exishe.age);
	}while(Exishe.age < 0 || Exishe.age > 110);

	do {
		printf("Enter Exishe's hight(0.3-2.74): ");
		scanf("%f", &Exishe.hight);
	}while(Exishe.hight < 0.3 || Exishe.hight > 2.74);
	printf("\n");
	Define( Valod.age, Valod.hight, Exishe.age, Exishe.hight );
	printf("\n");
*/

		//Circle Measurements
/*	Circle r1;
	do{
		printf("Enter Circle radius(>0): ");
		scanf("%f", &r1.r);
	}while ( r1.r <= 0 );
	printf("\nCircle area is %.2f:\n\n", Circle_area(r1.r));
	printf("Circle circumference is %.2f:\n\n", Circle_circumference(r1.r));
*/

		//Temperature
/*	Temperature temp1;
	printf("Enter temp1.Celsius :");
	scanf("%f", &temp1.Celsius);
	temp1.Fahrenheit = Celsius_to_Fahrenheit(temp1.Celsius);
	printf("temp1.Fahrenheit is %.2f\n", temp1.Fahrenheit);
*/

		//Swap Values Using Struct
/*	Pair nums;
	puts("	Enter the numbers for Swap:\n");
	printf("	Enter nums.a: ");
	scanf("%d", &nums.a);
	printf("	Enter nums.b: ");
	scanf("%d", &nums.b);

	Swap( &nums.a, &nums.b );
	printf("nums.a = %d\nnums.b = %d\n\n", nums.a, nums.b);
*/
		//BMI
	Person Samo;
	
	printf("Enter Samo's weight: ");
	scanf("%f", &Samo.weight);

	printf("\nEnter Samo's hight: ");
	scanf("%f", &Samo.hight);

	float bmi = BMI( Samo.weight, Samo.hight );

	printf("	BMI is %.2f\n", bmi);

	if (bmi < 18.5) printf("underweight:\n");
	else if (bmi >= 18.5 && bmi <= 24.9 ) printf("normal weight:\n");
	else printf("overweight:\n");

	return 0;
}
