#include <stdio.h>
#include <stdlib.h>

int capacity = 10;
int length = 0;
int* arr;

void creat_stack(int capacity);
void push(int a);
int pop();
void del_stack();
void print_intarr(int *a, int length);

void main()
{
	int a;
	creat_stack(capacity);
	push(1);
	push(2);
	push(3);
	push(1);
	push(2);
	push(3);
	push(1);
	push(2);
	push(3);
	push(1);
	push(2);
	push(3);
	print_intarr(arr, length);
	a = pop();
	printf_s("%d\n", a);
	a = pop();
	printf_s("%d\n", a);
	a = pop();
	printf_s("%d\n", a);
	a = pop();
	printf_s("%d\n", a);
	del_stack();
}

void creat_stack(int capacity)
{
	arr = (int*)malloc(capacity * sizeof(int));
	if (arr == NULL)
		printf_s("为栈分配内存失败！\n");
	printf_s("栈建立成功！\n");
}

void push(int a)
{
	if (length >= capacity)
	{
		capacity *= 2;
		arr = (int*)realloc(arr,capacity * sizeof(int));
	}
	arr[length] = a;
	length++;
}

int pop()
{
	int a;
	if (length <= 0)
	{
		printf_s("栈空了！\n");
		return -1;
	}
	a = arr[length - 1];
	length--;
	return a;
}

void del_stack()
{
	free(arr);
	arr = NULL;
	printf_s("删除栈成功！\n");
}

void print_intarr(int *a, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf_s("%d  ", a[i]);
	}
	printf_s("\n");
}
