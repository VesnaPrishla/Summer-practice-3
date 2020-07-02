#ifndef _STACK_H
#define _STACK_H
#define MAX 100
struct stack
{
	char elem[MAX];
	int top;
};

//������������� �����
void init_stack(struct stack* stk);

//��������� �������� � ����
void push_stack(struct stack* stk, int f);

//�������� �������� �� �����
char pop_stack(struct stack* stk);

//����������� ���� �� ����
int isempty_stack(struct stack* stk);

#endif // !_STACK_H
