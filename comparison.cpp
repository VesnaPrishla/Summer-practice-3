#include "comparison.h"
#include "queue.h"
#include "stack.h"
int comparison(struct stack* s, struct queue* q, int count)
{

	while ((isempty_queue(q) != 1) && (isempty_stack(s) != 1) && (count != 0)) //единица это пуста 
	{
		if (pop_stack(s) != pop_queue(q))
			return 0;
		count--;
	}
	return 1;
}