// program: traverce array using stack
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define maxsize 10

int stack[maxsize], top = -1;
void push(int val)
{
    top++;
    stack[top] = val;
}
int pop()
{
    int k = stack[top];
    top--;
    return k;
}

void main()
{
    int n, array[10], i;

    printf("Enter value\n");
    scanf("%d", &n);

    printf("Enter an element of array :\n ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        push(array[i]);
    }

    for (i = 0; i < n; i++)
    {
        array[i] = pop();
    }

    printf("\nreverce array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%3d", array[i]);
    }
}