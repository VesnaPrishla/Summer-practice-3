#include "stack.h"
#include <stdio.h>
//Функция считывает слово и выдаёт 1 если этослово- палиндром
int check_stack(struct stack* stk, int count)
{
int i = 0, j = 0; char k, s[MAX];
printf("Введите слово : ");
gets_s(s);
for (i = 0; s[i] != '\0'; i++)
{
	push_stack(stk, s[i]);//добавление в стек
	count++;
}
if (count % 2 == 0)
{
	for (i = 0; i <= count / 2 - 1; i++) //заполнение массива символов для половины стека
		s[i] = pop_stack(stk);
	i = 0; j = 0;

	for (i = count / 2, j = count / 2 - 1; i < count, j >= 0; i++, j--)//j  по массиву от 1 до 0, i  по стеку 
	{

		k = pop_stack2(stk, i, count); //функция извлечения элементов из стека для i-го элемента
		if (s[j] != k)
		{
			printf(" не палиндром\n");
			return 0;
		}
	}
}
else
{
	for (i = 0; i <= count / 2; i++)//заполнение массива символов для большей (на 1) части стека
		s[i] = pop_stack(stk);
	i = 0; j = 0;
	for (i = count / 2 + 1, j = count / 2 - 1; i < count, j >= 0; i++, j--)//j  по массиву от 1 до 0, i  по стеку 
	{
		k = pop_stack2(stk, i, count); //функция извлечения элементов из стека для i-го элемента
		if (s[j] != k)
		{
			printf(" не палиндром\n");
			return 0;
		}
	}
}

return  1;
}

