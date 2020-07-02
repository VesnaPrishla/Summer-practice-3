#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 100
struct queue
{
	char qu[MAX];
	int rear, frnt;
};
void init_queue(struct queue* q) //инициализация очереди
{
	q->frnt = 1;
	q->rear = 0;
	return;
}

void push_queue(struct queue* q, int x, int n) //добавление элемента в очередь
{
	if (q->rear < MAX)
	{
		q->qu[q->rear] = x;
		q->rear++;
	}
	else
		printf("Очередь полна!\n");
	return;
}

int isempty_queue(struct queue* q) //проверка,  пуста ли очередь
{
	if (q->rear < q->frnt)    //если количество rear меньше чем frnt!
		return 1;               //очередь пуста
	else  return 0;
}

int pop_queue(struct queue* q) //извлечение элементов из очереди
{
	char x;
	if (isempty_queue(q) == 1)
	{
		printf("Очередь пуста!\n");
		return(0);
	}
	x = q->qu[q->frnt - 1];
	q->frnt++;
	return x;
}
struct stack
{
	char elem[MAX];
	int top;
};
void init_stack(struct stack* stk) //инициализация стека
{
	stk->top = 0;
}
void push_stack(struct stack* stk, int f, int n)//помещение элемента в стек
{
	if (stk->top < MAX)
	{
		stk->elem[stk->top] = f;
		stk->top++;
	}
	else
		printf("Стек полон\n");
}
char pop_stack(struct stack* stk) //удаление элемента из стека
{
	char elem;
	if ((stk->top) > 0)
	{
		stk->top--;
		elem = stk->elem[stk->top];
		return elem;
	}
	else
	{
		printf("Стек пуст!\n");
		return 0;
	}
}

int isempty_stack(struct stack* stk) //определение пуст ли стек
{
	if (stk->top == 0)
		return 1;
	else return 0;
}

int sravnenie(struct stack* s, struct queue* q, int count1)
{

	while ((isempty_queue(q) != 1) && (isempty_stack(s) != 1) && (count1 - 1 != 0)) //единица это пуста 
	{
		if (pop_stack(s) != pop_queue(q))
			return 0;
		count1--;
	}
	return 1;
}
/*пока стек и очередь не пусты
	если стека поп не равно очередь поп
	ретерн 0

	в конце 1*/



	//Функция корректного ввода
int right_input(int* n)
{
	int is_correct;
	while (1)
	{
		is_correct = scanf_s("%d", n);
		if (!is_correct)
		{
			while (getchar() != '\n');
			printf("Try again");
			continue;
		}
		return *n;
	}
}
//Функция корректного, положительного ввода
void overheating_protection(int* n)
{
	do
	{
		printf("\nPrint positive\n");
		right_input(n);
	} while (*n <= 0);

}

void vvod_slova(int count)
{

}

int main()
{
	setlocale(LC_ALL, "RUS");

	int  n = 0, count = 0, count1 = 0, i = 0, perepolnenie = 0;
	char a, k, elem;

	struct queue* q;
	q = (struct queue*)malloc(sizeof(struct queue));
	if (!q)
	{
		printf("Не удалось выделить память\n");
		return NULL;
	}

	init_queue(q);// инициализация queue
	struct stack* stk;
	stk = (struct stack*)malloc(sizeof(struct stack));
	if (!stk)
	{
		printf("Не удалось выделить память\n");
		return NULL;
	}
	init_stack(stk); //инициализация stack
	overheating_protection(&n);


	printf("Введите слово: ");

	if (i == 0)
	{
		scanf("%c", &a);
		i++;
	}

	for (i = 1; i <= n; i++)
	{
		scanf("%c", &a);
		push_queue(q, a, n); //добавление в очередь
		push_stack(stk, a, n);//добавление в стек

	}
	printf("\n");

	/*printf("введите очередь\n");
	do
	{
		a = getchar();
		//putchar(a);
		push_queue(q, a); //добавление в очередь
		push_stack(stk, a); //добавление в стек
		count1++;
	} while (a != '.');//не работает
	*/




	if (sravnenie(stk, q, count1) == 0)
		printf("\nслово не палиндром\n");
	else
		printf("\nслово палиндром\n");


	/*for (struct queue* cur = q; cur != NULL;) //очистка памяти
	{
		q = cur;
		cur = cur->frnt;  //я не знаю что сделать с этой очисткой!
		free(q);
	}
	for (struct stack* cur = stk; cur != NULL;) //очистка памяти
	{
		stk = cur;
		cur = cur->top;
		free(stk);
	}*/

	system("pause");
	return 0;
}

/*берешь два стека
1234
1 - 1234
начало на 4
4321
2- 1234

4321       4321
сравнивать через поп
в очереди поп с конца
в стеке поп с начала

пока не стек и очередь не пусты
если стека поп не равно очередь поп
ретерн 0

в конце 1

через гетс




*/