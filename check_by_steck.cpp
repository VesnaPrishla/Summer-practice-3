#include "stack.h"
#include "utilits.h"
#include <stdio.h>
//Функция считывает слово и выдаёт 1 если этослово- палиндром
int check_by_stack(struct stack* stk, int count, char str[MAX + 1])
{
	//счетчик
	int counter = 0, i = 0;
	//recoverable - извлекаемое
	char rec;
	//добавление в стек половины слова
	while (i < count / 2)
	{
		//добавление в стек
		push_stack(stk, str[i]);
		i++;
		//отвечает за то, сколько элементов добавлено в стек
		counter++;
	}
	while (counter != 0)
	{
		rec = pop_stack(stk);
		if (str[count - counter] != rec)
		{
			printf("не палиндром\n");
			return 0;
		}
		counter--;
	}
	return 1;
}

