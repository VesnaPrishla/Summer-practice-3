#include "utilits.h"
#include <stdio.h>
#include <string.h>
#include "queue.h"
#include "stack.h"
#define MAX 100
//¬вод
void input_word(char str[MAX + 1], int* count)
{
	//счетчик
	int i = 0;
	//считываемый символ
	char c;
	//ввод слова
	printf("¬ведите слово : ");
	//пока считываемый символ не \0 или не этнер или есть куда класть этот символ
	while (((c = getchar()) != '\0') && (c != '\n') && (i <= MAX))
	{
		str[i] = c;
		(*count)++;
		i++;
	}
	str[MAX] = '\0';
	//если количество букв в слове меньше меньше ћј’имального количества букв то колиечство 
	if (MAX < *count)
	{
		*count = MAX;
		printf("\nмаксимальное количество букв %d\n", *count);
	}
	return;
}