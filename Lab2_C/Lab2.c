#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

double task17(double x, double y) {
	
	printf("\n\nЗавдання 17: ln|(y - sqrt(|x|)) * (x - y / (x + x^2 / 4))|\n");
	// Логіка завдання 17
	double d_x = x + x * x / 4;

	if (d_x == 0) {
		printf("Вираз не має вмісту при таких значеннях х та y\n");
		return 0;
	}
	else {
		double exp1 = y - sqrt(fabs(x));
		double exp2 = x - y / d_x;

		if (exp1 * exp2 == 0) {
			printf("Вираз не має вмісту при таких значеннях х та y\n");
			return 0;
		}
		else {
			double result = log(fabs(exp1 * exp2));
			return result;
		}
	}
}
double task51(double x) {
	printf("\n\nЗавдання 51: log3(2x - 4) / (x^2 - 1)\n");

	// Логіка завдання 51
	if (x * x == 1 || x <= 2) {
		printf("Вираз не має вмісту при таких значеннях х\n");
		return 0;
	}
	else {
		double result = (log(2 * x - 4) / log(3)) / (x * x - 1);
		return result;
	}
}
double task54(double x) {
	printf("\n\nЗавдання 54: 1 / log5(x^2 - 9)\n");

	// Логіка завдання 54
	if (x * x - 9 <= 0 || x * x - 9 == 1) {
		printf("Вираз не має вмісту при таких значеннях х\n");
		return 0;
	}
	else {
		double result = 1 / (log(x * x - 9) / log(5));
		return result;
	}
}
double task55(double x) {
	printf("\n\nЗавдання 55: sqrt(2x - 5) / (x^2 + 4x - 5)\n");

	// Логіка завдання 55
	if (2 * x - 5 < 0 || x == 1 || x == -5) {
		printf("Вираз не має вмісту при таких значеннях х\n");
		return 0;
	}
	else {
		double result = sqrt(2 * x - 5) / (x * x + 4 * x - 5);
		return result;
	}
}
double task58(double x) {
	printf("\n\nЗавдання 58: (x - 1) / sqrt(x^2 - 4x + 3)\n");

	// Логіка завдання 58
	if (x >= 1 || x <= 3) {
		printf("Вираз не має вмісту при таких значеннях х\n");
		return 0;
	}
	else {
		double result = (x - 1) / sqrt(x * x - 4 * x + 3);
		return result;
	}
}

int main() {
	
	// Оголошення та обов'язкова ініціалізація змінних
	double x = 0.0;
	double y = 0.0;

	system("chcp 65001 > nul");

	// Логіка введення значень на початку один раз задля подальшого використання для усіх завдань
	printf("Введіть значення x: ");
	scanf_s("%lf", &x);
	printf("Введіть значення y: ");
	scanf_s("%lf", &y);

	// Виконання завдання 17
	 double end1 = task17(x, y);
	// Виведення результатів завдання 17
	 printf("Результат завдання 17: %.2lf\n", end1);
	// Виконання завдання 51
	 double end2 = task51(x);
	// Виведення результатів завдання 51
	 printf("Результат завдання 51: %.2lf\n", end2);
	 // Виконання завдання 54
	 double end3 = task54(x);
	 // Виведення результатів завдання 54
	 printf("Результат завдання 54: %.2lf\n", end3);
	 // Виконання завдання 55
	 double end4 = task55(x);
	 // Виведення результатів завдання 55
	 printf("Результат завдання 55: %.2lf\n", end4);
	 // Виконання завдання 58	
	 double end5 = task58(x);
	 // Виведення результатів завдання 58
	 printf("Результат завдання 58: %.2lf\n", end5);

	return 0;
}
