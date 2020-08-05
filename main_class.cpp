#include <iostream>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "russian");
	//Задача 1
	double x,y, z;
	scanf_s("%lf", &x);
	y = (int) x;
	z = x - y;
	printf("%.0lf\t%.2lf\n", y,z);
	//Задача 2
	int x1;
	scanf_s("%d",&x1);
	x1 = x1 % 10;
	printf("%d\n", x1);
	//Задача 3
	int seconds, minutes, hours;
	scanf_s("%d", &seconds);
	hours = seconds / 3600;
	minutes = (seconds / 60) % 60;
	seconds %= 60;
	printf("%d hours%8d minutes%8d seconds\n", hours, minutes, seconds);
	//Задача 4
	int x2, y2;
	scanf_s("%d", &x2);
	y2 = x2 % 10;
	x2 = x2 / 10;
	printf("%d%d\n",y2,x2);
	//Задача 5
	int x3;
	scanf_s("%d", &x3);
	x3 = (x3 % 10*10)+ (x3 / 10 % 10);
	printf("%d\n", x3);
	system("pause");
	return 0;
}