#include <stdlib.h>
#include <stdio.h>
main()
{
	double H, W, BMI;

	printf("How tall are you?(cm)\n");
	scanf_s("%lf", &H);

	printf("How much do you weigh?(kg)\n");
	scanf_s("%lf", &W);

	BMI = W / ((H / 100)*(H / 100));
	printf("Your BMI is %lf\n", BMI);

	if (BMI<18.5) {
		printf("Underweight\n");
	}
	if (BMI >= 18.5&&BMI<25) {
		printf("Normal\n");
	}
	if (BMI >= 25 && BMI<30) {
		printf("Overweight\n");
	}
	if (BMI >= 30) {
		printf("Obese\n");
	}
	system("pause");
	return 0;
}