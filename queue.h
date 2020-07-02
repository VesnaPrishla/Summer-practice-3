#ifndef _QUEUE_H
#define _QUEUE_H
#include <stdio.h>
#define MAX 100
//Структура очереди
struct queue
{
	char qu[MAX];
	int rear, frnt;
};

//Инициализация очереди
void init_queue(struct queue* q);

//Добавление элемента в очередь
void push_queue(struct queue* q, int x);

//Проверка,  пуста ли очередь
int isempty_queue(struct queue* q);

//Извлечение элементов из очереди
int pop_queue(struct queue* q);

#endif // _QUEUE_H

