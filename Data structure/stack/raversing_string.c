#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
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

    char string[10];
    int i;

    printf("Enter a string :\n ");
    scanf("%s", string);

    for (i = 0; i < strlen(string); i++)
        push(string[i]);

    for (i = 0; i < strlen(string); i++)
        string[i] = pop();

    printf("Reversed String is: %s\n", string); 

}