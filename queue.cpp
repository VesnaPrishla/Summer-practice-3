#include "queue.h"
#define MAX 100
//Инициализация очереди
void init_queue(struct queue* q) 
{
	q->frnt = 1;
	q->rear = 0;
	return;
}
//Добавление элемента в очередь
void push_queue(struct queue* q, int x) 
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
//Проверка,  пуста ли очередь
int isempty_queue(struct queue* q) 
{
	if (q->rear < q->frnt)    //если количество rear меньше чем frnt!
		return 1;               //очередь пуста
	else  return 0;
}

//Извлечение элементов из очереди
int pop_queue(struct queue* q) 
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