//Використовуючи масив типу структура, скласти програму, для виведення інформації про студентів, середній 
//бал яких вище 4, 76, якщо про кожного студента відомо : його прізвище, номер групи, бал з математики, з української
//мови, з хімії, з біології та з фізкультури, а також дату народження.

#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#define SIZE 15
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	struct student
	{
		char name[40];
		int groop;
		int data[3];
		float math, lang, chem, biol, pe;
		float ball;
	}
	massiv[SIZE];
	int i, size = 0;
	printf("Кількість студентів - ");
	scanf("%d", &size);
	getchar();
	puts("\t Дані: ");
	for (i = 0; i < size; i++)
	{
		printf("\n Прізвище: ");
		scanf("%s", &massiv[i].name);
		printf("\n Номер групи: ");
		scanf("%d", &massiv[i].groop);
		printf("\n Дата: ");
		scanf("%d.%d.%d%0", &massiv[i].data[0], &massiv[i].data[1], &massiv[i].data[2]);
		printf("\n Математика : ");
		scanf("%f", &massiv[i].math);
		printf("\n Мова: ");
		scanf("%f", &massiv[i].lang);
		printf("\n Хімія: ");
		scanf("%f", &massiv[i].chem);
		printf("\n Біолгія: ");
		scanf("%f", &massiv[i].biol);
		printf("\n Фіз-ра: ");
		scanf("%f", &massiv[i].pe);
		massiv[i].ball = (massiv[i].math + massiv[i].lang + massiv[i].chem + massiv[i].biol +
			massiv[i].pe) / 5;
		printf("\n Середній бал: %.2f", massiv[i].ball);
	}
	for (i = 0; i < size; i++)
	{
		if (massiv[i].ball >= 4.76)
		{
			printf("\nПрізвище : %s ", massiv[i].name);
			printf("\nГрупа : %d", massiv[i].groop);
			printf("\nРік народження : %d.%d.%d%0", massiv[i].data[0], massiv[i].data[1],
				massiv[i].data[2]);
			printf("\nСередній бал: %.2f", massiv[i].ball);
		}
	}
	return 0;
}