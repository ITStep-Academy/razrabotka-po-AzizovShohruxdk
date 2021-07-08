#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "russian");
	//Задача 1
	double x,y, z;
	scanf_s("%lf", &x);
	y = (int) x;
	z = x - y;
	printf("%.0lf\n%.2lf\n", y,z);
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
	printf(" hours:%d\n minutes:%d\n seconds:%d\n", hours, minutes, seconds);
	//Задача 4
	int x2, y2;
	scanf_s("%d", &x2);
	y2 = x2 % 10;
	x2 = x2 / 10;
	printf("%d\n%d\n",y2,x2);
	//Задача 5
	int x3;
	scanf_s("%d", &x3);
	x3 = (x3 % 10*10) + (x3 / 10 % 10);
	printf("%d\n", x3);
	//Задача 6
	scanf_s("%d", &x3);
	x3 = x3 / 10 % 10;
	printf("%d\n", x3);
	//Задача 7
	int i = 2147483647;
	cout << i;
	cout <<"\t" <<i+1 << endl;
	//Задача 8
	long long int minll = 9223372036854775808,maxll= 9223372036854775807;
	printf("%-10lld\n%10lld\n",minll,maxll);
	//Задача 9
	minll = -4,maxll=-16;
	minll %= 15, maxll /= 30;
	printf("%d\n%d\n", minll,maxll);
	//Задача 10
	int aa, bb, cc,dd;
	scanf_s("%d%d%d%d", &aa,&bb,&cc,&dd);
	aa++;
	bb *= (25 + aa);
	cc--;
	bb -= (3 * dd);
	printf("%d\n%d\n%d\n%d\n", aa,bb,cc,dd);
	//Задача 11
	int xx;
	printf("Введите число от 8 до 15: ");
	scanf_s("%d", &xx);
	if (xx < 8 || xx>15) {
		printf("Error\n");
	}
	else {
		printf("%x\n", xx);
	}
	system("pause");
	return 0;
}