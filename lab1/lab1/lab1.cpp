using namespace std;//задание 1
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <time.h>
#include <iostream>

int main() {

	char* locale = setlocale(LC_ALL, "");
	int a[5], i, b = 0, c = 6;

	srand(time(0));

	for (i = 0; i < 5; i++)
		a[i] = 1 + rand() % 5;
	for (i = 0; i < 5; i++)
		cout << a[i] << " ";

	for (i = 0; i < 5; i++)
		if (a[i] > b)
			b = a[i];
	for (i = 0; i < 5; i++)
		if (a[i] < c)
			c = a[i];
	cout << '\n' << "max = " << b << '\n' << "min = " << c << '\n' << "RAZN = " << b - c;


}



#define _CRT_SECURE_NO_WARNINGS//задание 2
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <clocale>

int main() {

	char* locale = setlocale(LC_ALL, "");
	int i, n;
	scanf("%d", &n);
	int* a;
	a = (int*)malloc(n * sizeof(int));
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % 10;
		printf(" %d", a[i]);
	}

}





#define _CRT_SECURE_NO_WARNINGS // задание 3
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
	const int maxNumber = 100;
	int* p = 0;
	unsigned i, size;

	do {
		printf("Enter number from 0 to %d: ", maxNumber);
		scanf("%d", &size);
		if (size < maxNumber) {
			break;
		}
	} while (1);

	p = (int*)malloc(size * sizeof(int));

	for (i = 0; i < size; i++) {
		p[i] = i * i;
	}

	for (i = 0; i < size; i++) {
		printf("%d ", p[i]);
	}

	_getch();
	free(p);
}





#include <stdio.h> // задание 4
#include <conio.h>
#include <stdlib.h>
#include <clocale>
int main() {
	char* locale = setlocale(LC_ALL, "");
	int a[6][5], m, n, min = 1000, sum = 0;
	for (m = 0; m < 6; m++)
	{
		for (n = 0; n < 5; n++)
		{
			a[m][n] = rand() % 10;
		}
	}
	printf("Сгенерированная матрица:\n");
	for (m = 0; m < 6; m++)
	{
		for (n = 0; n < 5; n++)
		{
			printf("%4d ", a[m][n]);
		}
		printf("\n");
	}
	printf("\nCуммы столбцов:");
	for (n = 0; n < 5; n++)
	{
		for (m = 0; m < 6; m++)
		{
			sum += a[m][n];
		}
		printf("%4d", sum);
		sum = 0;
	}
	_getch();
	return 0;
}





using namespace std; //задание 5
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include <ctime>
#include <cmath>
#include <locale.h>
#include <windows.h>
using namespace std;
int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	int i;
	struct student
	{
		char famil[20];
		char name[20], facult[20];
	}
	stud[3];
	struct finder
	{
		char key[20];
	}
	find[1];
	for (i = 0; i < 3; i++)
	{
		printf("Введите фамилию студента\n");
		scanf("%20s", stud[i].famil);
	}
	for (i = 0; i < 3; i++)
	{
		printf("Введите имя студента %s\n", stud[i].famil);
		scanf("%20s", stud[i].name);
	}
	for (i = 0; i < 3; i++)
	{
		printf("Введите название факультета студента %s %s\n", stud[i].famil, stud[i].name);
		scanf("%20s", stud[i].facult);
	}
	for (i = 0; i < 3; i++)
	{
		printf("Cтудент %s %s обучается на факультете %s\n", stud[i].famil, stud[i].name, stud[i].facult);
	}
	system("PAUSE");
	printf("Введите данные для нахождения подробной информации(фамилию):");
	scanf("%20s", find[1].key);
	for (int i = 0; i < 3; i++) {
		if (strcmp(find[1].key, stud[i].famil) == 0) {
			cout << "Фамилия: " << stud[i].famil << "\n";
			cout << "Имя: " << stud[i].name << "\n";
			cout << "Факультет: " << stud[i].facult << "\n";
		}
	}
}
